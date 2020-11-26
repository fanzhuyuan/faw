/****************************************************************************
** Meta object code from reading C++ file 'Homepage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Homepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Homepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HomePage_t {
    QByteArrayData data[13];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HomePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HomePage_t qt_meta_stringdata_HomePage = {
    {
QT_MOC_LITERAL(0, 0, 8), // "HomePage"
QT_MOC_LITERAL(1, 9, 9), // "write_msg"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "st_open"
QT_MOC_LITERAL(4, 28, 7), // "st_send"
QT_MOC_LITERAL(5, 36, 10), // "st_receive"
QT_MOC_LITERAL(6, 47, 7), // "st_stop"
QT_MOC_LITERAL(7, 55, 8), // "st_close"
QT_MOC_LITERAL(8, 64, 8), // "st_clear"
QT_MOC_LITERAL(9, 73, 16), // "st_update_output"
QT_MOC_LITERAL(10, 90, 20), // "st_update_raw_output"
QT_MOC_LITERAL(11, 111, 3), // "raw"
QT_MOC_LITERAL(12, 115, 11) // "st_put_data"

    },
    "HomePage\0write_msg\0\0st_open\0st_send\0"
    "st_receive\0st_stop\0st_close\0st_clear\0"
    "st_update_output\0st_update_raw_output\0"
    "raw\0st_put_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HomePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   67,    2, 0x08 /* Private */,
       4,    0,   68,    2, 0x08 /* Private */,
       5,    0,   69,    2, 0x08 /* Private */,
       6,    0,   70,    2, 0x08 /* Private */,
       7,    0,   71,    2, 0x08 /* Private */,
       8,    0,   72,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    1,   74,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void,

       0        // eod
};

void HomePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HomePage *_t = static_cast<HomePage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->write_msg((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->st_open(); break;
        case 2: _t->st_send(); break;
        case 3: _t->st_receive(); break;
        case 4: _t->st_stop(); break;
        case 5: _t->st_close(); break;
        case 6: _t->st_clear(); break;
        case 7: _t->st_update_output(); break;
        case 8: _t->st_update_raw_output((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 9: _t->st_put_data(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HomePage::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HomePage::write_msg)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject HomePage::staticMetaObject = {
    { &StackPageBase::staticMetaObject, qt_meta_stringdata_HomePage.data,
      qt_meta_data_HomePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HomePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HomePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HomePage.stringdata0))
        return static_cast<void*>(const_cast< HomePage*>(this));
    return StackPageBase::qt_metacast(_clname);
}

int HomePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StackPageBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void HomePage::write_msg(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
