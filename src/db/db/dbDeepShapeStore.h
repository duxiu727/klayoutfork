
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/


#ifndef HDR_dbDeepShapeStore
#define HDR_dbDeepShapeStore

#include "dbCommon.h"

#include "tlObject.h"
#include "tlStableVector.h"
#include "tlThreads.h"
#include "dbLayout.h"
#include "dbRecursiveShapeIterator.h"
#include "dbHierarchyBuilder.h"
#include "gsiObject.h"

#include <set>
#include <map>

namespace db {

class DeepShapeStore;
class Region;

/**
 *  @brief Represents a shape collection from the deep shape store
 *
 *  This is a lightweight class pointing into the deep shape store.
 *  DeepLayer objects are issued by the DeepShapeStore class.
 */
class DB_PUBLIC DeepLayer
{
public:
  /**
   *  @brief Default constructor
   */
  DeepLayer ();

  /**
   *  @brief Destructor
   */
  ~DeepLayer ();

  /**
   *  @brief Conversion operator from Region to DeepLayer
   *  This requires the Region to be a DeepRegion. Otherwise, this constructor will assert
   */
  DeepLayer (const Region &region);

  /**
   *  @brief Copy constructor
   */
  DeepLayer (const DeepLayer &other);

  /**
   *  @brief Assignment
   */
  DeepLayer &operator= (const DeepLayer &other);

  /**
   *  @brief Less operator
   */
  bool operator< (const DeepLayer &other) const;

  /**
   *  @brief Equality operator
   */
  bool operator== (const DeepLayer &other) const;

  /**
   *  @brief Gets the layout object
   *  The return value is guaranteed to be non-null.
   */
  Layout &layout();

  /**
   *  @brief Gets the layout object (const version)
   */
  const db::Layout &layout () const;

  /**
   *  @brief Gets the layout object
   *  The return value is guaranteed to be non-null.
   */
  Cell &initial_cell();

  /**
   *  @brief Gets the initial cell object (const version)
   */
  const db::Cell &initial_cell () const;

  /**
   *  @brief Gets the layer
   */
  unsigned int layer () const
  {
    return m_layer;
  }

  /**
   *  @brief Gets the layout index
   */
  unsigned int layout_index () const
  {
    return m_layout;
  }

  /**
   *  @brief Inserts the layer into the given layout, starting from the given cell and into the given layer
   */
  void insert_into (Layout *into_layout, db::cell_index_type into_cell, unsigned int into_layer) const;

  /**
   *  @brief Creates a derived new deep layer
   *  Derived layers use the same layout and context, but are initially
   *  empty layers for use as output layers on the same hierarchy.
   */
  DeepLayer derived () const;

  /**
   *  @brief Creates a copy of this layer
   */
  DeepLayer copy () const;

  /**
   *  @brief Gets the shape store object
   *  This is a pure const version to prevent manipulation of the store.
   *  This method is intended to fetch configuration options from the store.
   */
  const DeepShapeStore *store () const
  {
    check_dss ();
    return mp_store.get ();
  }

private:
  friend class DeepShapeStore;

  /**
   *  @brief The constructor
   */
  DeepLayer (DeepShapeStore *store, unsigned int layout, unsigned int layer);

  void check_dss () const;

  tl::weak_ptr<DeepShapeStore> mp_store;
  unsigned int m_layout;
  unsigned int m_layer;
};

struct DB_PUBLIC RecursiveShapeIteratorCompareForTargetHierarchy
{
  bool operator () (const db::RecursiveShapeIterator &a, const db::RecursiveShapeIterator &b) const
  {
    return db::compare_iterators_with_respect_to_target_hierarchy (a, b) < 0;
  }
};

/**
 *  @brief The "deep shape store" is a working model for the hierarchical ("deep") processor
 *
 *  The deep shape store keeps temporary data for the deep shape processor.
 *  It mainly consists of layout objects holding the hierarchy trees and layers
 *  for the actual shapes.
 *
 *  The deep shape store provides the basis for working with deep regions. On preparation,
 *  shapes are copied into the deep shape store. After fininishing, the shapes are copied
 *  back into the original layout. The deep shape store provides the methods and
 *  algorithms for doing the preparation and transfer.
 */
class DB_PUBLIC DeepShapeStore
  : public tl::Object, public gsi::ObjectBase
{
public:
  /**
   *  @brief The default constructor
   */
  DeepShapeStore ();

  /**
   *  @brief The destructor
   */
  ~DeepShapeStore ();

  /**
   *  @brief Returns true, if the DeepShapeStore is singular
   *
   *  A "singular" shape store needs a single layout to keep the information.
   *  This is the case, if all Regions derived from it share the same origin
   *  and do not use clipping or region selection. Singular shape stores are
   *  required for netlist extraction for example.
   *
   *  For a singular shape store, "layout()" will return the layout
   *  object and "initial_cell()" will return the initial cell of the
   *  only layout.
   */
  bool is_singular () const;

  /**
   *  @brief Inserts a polygon layer into the deep shape store
   *
   *  This method will create a new layer inside the deep shape store as a
   *  working copy of the original layer. Preparation involves re-shaping
   *  the polygons so their bounding box is a better approximation and the
   *  polygon complexity is reduced. For this, the polygons are split
   *  into parts satisfying the area ratio (bounding box vs. polygon area)
   *  and maximum vertex count constraints.
   */
  DeepLayer create_polygon_layer (const db::RecursiveShapeIterator &si, double max_area_ratio = 0.0, size_t max_vertex_count = 0);

  /**
   *  @brief Inserts the deep layer's shapes into some target layout
   */
  void insert (const DeepLayer &layer, db::Layout *into_layout, db::cell_index_type into_cell, unsigned int into_layer);

  /**
   *  @brief Gets the cell mapping suitable to returning a layout from the deep shape store into the original layout hierarchy
   *
   *  If necessary, this method will modify the original layout and add new cells.
   *  "layout_index" is the layout to return to it's original. "into_layout" is the original layout, "into_cell"
   *  the original cell.
   */
  const db::CellMapping &cell_mapping_to_original (size_t layout_index, db::Layout *into_layout, db::cell_index_type into_cell);

  /**
   *  @brief For testing
   */
  static size_t instance_count ();

  /**
   *  @brief Gets the nth layout (const version)
   */
  const db::Layout &const_layout (unsigned int n) const;

  /**
   *  @brief Gets the nth layout (non-const version)
   *
   *  Don't try to mess too much with the layout object, you'll screw up the internals.
   */
  db::Layout &layout (unsigned int n);

  /**
   *  @brief Gets the initial cell of the nth layout (const version)
   */
  const db::Cell &const_initial_cell (unsigned int n) const;

  /**
   *  @brief Gets the initial cell of the nth layout (non-const version)
   *
   *  Don't try to mess too much with the cell object, you'll screw up the internals.
   */
  db::Cell &initial_cell (unsigned int n);

  /**
   *  @brief Gets the singular layout (const version)
   *
   *  This method will throw an exception if the deep shape store is not singular.
   */
  const db::Layout &const_layout () const
  {
    require_singular ();
    return const_layout (0);
  }

  /**
   *  @brief Gets the singular layout (non-const version)
   *
   *  This method will throw an exception if the deep shape store is not singular.
   *  Don't try to mess too much with the layout object, you'll screw up the internals.
   */
  db::Layout &layout ()
  {
    require_singular ();
    return layout (0);
  }

  /**
   *  @brief Gets the initial cell of the singular layout (const version)
   *
   *  This method will throw an exception if the deep shape store is not singular.
   */
  const db::Cell &const_initial_cell () const
  {
    require_singular ();
    return const_initial_cell (0);
  }

  /**
   *  @brief Gets the initial cell of the singular layout (non-const version)
   *
   *  This method will throw an exception if the deep shape store is not singular.
   *  Don't try to mess too much with the cell object, you'll screw up the internals.
   */
  db::Cell &initial_cell ()
  {
    require_singular ();
    return initial_cell (0);
  }

  /**
   *  @brief Gets the number of layouts
   */
  unsigned int layouts () const
  {
    return (unsigned int) m_layouts.size ();
  }

  /**
   *  @brief Gets a value indicating whether the given index is a valid layout index
   */
  bool is_valid_layout_index (unsigned int n) const;

  /**
   *  @brief The deep shape store also keeps the number of threads to allocate for the hierarchical processor
   *
   *  This is a kind of hack, but it's convenient.
   */
  void set_threads (int n);

  /**
   *  @brief Gets the number of threads
   */
  int threads () const
  {
    return m_threads;
  }

  /**
   *  @brief Sets the maximum vertex count default value
   *
   *  This parameter is used to simplify complex polygons. It is used by
   *  create_polygon_layer with the default parameters. It's also used by
   *  boolean operations when they deliver their output.
   */
  void set_max_vertex_count (size_t n);

  /**
   *  @brief Gets the maximum vertex count
   */
  size_t max_vertex_count () const
  {
    return m_max_vertex_count;
  }

  /**
   *  @brief Sets the max. area ratio for bounding box vs. polygon area
   *
   *  This parameter is used to simplify complex polygons. It is used by
   *  create_polygon_layer with the default parameters. It's also used by
   *  boolean operations when they deliver their output.
   */
  void set_max_area_ratio (double ar);

  /**
   *  @brief Gets the max. area ratio
   */
  double max_area_ratio () const
  {
    return m_max_area_ratio;
  }

  /**
   *  @brief Sets the text property name
   *
   *  If set to a non-null variant, text strings are attached to the generated boxes
   *  as properties with this particular name. This option has an effect only if the
   *  text_enlargement property is not negative.
   *  By default, the name is empty.
   */
  void set_text_property_name (const tl::Variant &pn);

  /**
   *  @brief Gets the text property name
   */
  const tl::Variant &text_property_name () const
  {
    return m_text_property_name;
  }

  /**
   *  @brief Sets the text enlargement value
   *
   *  If set to a non-negative value, text objects are converted to boxes with the
   *  given enlargement (width = 2 * enlargement). The box centers are identical
   *  to the original location of the text.
   *  If this value is negative (the default), texts are ignored.
   */
  void set_text_enlargement (int enl);

  /**
   *  @brief Gets the text enlargement value
   */
  int text_enlargement () const
  {
    return m_text_enlargement;
  }

private:
  friend class DeepLayer;

  struct LayoutHolder;

  void add_ref (unsigned int layout, unsigned int layer);
  void remove_ref (unsigned int layout, unsigned int layer);

  void require_singular () const;

  typedef std::map<db::RecursiveShapeIterator, unsigned int, RecursiveShapeIteratorCompareForTargetHierarchy> layout_map_type;

  //  no copying
  DeepShapeStore (const DeepShapeStore &);
  DeepShapeStore &operator= (const DeepShapeStore &);

  std::vector<LayoutHolder *> m_layouts;
  layout_map_type m_layout_map;
  int m_threads;
  double m_max_area_ratio;
  size_t m_max_vertex_count;
  tl::Variant m_text_property_name;
  int m_text_enlargement;
  tl::Mutex m_lock;

  struct DeliveryMappingCacheKey
  {
    //  NOTE: we shouldn't keep pointers here as the layouts may get deleted and recreated with the same address.
    //  But as we don't access these objects that's fairly safe.
    DeliveryMappingCacheKey (unsigned int _from_index, tl::id_type _into_layout, db::cell_index_type _into_cell)
      : from_index (_from_index), into_layout (_into_layout), into_cell (_into_cell)
    {
      //  .. nothing yet ..
    }

    bool operator< (const DeliveryMappingCacheKey &other) const
    {
      if (from_index != other.from_index) {
        return from_index < other.from_index;
      }
      if (into_layout != other.into_layout) {
        return into_layout < other.into_layout;
      }
      return into_cell <other.into_cell;
    }

    unsigned int from_index;
    tl::id_type into_layout;
    db::cell_index_type into_cell;
  };

  std::map<DeliveryMappingCacheKey, db::CellMapping> m_delivery_mapping_cache;
};

}

namespace tl
{

  //  disable copying of the deep shape store object
  template <> struct type_traits <db::DeepShapeStore> : public type_traits<void> {
    typedef tl::false_tag has_copy_constructor;
  };

}

#endif
