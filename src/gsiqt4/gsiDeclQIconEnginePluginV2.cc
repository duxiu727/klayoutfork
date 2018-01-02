
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
*  @file gsiDeclQIconEnginePluginV2.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QIconEnginePluginV2>
#include <QChildEvent>
#include <QEvent>
#include <QIconEngineV2>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QIconEnginePluginV2

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QIconEnginePluginV2::staticMetaObject);
}


// QIconEngineV2 *QIconEnginePluginV2::create(const QString &filename)


static void _init_f_create_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("filename", true, "QString()");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QIconEngineV2 * > ();
}

static void _call_f_create_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  ret.write<QIconEngineV2 * > ((QIconEngineV2 *)((QIconEnginePluginV2 *)cls)->create (arg1));
}


// QStringList QIconEnginePluginV2::keys()


static void _init_f_keys_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_f_keys_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QIconEnginePluginV2 *)cls)->keys ());
}


// static QString QIconEnginePluginV2::tr(const char *s, const char *c)


static void _init_f_tr_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_tr_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(0);
  ret.write<QString > ((QString)QIconEnginePluginV2::tr (arg1, arg2));
}


// static QString QIconEnginePluginV2::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QString > ((QString)QIconEnginePluginV2::tr (arg1, arg2, arg3));
}


// static QString QIconEnginePluginV2::trUtf8(const char *s, const char *c)


static void _init_f_trUtf8_3354 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "0");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_3354 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(0);
  ret.write<QString > ((QString)QIconEnginePluginV2::trUtf8 (arg1, arg2));
}


// static QString QIconEnginePluginV2::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  int arg3 = args.read<int > (heap);
  ret.write<QString > ((QString)QIconEnginePluginV2::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QIconEnginePluginV2 () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("qt_create", "@brief Method QIconEngineV2 *QIconEnginePluginV2::create(const QString &filename)\n", false, &_init_f_create_2025, &_call_f_create_2025);
  methods += new qt_gsi::GenericMethod ("keys", "@brief Method QStringList QIconEnginePluginV2::keys()\n", true, &_init_f_keys_c0, &_call_f_keys_c0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QIconEnginePluginV2::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QIconEnginePluginV2::tr(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_tr_3354, &_call_f_tr_3354);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QIconEnginePluginV2::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QIconEnginePluginV2::trUtf8(const char *s, const char *c)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_3354, &_call_f_trUtf8_3354);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QIconEnginePluginV2::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QIconEnginePluginV2> decl_QIconEnginePluginV2 (qtdecl_QObject (), "QIconEnginePluginV2_Native",
  methods_QIconEnginePluginV2 (),
  "@hide\n@alias QIconEnginePluginV2");

GSIQT_PUBLIC gsi::Class<QIconEnginePluginV2> &qtdecl_QIconEnginePluginV2 () { return decl_QIconEnginePluginV2; }

}


class QIconEnginePluginV2_Adaptor : public QIconEnginePluginV2, public qt_gsi::QtObjectBase
{
public:

  virtual ~QIconEnginePluginV2_Adaptor();

  //  [adaptor ctor] QIconEnginePluginV2::QIconEnginePluginV2(QObject *parent)
  QIconEnginePluginV2_Adaptor() : QIconEnginePluginV2()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QIconEnginePluginV2::QIconEnginePluginV2(QObject *parent)
  QIconEnginePluginV2_Adaptor(QObject *parent) : QIconEnginePluginV2(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] int QIconEnginePluginV2::receivers(const char *signal)
  int fp_QIconEnginePluginV2_receivers_c1731 (const char *signal) const {
    return QIconEnginePluginV2::receivers(signal);
  }

  //  [expose] QObject *QIconEnginePluginV2::sender()
  QObject * fp_QIconEnginePluginV2_sender_c0 () const {
    return QIconEnginePluginV2::sender();
  }

  //  [adaptor impl] QIconEngineV2 *QIconEnginePluginV2::create(const QString &filename)
  QIconEngineV2 * cbs_create_2025_1(const QString &filename)
  {
    __SUPPRESS_UNUSED_WARNING (filename);
    throw qt_gsi::AbstractMethodCalledException("create");
  }

  virtual QIconEngineV2 * create(const QString &filename)
  {
    if (cb_create_2025_1.can_issue()) {
      return cb_create_2025_1.issue<QIconEnginePluginV2_Adaptor, QIconEngineV2 *, const QString &>(&QIconEnginePluginV2_Adaptor::cbs_create_2025_1, filename);
    } else {
      throw qt_gsi::AbstractMethodCalledException("create");
    }
  }

  //  [adaptor impl] bool QIconEnginePluginV2::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QIconEnginePluginV2::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QIconEnginePluginV2_Adaptor, bool, QEvent *>(&QIconEnginePluginV2_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QIconEnginePluginV2::event(arg1);
    }
  }

  //  [adaptor impl] bool QIconEnginePluginV2::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QIconEnginePluginV2::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QIconEnginePluginV2_Adaptor, bool, QObject *, QEvent *>(&QIconEnginePluginV2_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QIconEnginePluginV2::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] QStringList QIconEnginePluginV2::keys()
  QStringList cbs_keys_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("keys");
  }

  virtual QStringList keys() const
  {
    if (cb_keys_c0_0.can_issue()) {
      return cb_keys_c0_0.issue<QIconEnginePluginV2_Adaptor, QStringList>(&QIconEnginePluginV2_Adaptor::cbs_keys_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("keys");
    }
  }

  //  [adaptor impl] void QIconEnginePluginV2::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QIconEnginePluginV2::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QIconEnginePluginV2_Adaptor, QChildEvent *>(&QIconEnginePluginV2_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QIconEnginePluginV2::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QIconEnginePluginV2::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QIconEnginePluginV2::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QIconEnginePluginV2_Adaptor, QEvent *>(&QIconEnginePluginV2_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QIconEnginePluginV2::customEvent(arg1);
    }
  }

  //  [emitter impl] void QIconEnginePluginV2::destroyed(QObject *)
  void emitter_QIconEnginePluginV2_destroyed_1302(QObject *arg1)
  {
    emit QIconEnginePluginV2::destroyed(arg1);
  }

  //  [adaptor impl] void QIconEnginePluginV2::disconnectNotify(const char *signal)
  void cbs_disconnectNotify_1731_0(const char *signal)
  {
    QIconEnginePluginV2::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const char *signal)
  {
    if (cb_disconnectNotify_1731_0.can_issue()) {
      cb_disconnectNotify_1731_0.issue<QIconEnginePluginV2_Adaptor, const char *>(&QIconEnginePluginV2_Adaptor::cbs_disconnectNotify_1731_0, signal);
    } else {
      QIconEnginePluginV2::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QIconEnginePluginV2::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QIconEnginePluginV2::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QIconEnginePluginV2_Adaptor, QTimerEvent *>(&QIconEnginePluginV2_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QIconEnginePluginV2::timerEvent(arg1);
    }
  }

  gsi::Callback cb_create_2025_1;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_keys_c0_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_1731_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QIconEnginePluginV2_Adaptor::~QIconEnginePluginV2_Adaptor() { }

//  Constructor QIconEnginePluginV2::QIconEnginePluginV2(QObject *parent) (adaptor class)

static void _init_ctor_QIconEnginePluginV2_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QIconEnginePluginV2_Adaptor> ();
}

static void _call_ctor_QIconEnginePluginV2_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ret.write<QIconEnginePluginV2_Adaptor *> (new QIconEnginePluginV2_Adaptor (arg1));
}


// void QIconEnginePluginV2::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEnginePluginV2_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEnginePluginV2_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// QIconEngineV2 *QIconEnginePluginV2::create(const QString &filename)

static void _init_cbs_create_2025_1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("filename");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QIconEngineV2 * > ();
}

static void _call_cbs_create_2025_1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QIconEngineV2 * > ((QIconEngineV2 *)((QIconEnginePluginV2_Adaptor *)cls)->cbs_create_2025_1 (arg1));
}

static void _set_callback_cbs_create_2025_1 (void *cls, const gsi::Callback &cb)
{
  ((QIconEnginePluginV2_Adaptor *)cls)->cb_create_2025_1 = cb;
}


// void QIconEnginePluginV2::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEnginePluginV2_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEnginePluginV2_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QIconEnginePluginV2::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ((QIconEnginePluginV2_Adaptor *)cls)->emitter_QIconEnginePluginV2_destroyed_1302 (arg1);
}


// void QIconEnginePluginV2::disconnectNotify(const char *signal)

static void _init_cbs_disconnectNotify_1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEnginePluginV2_Adaptor *)cls)->cbs_disconnectNotify_1731_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEnginePluginV2_Adaptor *)cls)->cb_disconnectNotify_1731_0 = cb;
}


// bool QIconEnginePluginV2::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QIconEnginePluginV2_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEnginePluginV2_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QIconEnginePluginV2::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QIconEnginePluginV2_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEnginePluginV2_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// QStringList QIconEnginePluginV2::keys()

static void _init_cbs_keys_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringList > ();
}

static void _call_cbs_keys_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringList > ((QStringList)((QIconEnginePluginV2_Adaptor *)cls)->cbs_keys_c0_0 ());
}

static void _set_callback_cbs_keys_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEnginePluginV2_Adaptor *)cls)->cb_keys_c0_0 = cb;
}


// exposed int QIconEnginePluginV2::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<int > ((int)((QIconEnginePluginV2_Adaptor *)cls)->fp_QIconEnginePluginV2_receivers_c1731 (arg1));
}


// exposed QObject *QIconEnginePluginV2::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QIconEnginePluginV2_Adaptor *)cls)->fp_QIconEnginePluginV2_sender_c0 ());
}


// void QIconEnginePluginV2::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIconEnginePluginV2_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QIconEnginePluginV2_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QIconEnginePluginV2> &qtdecl_QIconEnginePluginV2 ();

static gsi::Methods methods_QIconEnginePluginV2_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QIconEnginePluginV2::QIconEnginePluginV2(QObject *parent)\nThis method creates an object of class QIconEnginePluginV2.", &_init_ctor_QIconEnginePluginV2_Adaptor_1302, &_call_ctor_QIconEnginePluginV2_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QIconEnginePluginV2::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("qt_create", "@hide", false, &_init_cbs_create_2025_1, &_call_cbs_create_2025_1);
  methods += new qt_gsi::GenericMethod ("qt_create", "@brief Virtual method QIconEngineV2 *QIconEnginePluginV2::create(const QString &filename)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_create_2025_1, &_call_cbs_create_2025_1, &_set_callback_cbs_create_2025_1);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QIconEnginePluginV2::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QIconEnginePluginV2::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QIconEnginePluginV2::disconnectNotify(const char *signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_1731_0, &_call_cbs_disconnectNotify_1731_0, &_set_callback_cbs_disconnectNotify_1731_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QIconEnginePluginV2::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QIconEnginePluginV2::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("keys", "@hide", true, &_init_cbs_keys_c0_0, &_call_cbs_keys_c0_0);
  methods += new qt_gsi::GenericMethod ("keys", "@brief Virtual method QStringList QIconEnginePluginV2::keys()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_keys_c0_0, &_call_cbs_keys_c0_0, &_set_callback_cbs_keys_c0_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QIconEnginePluginV2::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QIconEnginePluginV2::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QIconEnginePluginV2::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QIconEnginePluginV2_Adaptor> decl_QIconEnginePluginV2_Adaptor (qtdecl_QIconEnginePluginV2 (), "QIconEnginePluginV2",
  methods_QIconEnginePluginV2_Adaptor (),
  "@qt\n@brief Binding of QIconEnginePluginV2");

}

