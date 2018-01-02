
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
*  @file gsiDeclQMarginsF.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMarginsF>
#include <QMargins>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMarginsF

//  Constructor QMarginsF::QMarginsF()


static void _init_ctor_QMarginsF_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMarginsF> ();
}

static void _call_ctor_QMarginsF_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMarginsF *> (new QMarginsF ());
}


//  Constructor QMarginsF::QMarginsF(double left, double top, double right, double bottom)


static void _init_ctor_QMarginsF_3960 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("left");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("top");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("right");
  decl->add_arg<double > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("bottom");
  decl->add_arg<double > (argspec_3);
  decl->set_return_new<QMarginsF> ();
}

static void _call_ctor_QMarginsF_3960 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  double arg2 = args.read<double > (heap);
  double arg3 = args.read<double > (heap);
  double arg4 = args.read<double > (heap);
  ret.write<QMarginsF *> (new QMarginsF (arg1, arg2, arg3, arg4));
}


//  Constructor QMarginsF::QMarginsF(const QMargins &margins)


static void _init_ctor_QMarginsF_2115 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margins");
  decl->add_arg<const QMargins & > (argspec_0);
  decl->set_return_new<QMarginsF> ();
}

static void _call_ctor_QMarginsF_2115 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMargins &arg1 = args.read<const QMargins & > (heap);
  ret.write<QMarginsF *> (new QMarginsF (arg1));
}


// double QMarginsF::bottom()


static void _init_f_bottom_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_bottom_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QMarginsF *)cls)->bottom ());
}


// bool QMarginsF::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMarginsF *)cls)->isNull ());
}


// double QMarginsF::left()


static void _init_f_left_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_left_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QMarginsF *)cls)->left ());
}


// QMarginsF &QMarginsF::operator*=(double factor)


static void _init_f_operator_star__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("factor");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QMarginsF & > ();
}

static void _call_f_operator_star__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  ret.write<QMarginsF & > ((QMarginsF &)((QMarginsF *)cls)->operator*= (arg1));
}


// QMarginsF &QMarginsF::operator+=(const QMarginsF &margins)


static void _init_f_operator_plus__eq__2185 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margins");
  decl->add_arg<const QMarginsF & > (argspec_0);
  decl->set_return<QMarginsF & > ();
}

static void _call_f_operator_plus__eq__2185 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMarginsF &arg1 = args.read<const QMarginsF & > (heap);
  ret.write<QMarginsF & > ((QMarginsF &)((QMarginsF *)cls)->operator+= (arg1));
}


// QMarginsF &QMarginsF::operator+=(double addend)


static void _init_f_operator_plus__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("addend");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QMarginsF & > ();
}

static void _call_f_operator_plus__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  ret.write<QMarginsF & > ((QMarginsF &)((QMarginsF *)cls)->operator+= (arg1));
}


// QMarginsF &QMarginsF::operator-=(const QMarginsF &margins)


static void _init_f_operator_minus__eq__2185 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("margins");
  decl->add_arg<const QMarginsF & > (argspec_0);
  decl->set_return<QMarginsF & > ();
}

static void _call_f_operator_minus__eq__2185 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMarginsF &arg1 = args.read<const QMarginsF & > (heap);
  ret.write<QMarginsF & > ((QMarginsF &)((QMarginsF *)cls)->operator-= (arg1));
}


// QMarginsF &QMarginsF::operator-=(double subtrahend)


static void _init_f_operator_minus__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("subtrahend");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QMarginsF & > ();
}

static void _call_f_operator_minus__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  ret.write<QMarginsF & > ((QMarginsF &)((QMarginsF *)cls)->operator-= (arg1));
}


// QMarginsF &QMarginsF::operator/=(double divisor)


static void _init_f_operator_slash__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("divisor");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QMarginsF & > ();
}

static void _call_f_operator_slash__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  ret.write<QMarginsF & > ((QMarginsF &)((QMarginsF *)cls)->operator/= (arg1));
}


// double QMarginsF::right()


static void _init_f_right_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_right_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QMarginsF *)cls)->right ());
}


// void QMarginsF::setBottom(double bottom)


static void _init_f_setBottom_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bottom");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBottom_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMarginsF *)cls)->setBottom (arg1);
}


// void QMarginsF::setLeft(double left)


static void _init_f_setLeft_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("left");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLeft_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMarginsF *)cls)->setLeft (arg1);
}


// void QMarginsF::setRight(double right)


static void _init_f_setRight_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("right");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRight_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMarginsF *)cls)->setRight (arg1);
}


// void QMarginsF::setTop(double top)


static void _init_f_setTop_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("top");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTop_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMarginsF *)cls)->setTop (arg1);
}


// QMargins QMarginsF::toMargins()


static void _init_f_toMargins_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMargins > ();
}

static void _call_f_toMargins_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMargins > ((QMargins)((QMarginsF *)cls)->toMargins ());
}


// double QMarginsF::top()


static void _init_f_top_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_top_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QMarginsF *)cls)->top ());
}


//  bool ::operator==(const QMarginsF &lhs, const QMarginsF &rhs)
static bool op_QMarginsF_operator_eq__eq__4262(const QMarginsF *_self, const QMarginsF &rhs) {
  return ::operator==(*_self, rhs);
}

//  bool ::operator!=(const QMarginsF &lhs, const QMarginsF &rhs)
static bool op_QMarginsF_operator_excl__eq__4262(const QMarginsF *_self, const QMarginsF &rhs) {
  return ::operator!=(*_self, rhs);
}

//  QMarginsF ::operator+(const QMarginsF &lhs, const QMarginsF &rhs)
static QMarginsF op_QMarginsF_operator_plus__4262(const QMarginsF *_self, const QMarginsF &rhs) {
  return ::operator+(*_self, rhs);
}

//  QMarginsF ::operator-(const QMarginsF &lhs, const QMarginsF &rhs)
static QMarginsF op_QMarginsF_operator_minus__4262(const QMarginsF *_self, const QMarginsF &rhs) {
  return ::operator-(*_self, rhs);
}

//  QMarginsF ::operator+(const QMarginsF &lhs, qreal rhs)
static QMarginsF op_QMarginsF_operator_plus__3046(const QMarginsF *_self, qreal rhs) {
  return ::operator+(*_self, rhs);
}

//  QMarginsF ::operator-(const QMarginsF &lhs, qreal rhs)
static QMarginsF op_QMarginsF_operator_minus__3046(const QMarginsF *_self, qreal rhs) {
  return ::operator-(*_self, rhs);
}

//  QMarginsF ::operator*(const QMarginsF &lhs, qreal rhs)
static QMarginsF op_QMarginsF_operator_star__3046(const QMarginsF *_self, qreal rhs) {
  return ::operator*(*_self, rhs);
}

//  QMarginsF ::operator/(const QMarginsF &lhs, qreal divisor)
static QMarginsF op_QMarginsF_operator_slash__3046(const QMarginsF *_self, qreal divisor) {
  return ::operator/(*_self, divisor);
}

//  QMarginsF ::operator+(const QMarginsF &margins)
static QMarginsF op_QMarginsF_operator_plus__2185(const QMarginsF *_self) {
  return ::operator+(*_self);
}

//  QMarginsF ::operator-(const QMarginsF &margins)
static QMarginsF op_QMarginsF_operator_minus__2185(const QMarginsF *_self) {
  return ::operator-(*_self);
}

//  QRectF ::operator+(const QMarginsF &lhs, const QRectF &rhs)
static QRectF op_QMarginsF_operator_plus__3939(const QMarginsF *_self, const QRectF &rhs) {
  return ::operator+(*_self, rhs);
}


namespace gsi
{

static gsi::Methods methods_QMarginsF () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMarginsF::QMarginsF()\nThis method creates an object of class QMarginsF.", &_init_ctor_QMarginsF_0, &_call_ctor_QMarginsF_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMarginsF::QMarginsF(double left, double top, double right, double bottom)\nThis method creates an object of class QMarginsF.", &_init_ctor_QMarginsF_3960, &_call_ctor_QMarginsF_3960);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMarginsF::QMarginsF(const QMargins &margins)\nThis method creates an object of class QMarginsF.", &_init_ctor_QMarginsF_2115, &_call_ctor_QMarginsF_2115);
  methods += new qt_gsi::GenericMethod (":bottom", "@brief Method double QMarginsF::bottom()\n", true, &_init_f_bottom_c0, &_call_f_bottom_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QMarginsF::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod (":left", "@brief Method double QMarginsF::left()\n", true, &_init_f_left_c0, &_call_f_left_c0);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QMarginsF &QMarginsF::operator*=(double factor)\n", false, &_init_f_operator_star__eq__1071, &_call_f_operator_star__eq__1071);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QMarginsF &QMarginsF::operator+=(const QMarginsF &margins)\n", false, &_init_f_operator_plus__eq__2185, &_call_f_operator_plus__eq__2185);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QMarginsF &QMarginsF::operator+=(double addend)\n", false, &_init_f_operator_plus__eq__1071, &_call_f_operator_plus__eq__1071);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QMarginsF &QMarginsF::operator-=(const QMarginsF &margins)\n", false, &_init_f_operator_minus__eq__2185, &_call_f_operator_minus__eq__2185);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QMarginsF &QMarginsF::operator-=(double subtrahend)\n", false, &_init_f_operator_minus__eq__1071, &_call_f_operator_minus__eq__1071);
  methods += new qt_gsi::GenericMethod ("/=", "@brief Method QMarginsF &QMarginsF::operator/=(double divisor)\n", false, &_init_f_operator_slash__eq__1071, &_call_f_operator_slash__eq__1071);
  methods += new qt_gsi::GenericMethod (":right", "@brief Method double QMarginsF::right()\n", true, &_init_f_right_c0, &_call_f_right_c0);
  methods += new qt_gsi::GenericMethod ("setBottom|bottom=", "@brief Method void QMarginsF::setBottom(double bottom)\n", false, &_init_f_setBottom_1071, &_call_f_setBottom_1071);
  methods += new qt_gsi::GenericMethod ("setLeft|left=", "@brief Method void QMarginsF::setLeft(double left)\n", false, &_init_f_setLeft_1071, &_call_f_setLeft_1071);
  methods += new qt_gsi::GenericMethod ("setRight|right=", "@brief Method void QMarginsF::setRight(double right)\n", false, &_init_f_setRight_1071, &_call_f_setRight_1071);
  methods += new qt_gsi::GenericMethod ("setTop|top=", "@brief Method void QMarginsF::setTop(double top)\n", false, &_init_f_setTop_1071, &_call_f_setTop_1071);
  methods += new qt_gsi::GenericMethod ("toMargins", "@brief Method QMargins QMarginsF::toMargins()\n", true, &_init_f_toMargins_c0, &_call_f_toMargins_c0);
  methods += new qt_gsi::GenericMethod (":top", "@brief Method double QMarginsF::top()\n", true, &_init_f_top_c0, &_call_f_top_c0);
  methods += gsi::method_ext("==", &::op_QMarginsF_operator_eq__eq__4262, gsi::arg ("rhs"), "@brief Operator bool ::operator==(const QMarginsF &lhs, const QMarginsF &rhs)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QMarginsF_operator_excl__eq__4262, gsi::arg ("rhs"), "@brief Operator bool ::operator!=(const QMarginsF &lhs, const QMarginsF &rhs)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("+", &::op_QMarginsF_operator_plus__4262, gsi::arg ("rhs"), "@brief Operator QMarginsF ::operator+(const QMarginsF &lhs, const QMarginsF &rhs)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QMarginsF_operator_minus__4262, gsi::arg ("rhs"), "@brief Operator QMarginsF ::operator-(const QMarginsF &lhs, const QMarginsF &rhs)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("+", &::op_QMarginsF_operator_plus__3046, gsi::arg ("rhs"), "@brief Operator QMarginsF ::operator+(const QMarginsF &lhs, qreal rhs)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QMarginsF_operator_minus__3046, gsi::arg ("rhs"), "@brief Operator QMarginsF ::operator-(const QMarginsF &lhs, qreal rhs)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QMarginsF_operator_star__3046, gsi::arg ("rhs"), "@brief Operator QMarginsF ::operator*(const QMarginsF &lhs, qreal rhs)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("/", &::op_QMarginsF_operator_slash__3046, gsi::arg ("divisor"), "@brief Operator QMarginsF ::operator/(const QMarginsF &lhs, qreal divisor)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("+", &::op_QMarginsF_operator_plus__2185, "@brief Operator QMarginsF ::operator+(const QMarginsF &margins)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QMarginsF_operator_minus__2185, "@brief Operator QMarginsF ::operator-(const QMarginsF &margins)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("+", &::op_QMarginsF_operator_plus__3939, gsi::arg ("rhs"), "@brief Operator QRectF ::operator+(const QMarginsF &lhs, const QRectF &rhs)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QMarginsF> decl_QMarginsF ("QMarginsF",
  methods_QMarginsF (),
  "@qt\n@brief Binding of QMarginsF");


GSIQT_PUBLIC gsi::Class<QMarginsF> &qtdecl_QMarginsF () { return decl_QMarginsF; }

}

