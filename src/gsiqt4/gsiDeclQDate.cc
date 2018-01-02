
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
*  @file gsiDeclQDate.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDate>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDate

//  Constructor QDate::QDate()


static void _init_ctor_QDate_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDate> ();
}

static void _call_ctor_QDate_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDate *> (new QDate ());
}


//  Constructor QDate::QDate(int y, int m, int d)


static void _init_ctor_QDate_2085 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("y");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("m");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("d");
  decl->add_arg<int > (argspec_2);
  decl->set_return_new<QDate> ();
}

static void _call_ctor_QDate_2085 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QDate *> (new QDate (arg1, arg2, arg3));
}


// QDate QDate::addDays(int days)


static void _init_f_addDays_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("days");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QDate > ();
}

static void _call_f_addDays_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QDate > ((QDate)((QDate *)cls)->addDays (arg1));
}


// QDate QDate::addMonths(int months)


static void _init_f_addMonths_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("months");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QDate > ();
}

static void _call_f_addMonths_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QDate > ((QDate)((QDate *)cls)->addMonths (arg1));
}


// QDate QDate::addYears(int years)


static void _init_f_addYears_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("years");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QDate > ();
}

static void _call_f_addYears_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QDate > ((QDate)((QDate *)cls)->addYears (arg1));
}


// int QDate::day()


static void _init_f_day_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_day_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDate *)cls)->day ());
}


// int QDate::dayOfWeek()


static void _init_f_dayOfWeek_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_dayOfWeek_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDate *)cls)->dayOfWeek ());
}


// int QDate::dayOfYear()


static void _init_f_dayOfYear_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_dayOfYear_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDate *)cls)->dayOfYear ());
}


// int QDate::daysInMonth()


static void _init_f_daysInMonth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_daysInMonth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDate *)cls)->daysInMonth ());
}


// int QDate::daysInYear()


static void _init_f_daysInYear_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_daysInYear_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDate *)cls)->daysInYear ());
}


// int QDate::daysTo(const QDate &)


static void _init_f_daysTo_c1776 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDate & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_daysTo_c1776 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDate &arg1 = args.read<const QDate & > (heap);
  ret.write<int > ((int)((QDate *)cls)->daysTo (arg1));
}


// void QDate::getDate(int *year, int *month, int *day)


static void _init_f_getDate_2643 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("year");
  decl->add_arg<int * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("month");
  decl->add_arg<int * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("day");
  decl->add_arg<int * > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_getDate_2643 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int *arg1 = args.read<int * > (heap);
  int *arg2 = args.read<int * > (heap);
  int *arg3 = args.read<int * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDate *)cls)->getDate (arg1, arg2, arg3);
}


// bool QDate::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QDate *)cls)->isNull ());
}


// bool QDate::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QDate *)cls)->isValid ());
}


// int QDate::month()


static void _init_f_month_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_month_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDate *)cls)->month ());
}


// bool QDate::operator!=(const QDate &other)


static void _init_f_operator_excl__eq__c1776 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDate & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c1776 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDate &arg1 = args.read<const QDate & > (heap);
  ret.write<bool > ((bool)((QDate *)cls)->operator!= (arg1));
}


// bool QDate::operator<(const QDate &other)


static void _init_f_operator_lt__c1776 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDate & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__c1776 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDate &arg1 = args.read<const QDate & > (heap);
  ret.write<bool > ((bool)((QDate *)cls)->operator< (arg1));
}


// bool QDate::operator<=(const QDate &other)


static void _init_f_operator_lt__eq__c1776 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDate & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_lt__eq__c1776 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDate &arg1 = args.read<const QDate & > (heap);
  ret.write<bool > ((bool)((QDate *)cls)->operator<= (arg1));
}


// bool QDate::operator==(const QDate &other)


static void _init_f_operator_eq__eq__c1776 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDate & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c1776 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDate &arg1 = args.read<const QDate & > (heap);
  ret.write<bool > ((bool)((QDate *)cls)->operator== (arg1));
}


// bool QDate::operator>(const QDate &other)


static void _init_f_operator_gt__c1776 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDate & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_gt__c1776 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDate &arg1 = args.read<const QDate & > (heap);
  ret.write<bool > ((bool)((QDate *)cls)->operator> (arg1));
}


// bool QDate::operator>=(const QDate &other)


static void _init_f_operator_gt__eq__c1776 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QDate & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_gt__eq__c1776 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDate &arg1 = args.read<const QDate & > (heap);
  ret.write<bool > ((bool)((QDate *)cls)->operator>= (arg1));
}


// bool QDate::setDate(int year, int month, int day)


static void _init_f_setDate_2085 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("year");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("month");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("day");
  decl->add_arg<int > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_setDate_2085 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<bool > ((bool)((QDate *)cls)->setDate (arg1, arg2, arg3));
}


// bool QDate::setYMD(int y, int m, int d)


static void _init_f_setYMD_2085 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("y");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("m");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("d");
  decl->add_arg<int > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_setYMD_2085 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<bool > ((bool)((QDate *)cls)->setYMD (arg1, arg2, arg3));
}


// int QDate::toJulianDay()


static void _init_f_toJulianDay_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_toJulianDay_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDate *)cls)->toJulianDay ());
}


// QString QDate::toString(Qt::DateFormat f)


static void _init_f_toString_c1748 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("f", true, "Qt::TextDate");
  decl->add_arg<const qt_gsi::Converter<Qt::DateFormat>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toString_c1748 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::DateFormat>::target_type & arg1 = args ? args.read<const qt_gsi::Converter<Qt::DateFormat>::target_type & > (heap) : (const qt_gsi::Converter<Qt::DateFormat>::target_type &)(qt_gsi::CppToQtReadAdaptor<Qt::DateFormat>(heap, Qt::TextDate));
  ret.write<QString > ((QString)((QDate *)cls)->toString (qt_gsi::QtToCppAdaptor<Qt::DateFormat>(arg1).cref()));
}


// QString QDate::toString(const QString &format)


static void _init_f_toString_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toString_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QString > ((QString)((QDate *)cls)->toString (arg1));
}


// int QDate::weekNumber(int *yearNum)


static void _init_f_weekNumber_c953 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("yearNum", true, "0");
  decl->add_arg<int * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_weekNumber_c953 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int *arg1 = args ? args.read<int * > (heap) : (int *)(0);
  ret.write<int > ((int)((QDate *)cls)->weekNumber (arg1));
}


// int QDate::year()


static void _init_f_year_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_year_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDate *)cls)->year ());
}


// static QDate QDate::currentDate()


static void _init_f_currentDate_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QDate > ();
}

static void _call_f_currentDate_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDate > ((QDate)QDate::currentDate ());
}


// static QDate QDate::fromJulianDay(int jd)


static void _init_f_fromJulianDay_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("jd");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QDate > ();
}

static void _call_f_fromJulianDay_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QDate > ((QDate)QDate::fromJulianDay (arg1));
}


// static QDate QDate::fromString(const QString &s, Qt::DateFormat f)


static void _init_f_fromString_3665 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("f", true, "Qt::TextDate");
  decl->add_arg<const qt_gsi::Converter<Qt::DateFormat>::target_type & > (argspec_1);
  decl->set_return<QDate > ();
}

static void _call_f_fromString_3665 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const qt_gsi::Converter<Qt::DateFormat>::target_type & arg2 = args ? args.read<const qt_gsi::Converter<Qt::DateFormat>::target_type & > (heap) : (const qt_gsi::Converter<Qt::DateFormat>::target_type &)(qt_gsi::CppToQtReadAdaptor<Qt::DateFormat>(heap, Qt::TextDate));
  ret.write<QDate > ((QDate)QDate::fromString (arg1, qt_gsi::QtToCppAdaptor<Qt::DateFormat>(arg2).cref()));
}


// static QDate QDate::fromString(const QString &s, const QString &format)


static void _init_f_fromString_3942 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("format");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QDate > ();
}

static void _call_f_fromString_3942 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<QDate > ((QDate)QDate::fromString (arg1, arg2));
}


// static unsigned int QDate::gregorianToJulian(int y, int m, int d)


static void _init_f_gregorianToJulian_2085 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("y");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("m");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("d");
  decl->add_arg<int > (argspec_2);
  decl->set_return<unsigned int > ();
}

static void _call_f_gregorianToJulian_2085 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<unsigned int > ((unsigned int)QDate::gregorianToJulian (arg1, arg2, arg3));
}


// static bool QDate::isLeapYear(int year)


static void _init_f_isLeapYear_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("year");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isLeapYear_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<bool > ((bool)QDate::isLeapYear (arg1));
}


// static bool QDate::isValid(int y, int m, int d)


static void _init_f_isValid_2085 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("y");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("m");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("d");
  decl->add_arg<int > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_isValid_2085 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<bool > ((bool)QDate::isValid (arg1, arg2, arg3));
}


// static void QDate::julianToGregorian(unsigned int jd, int &y, int &m, int &d)


static void _init_f_julianToGregorian_4295 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("jd");
  decl->add_arg<unsigned int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<int & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("m");
  decl->add_arg<int & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("d");
  decl->add_arg<int & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_julianToGregorian_4295 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  unsigned int arg1 = args.read<unsigned int > (heap);
  int &arg2 = args.read<int & > (heap);
  int &arg3 = args.read<int & > (heap);
  int &arg4 = args.read<int & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QDate::julianToGregorian (arg1, arg2, arg3, arg4);
}


// static QString QDate::longDayName(int weekday)


static void _init_f_longDayName_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("weekday");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_longDayName_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QString > ((QString)QDate::longDayName (arg1));
}


// static QString QDate::longDayName(int weekday, QDate::MonthNameType type)


static void _init_f_longDayName_2995 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("weekday");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("type");
  decl->add_arg<const qt_gsi::Converter<QDate::MonthNameType>::target_type & > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_longDayName_2995 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const qt_gsi::Converter<QDate::MonthNameType>::target_type & arg2 = args.read<const qt_gsi::Converter<QDate::MonthNameType>::target_type & > (heap);
  ret.write<QString > ((QString)QDate::longDayName (arg1, qt_gsi::QtToCppAdaptor<QDate::MonthNameType>(arg2).cref()));
}


// static QString QDate::longMonthName(int month)


static void _init_f_longMonthName_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("month");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_longMonthName_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QString > ((QString)QDate::longMonthName (arg1));
}


// static QString QDate::longMonthName(int month, QDate::MonthNameType type)


static void _init_f_longMonthName_2995 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("month");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("type");
  decl->add_arg<const qt_gsi::Converter<QDate::MonthNameType>::target_type & > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_longMonthName_2995 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const qt_gsi::Converter<QDate::MonthNameType>::target_type & arg2 = args.read<const qt_gsi::Converter<QDate::MonthNameType>::target_type & > (heap);
  ret.write<QString > ((QString)QDate::longMonthName (arg1, qt_gsi::QtToCppAdaptor<QDate::MonthNameType>(arg2).cref()));
}


// static QString QDate::shortDayName(int weekday)


static void _init_f_shortDayName_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("weekday");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_shortDayName_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QString > ((QString)QDate::shortDayName (arg1));
}


// static QString QDate::shortDayName(int weekday, QDate::MonthNameType type)


static void _init_f_shortDayName_2995 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("weekday");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("type");
  decl->add_arg<const qt_gsi::Converter<QDate::MonthNameType>::target_type & > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_shortDayName_2995 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const qt_gsi::Converter<QDate::MonthNameType>::target_type & arg2 = args.read<const qt_gsi::Converter<QDate::MonthNameType>::target_type & > (heap);
  ret.write<QString > ((QString)QDate::shortDayName (arg1, qt_gsi::QtToCppAdaptor<QDate::MonthNameType>(arg2).cref()));
}


// static QString QDate::shortMonthName(int month)


static void _init_f_shortMonthName_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("month");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_shortMonthName_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QString > ((QString)QDate::shortMonthName (arg1));
}


// static QString QDate::shortMonthName(int month, QDate::MonthNameType type)


static void _init_f_shortMonthName_2995 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("month");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("type");
  decl->add_arg<const qt_gsi::Converter<QDate::MonthNameType>::target_type & > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_shortMonthName_2995 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const qt_gsi::Converter<QDate::MonthNameType>::target_type & arg2 = args.read<const qt_gsi::Converter<QDate::MonthNameType>::target_type & > (heap);
  ret.write<QString > ((QString)QDate::shortMonthName (arg1, qt_gsi::QtToCppAdaptor<QDate::MonthNameType>(arg2).cref()));
}



namespace gsi
{

static gsi::Methods methods_QDate () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDate::QDate()\nThis method creates an object of class QDate.", &_init_ctor_QDate_0, &_call_ctor_QDate_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDate::QDate(int y, int m, int d)\nThis method creates an object of class QDate.", &_init_ctor_QDate_2085, &_call_ctor_QDate_2085);
  methods += new qt_gsi::GenericMethod ("addDays", "@brief Method QDate QDate::addDays(int days)\n", true, &_init_f_addDays_c767, &_call_f_addDays_c767);
  methods += new qt_gsi::GenericMethod ("addMonths", "@brief Method QDate QDate::addMonths(int months)\n", true, &_init_f_addMonths_c767, &_call_f_addMonths_c767);
  methods += new qt_gsi::GenericMethod ("addYears", "@brief Method QDate QDate::addYears(int years)\n", true, &_init_f_addYears_c767, &_call_f_addYears_c767);
  methods += new qt_gsi::GenericMethod ("day", "@brief Method int QDate::day()\n", true, &_init_f_day_c0, &_call_f_day_c0);
  methods += new qt_gsi::GenericMethod ("dayOfWeek", "@brief Method int QDate::dayOfWeek()\n", true, &_init_f_dayOfWeek_c0, &_call_f_dayOfWeek_c0);
  methods += new qt_gsi::GenericMethod ("dayOfYear", "@brief Method int QDate::dayOfYear()\n", true, &_init_f_dayOfYear_c0, &_call_f_dayOfYear_c0);
  methods += new qt_gsi::GenericMethod ("daysInMonth", "@brief Method int QDate::daysInMonth()\n", true, &_init_f_daysInMonth_c0, &_call_f_daysInMonth_c0);
  methods += new qt_gsi::GenericMethod ("daysInYear", "@brief Method int QDate::daysInYear()\n", true, &_init_f_daysInYear_c0, &_call_f_daysInYear_c0);
  methods += new qt_gsi::GenericMethod ("daysTo", "@brief Method int QDate::daysTo(const QDate &)\n", true, &_init_f_daysTo_c1776, &_call_f_daysTo_c1776);
  methods += new qt_gsi::GenericMethod ("getDate", "@brief Method void QDate::getDate(int *year, int *month, int *day)\n", false, &_init_f_getDate_2643, &_call_f_getDate_2643);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QDate::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QDate::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("month", "@brief Method int QDate::month()\n", true, &_init_f_month_c0, &_call_f_month_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QDate::operator!=(const QDate &other)\n", true, &_init_f_operator_excl__eq__c1776, &_call_f_operator_excl__eq__c1776);
  methods += new qt_gsi::GenericMethod ("<", "@brief Method bool QDate::operator<(const QDate &other)\n", true, &_init_f_operator_lt__c1776, &_call_f_operator_lt__c1776);
  methods += new qt_gsi::GenericMethod ("<=", "@brief Method bool QDate::operator<=(const QDate &other)\n", true, &_init_f_operator_lt__eq__c1776, &_call_f_operator_lt__eq__c1776);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QDate::operator==(const QDate &other)\n", true, &_init_f_operator_eq__eq__c1776, &_call_f_operator_eq__eq__c1776);
  methods += new qt_gsi::GenericMethod (">", "@brief Method bool QDate::operator>(const QDate &other)\n", true, &_init_f_operator_gt__c1776, &_call_f_operator_gt__c1776);
  methods += new qt_gsi::GenericMethod (">=", "@brief Method bool QDate::operator>=(const QDate &other)\n", true, &_init_f_operator_gt__eq__c1776, &_call_f_operator_gt__eq__c1776);
  methods += new qt_gsi::GenericMethod ("setDate", "@brief Method bool QDate::setDate(int year, int month, int day)\n", false, &_init_f_setDate_2085, &_call_f_setDate_2085);
  methods += new qt_gsi::GenericMethod ("setYMD", "@brief Method bool QDate::setYMD(int y, int m, int d)\n", false, &_init_f_setYMD_2085, &_call_f_setYMD_2085);
  methods += new qt_gsi::GenericMethod ("toJulianDay", "@brief Method int QDate::toJulianDay()\n", true, &_init_f_toJulianDay_c0, &_call_f_toJulianDay_c0);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QDate::toString(Qt::DateFormat f)\n", true, &_init_f_toString_c1748, &_call_f_toString_c1748);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QDate::toString(const QString &format)\n", true, &_init_f_toString_c2025, &_call_f_toString_c2025);
  methods += new qt_gsi::GenericMethod ("weekNumber", "@brief Method int QDate::weekNumber(int *yearNum)\n", true, &_init_f_weekNumber_c953, &_call_f_weekNumber_c953);
  methods += new qt_gsi::GenericMethod ("year", "@brief Method int QDate::year()\n", true, &_init_f_year_c0, &_call_f_year_c0);
  methods += new qt_gsi::GenericStaticMethod ("currentDate", "@brief Static method QDate QDate::currentDate()\nThis method is static and can be called without an instance.", &_init_f_currentDate_0, &_call_f_currentDate_0);
  methods += new qt_gsi::GenericStaticMethod ("fromJulianDay", "@brief Static method QDate QDate::fromJulianDay(int jd)\nThis method is static and can be called without an instance.", &_init_f_fromJulianDay_767, &_call_f_fromJulianDay_767);
  methods += new qt_gsi::GenericStaticMethod ("fromString", "@brief Static method QDate QDate::fromString(const QString &s, Qt::DateFormat f)\nThis method is static and can be called without an instance.", &_init_f_fromString_3665, &_call_f_fromString_3665);
  methods += new qt_gsi::GenericStaticMethod ("fromString", "@brief Static method QDate QDate::fromString(const QString &s, const QString &format)\nThis method is static and can be called without an instance.", &_init_f_fromString_3942, &_call_f_fromString_3942);
  methods += new qt_gsi::GenericStaticMethod ("gregorianToJulian", "@brief Static method unsigned int QDate::gregorianToJulian(int y, int m, int d)\nThis method is static and can be called without an instance.", &_init_f_gregorianToJulian_2085, &_call_f_gregorianToJulian_2085);
  methods += new qt_gsi::GenericStaticMethod ("isLeapYear?", "@brief Static method bool QDate::isLeapYear(int year)\nThis method is static and can be called without an instance.", &_init_f_isLeapYear_767, &_call_f_isLeapYear_767);
  methods += new qt_gsi::GenericStaticMethod ("isValid?", "@brief Static method bool QDate::isValid(int y, int m, int d)\nThis method is static and can be called without an instance.", &_init_f_isValid_2085, &_call_f_isValid_2085);
  methods += new qt_gsi::GenericStaticMethod ("julianToGregorian", "@brief Static method void QDate::julianToGregorian(unsigned int jd, int &y, int &m, int &d)\nThis method is static and can be called without an instance.", &_init_f_julianToGregorian_4295, &_call_f_julianToGregorian_4295);
  methods += new qt_gsi::GenericStaticMethod ("longDayName", "@brief Static method QString QDate::longDayName(int weekday)\nThis method is static and can be called without an instance.", &_init_f_longDayName_767, &_call_f_longDayName_767);
  methods += new qt_gsi::GenericStaticMethod ("longDayName", "@brief Static method QString QDate::longDayName(int weekday, QDate::MonthNameType type)\nThis method is static and can be called without an instance.", &_init_f_longDayName_2995, &_call_f_longDayName_2995);
  methods += new qt_gsi::GenericStaticMethod ("longMonthName", "@brief Static method QString QDate::longMonthName(int month)\nThis method is static and can be called without an instance.", &_init_f_longMonthName_767, &_call_f_longMonthName_767);
  methods += new qt_gsi::GenericStaticMethod ("longMonthName", "@brief Static method QString QDate::longMonthName(int month, QDate::MonthNameType type)\nThis method is static and can be called without an instance.", &_init_f_longMonthName_2995, &_call_f_longMonthName_2995);
  methods += new qt_gsi::GenericStaticMethod ("shortDayName", "@brief Static method QString QDate::shortDayName(int weekday)\nThis method is static and can be called without an instance.", &_init_f_shortDayName_767, &_call_f_shortDayName_767);
  methods += new qt_gsi::GenericStaticMethod ("shortDayName", "@brief Static method QString QDate::shortDayName(int weekday, QDate::MonthNameType type)\nThis method is static and can be called without an instance.", &_init_f_shortDayName_2995, &_call_f_shortDayName_2995);
  methods += new qt_gsi::GenericStaticMethod ("shortMonthName", "@brief Static method QString QDate::shortMonthName(int month)\nThis method is static and can be called without an instance.", &_init_f_shortMonthName_767, &_call_f_shortMonthName_767);
  methods += new qt_gsi::GenericStaticMethod ("shortMonthName", "@brief Static method QString QDate::shortMonthName(int month, QDate::MonthNameType type)\nThis method is static and can be called without an instance.", &_init_f_shortMonthName_2995, &_call_f_shortMonthName_2995);
  return methods;
}

gsi::Class<QDate> decl_QDate ("QDate",
  methods_QDate (),
  "@qt\n@brief Binding of QDate");


GSIQT_PUBLIC gsi::Class<QDate> &qtdecl_QDate () { return decl_QDate; }

}


//  Implementation of the enum wrapper class for QDate::MonthNameType
namespace qt_gsi
{

static gsi::Enum<QDate::MonthNameType> decl_QDate_MonthNameType_Enum ("QDate_MonthNameType",
    gsi::enum_const ("DateFormat", QDate::DateFormat, "@brief Enum constant QDate::DateFormat") +
    gsi::enum_const ("StandaloneFormat", QDate::StandaloneFormat, "@brief Enum constant QDate::StandaloneFormat"),
  "@qt\n@brief This class represents the QDate::MonthNameType enum");

static gsi::QFlagsClass<QDate::MonthNameType > decl_QDate_MonthNameType_Enums ("QDate_QFlags_MonthNameType",
  "@qt\n@brief This class represents the QFlags<QDate::MonthNameType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QDate> inject_QDate_MonthNameType_Enum_in_parent (decl_QDate_MonthNameType_Enum.defs ());
static gsi::ClassExt<QDate> decl_QDate_MonthNameType_Enum_as_child (decl_QDate_MonthNameType_Enum, "MonthNameType");
static gsi::ClassExt<QDate> decl_QDate_MonthNameType_Enums_as_child (decl_QDate_MonthNameType_Enums, "QFlags_MonthNameType");

}

