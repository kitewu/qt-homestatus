/****************************************************************************
** Meta object code from reading C++ file 'humidity.h'
**
** Created: Thu May 18 11:03:17 2017
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "humidity.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'humidity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Humidity[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      16,   10,    9,    9, 0x0a,
      39,   32,    9,    9, 0x0a,
      58,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Humidity[] = {
    "Humidity\0\0value\0setValue(qreal)\0enable\0"
    "setAnimating(bool)\0UpdateGraph()\0"
};

const QMetaObject Humidity::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Humidity,
      qt_meta_data_Humidity, 0 }
};

const QMetaObject *Humidity::metaObject() const
{
    return &staticMetaObject;
}

void *Humidity::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Humidity))
        return static_cast<void*>(const_cast< Humidity*>(this));
    return QWidget::qt_metacast(_clname);
}

int Humidity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setValue((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: setAnimating((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: UpdateGraph(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
