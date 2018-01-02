
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

/**
*  @file gsiDeclQStyleOptionGraphicsItem.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionGraphicsItem>
#include <QStyleOption>
#include <QTransform>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionGraphicsItem

//  Constructor QStyleOptionGraphicsItem::QStyleOptionGraphicsItem()


static void _init_ctor_QStyleOptionGraphicsItem_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionGraphicsItem> ();
}

static void _call_ctor_QStyleOptionGraphicsItem_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionGraphicsItem *> (new QStyleOptionGraphicsItem ());
}


//  Constructor QStyleOptionGraphicsItem::QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem &other)


static void _init_ctor_QStyleOptionGraphicsItem_3772 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionGraphicsItem & > (argspec_0);
  decl->set_return_new<QStyleOptionGraphicsItem> ();
}

static void _call_ctor_QStyleOptionGraphicsItem_3772 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionGraphicsItem &arg1 = args.read<const QStyleOptionGraphicsItem & > (heap);
  ret.write<QStyleOptionGraphicsItem *> (new QStyleOptionGraphicsItem (arg1));
}


// static double QStyleOptionGraphicsItem::levelOfDetailFromTransform(const QTransform &worldTransform)


static void _init_f_levelOfDetailFromTransform_2350 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("worldTransform");
  decl->add_arg<const QTransform & > (argspec_0);
  decl->set_return<double > ();
}

static void _call_f_levelOfDetailFromTransform_2350 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTransform &arg1 = args.read<const QTransform & > (heap);
  ret.write<double > ((double)QStyleOptionGraphicsItem::levelOfDetailFromTransform (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionGraphicsItem () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionGraphicsItem::QStyleOptionGraphicsItem()\nThis method creates an object of class QStyleOptionGraphicsItem.", &_init_ctor_QStyleOptionGraphicsItem_0, &_call_ctor_QStyleOptionGraphicsItem_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionGraphicsItem::QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem &other)\nThis method creates an object of class QStyleOptionGraphicsItem.", &_init_ctor_QStyleOptionGraphicsItem_3772, &_call_ctor_QStyleOptionGraphicsItem_3772);
  methods += new qt_gsi::GenericStaticMethod ("levelOfDetailFromTransform", "@brief Static method double QStyleOptionGraphicsItem::levelOfDetailFromTransform(const QTransform &worldTransform)\nThis method is static and can be called without an instance.", &_init_f_levelOfDetailFromTransform_2350, &_call_f_levelOfDetailFromTransform_2350);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionGraphicsItem> decl_QStyleOptionGraphicsItem (qtdecl_QStyleOption (), "QStyleOptionGraphicsItem",
  methods_QStyleOptionGraphicsItem (),
  "@qt\n@brief Binding of QStyleOptionGraphicsItem");


GSIQT_PUBLIC gsi::Class<QStyleOptionGraphicsItem> &qtdecl_QStyleOptionGraphicsItem () { return decl_QStyleOptionGraphicsItem; }

}

