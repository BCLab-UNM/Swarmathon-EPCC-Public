/****************************************************************************
** Meta object code from reading C++ file 'MapFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/rqt_rover_gui/src/MapFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MapFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_rqt_rover_gui__MapFrame_t {
    QByteArrayData data[9];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rqt_rover_gui__MapFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rqt_rover_gui__MapFrame_t qt_meta_stringdata_rqt_rover_gui__MapFrame = {
    {
QT_MOC_LITERAL(0, 0, 23), // "rqt_rover_gui::MapFrame"
QT_MOC_LITERAL(1, 24, 18), // "sendInfoLogMessage"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 3), // "msg"
QT_MOC_LITERAL(4, 48, 15), // "sendWaypointCmd"
QT_MOC_LITERAL(5, 64, 11), // "WaypointCmd"
QT_MOC_LITERAL(6, 76, 13), // "delayedUpdate"
QT_MOC_LITERAL(7, 90, 22), // "receiveWaypointReached"
QT_MOC_LITERAL(8, 113, 23) // "receiveCurrentRoverName"

    },
    "rqt_rover_gui::MapFrame\0sendInfoLogMessage\0"
    "\0msg\0sendWaypointCmd\0WaypointCmd\0"
    "delayedUpdate\0receiveWaypointReached\0"
    "receiveCurrentRoverName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rqt_rover_gui__MapFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    4,   42,    2, 0x06 /* Public */,
       6,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   52,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void rqt_rover_gui::MapFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MapFrame *_t = static_cast<MapFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendInfoLogMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendWaypointCmd((*reinterpret_cast< WaypointCmd(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 2: _t->delayedUpdate(); break;
        case 3: _t->receiveWaypointReached((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->receiveCurrentRoverName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MapFrame::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MapFrame::sendInfoLogMessage)) {
                *result = 0;
            }
        }
        {
            typedef void (MapFrame::*_t)(WaypointCmd , int , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MapFrame::sendWaypointCmd)) {
                *result = 1;
            }
        }
        {
            typedef void (MapFrame::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MapFrame::delayedUpdate)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject rqt_rover_gui::MapFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_rqt_rover_gui__MapFrame.data,
      qt_meta_data_rqt_rover_gui__MapFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *rqt_rover_gui::MapFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rqt_rover_gui::MapFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_rqt_rover_gui__MapFrame.stringdata0))
        return static_cast<void*>(const_cast< MapFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int rqt_rover_gui::MapFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void rqt_rover_gui::MapFrame::sendInfoLogMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rqt_rover_gui::MapFrame::sendWaypointCmd(WaypointCmd _t1, int _t2, float _t3, float _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void rqt_rover_gui::MapFrame::delayedUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
