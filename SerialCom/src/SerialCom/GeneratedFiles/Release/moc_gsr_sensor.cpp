/****************************************************************************
** Meta object code from reading C++ file 'gsr_sensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gsr_sensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gsr_sensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GsrSensor_t {
    QByteArrayData data[5];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GsrSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GsrSensor_t qt_meta_stringdata_GsrSensor = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GsrSensor"
QT_MOC_LITERAL(1, 10, 7), // "send_ui"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12), // "st_write_msg"
QT_MOC_LITERAL(4, 32, 3) // "msg"

    },
    "GsrSensor\0send_ui\0\0st_write_msg\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GsrSensor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    4,

       0        // eod
};

void GsrSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GsrSensor *_t = static_cast<GsrSensor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_ui((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->st_write_msg((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GsrSensor::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GsrSensor::send_ui)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject GsrSensor::staticMetaObject = {
    { &Sensor::staticMetaObject, qt_meta_stringdata_GsrSensor.data,
      qt_meta_data_GsrSensor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GsrSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GsrSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GsrSensor.stringdata0))
        return static_cast<void*>(const_cast< GsrSensor*>(this));
    return Sensor::qt_metacast(_clname);
}

int GsrSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Sensor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GsrSensor::send_ui(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
