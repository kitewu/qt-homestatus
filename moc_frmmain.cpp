/****************************************************************************
** Meta object code from reading C++ file 'frmmain.h'
**
** Created: Thu May 18 11:03:21 2017
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "frmmain.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_frmMain[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      23,    8,    8,    8, 0x08,
      37,    8,    8,    8, 0x08,
      52,    8,    8,    8, 0x08,
      85,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_frmMain[] = {
    "frmMain\0\0update_temp()\0update_humi()\0"
    "update_light()\0processMsgFromSerial(QByteArray)\0"
    "update_data()\0"
};

const QMetaObject frmMain::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_frmMain,
      qt_meta_data_frmMain, 0 }
};

const QMetaObject *frmMain::metaObject() const
{
    return &staticMetaObject;
}

void *frmMain::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_frmMain))
        return static_cast<void*>(const_cast< frmMain*>(this));
    return QWidget::qt_metacast(_clname);
}

int frmMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update_temp(); break;
        case 1: update_humi(); break;
        case 2: update_light(); break;
        case 3: processMsgFromSerial((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: update_data(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
