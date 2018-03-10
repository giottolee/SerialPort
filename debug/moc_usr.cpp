/****************************************************************************
** Meta object code from reading C++ file 'usr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../usr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_usr_t {
    QByteArrayData data[14];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_usr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_usr_t qt_meta_stringdata_usr = {
    {
QT_MOC_LITERAL(0, 0, 3), // "usr"
QT_MOC_LITERAL(1, 4, 15), // "on_send_clicked"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "Read_Data"
QT_MOC_LITERAL(4, 31, 19), // "on_openport_clicked"
QT_MOC_LITERAL(5, 51, 27), // "on_startAutoControl_clicked"
QT_MOC_LITERAL(6, 79, 7), // "sendchk"
QT_MOC_LITERAL(7, 87, 33), // "on_autoControlSwitch_stateCha..."
QT_MOC_LITERAL(8, 121, 4), // "arg1"
QT_MOC_LITERAL(9, 126, 11), // "timerUpdate"
QT_MOC_LITERAL(10, 138, 7), // "getTime"
QT_MOC_LITERAL(11, 146, 9), // "writeFile"
QT_MOC_LITERAL(12, 156, 3), // "str"
QT_MOC_LITERAL(13, 160, 3) // "log"

    },
    "usr\0on_send_clicked\0\0Read_Data\0"
    "on_openport_clicked\0on_startAutoControl_clicked\0"
    "sendchk\0on_autoControlSwitch_stateChanged\0"
    "arg1\0timerUpdate\0getTime\0writeFile\0"
    "str\0log"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_usr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    1,   69,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void usr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        usr *_t = static_cast<usr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_send_clicked(); break;
        case 1: _t->Read_Data(); break;
        case 2: _t->on_openport_clicked(); break;
        case 3: _t->on_startAutoControl_clicked(); break;
        case 4: _t->sendchk(); break;
        case 5: _t->on_autoControlSwitch_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        //case 6: _t->timerUpdate(); break;
        case 7: { QString _r = _t->getTime();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->writeFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject usr::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_usr.data,
      qt_meta_data_usr,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *usr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *usr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_usr.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int usr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
