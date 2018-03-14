/****************************************************************************
** Meta object code from reading C++ file 'JoystickGripperInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/rqt_rover_gui/src/JoystickGripperInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JoystickGripperInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_JoystickGripperInterface_t {
    QByteArrayData data[6];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JoystickGripperInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JoystickGripperInterface_t qt_meta_stringdata_JoystickGripperInterface = {
    {
QT_MOC_LITERAL(0, 0, 24), // "JoystickGripperInterface"
QT_MOC_LITERAL(1, 25, 41), // "sendJoystickGripperWristContr..."
QT_MOC_LITERAL(2, 67, 0), // ""
QT_MOC_LITERAL(3, 68, 40), // "sendJoystickGripperWristContr..."
QT_MOC_LITERAL(4, 109, 42), // "sendJoystickGripperFingerCont..."
QT_MOC_LITERAL(5, 152, 41) // "sendJoystickGripperFingerCont..."

    },
    "JoystickGripperInterface\0"
    "sendJoystickGripperWristControlTimerStart\0"
    "\0sendJoystickGripperWristControlTimerStop\0"
    "sendJoystickGripperFingerControlTimerStart\0"
    "sendJoystickGripperFingerControlTimerStop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JoystickGripperInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    0,   37,    2, 0x06 /* Public */,
       4,    1,   38,    2, 0x06 /* Public */,
       5,    0,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void JoystickGripperInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JoystickGripperInterface *_t = static_cast<JoystickGripperInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendJoystickGripperWristControlTimerStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sendJoystickGripperWristControlTimerStop(); break;
        case 2: _t->sendJoystickGripperFingerControlTimerStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sendJoystickGripperFingerControlTimerStop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (JoystickGripperInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickGripperInterface::sendJoystickGripperWristControlTimerStart)) {
                *result = 0;
            }
        }
        {
            typedef void (JoystickGripperInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickGripperInterface::sendJoystickGripperWristControlTimerStop)) {
                *result = 1;
            }
        }
        {
            typedef void (JoystickGripperInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickGripperInterface::sendJoystickGripperFingerControlTimerStart)) {
                *result = 2;
            }
        }
        {
            typedef void (JoystickGripperInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&JoystickGripperInterface::sendJoystickGripperFingerControlTimerStop)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject JoystickGripperInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_JoystickGripperInterface.data,
      qt_meta_data_JoystickGripperInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *JoystickGripperInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JoystickGripperInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_JoystickGripperInterface.stringdata0))
        return static_cast<void*>(const_cast< JoystickGripperInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int JoystickGripperInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void JoystickGripperInterface::sendJoystickGripperWristControlTimerStart(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void JoystickGripperInterface::sendJoystickGripperWristControlTimerStop()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void JoystickGripperInterface::sendJoystickGripperFingerControlTimerStart(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void JoystickGripperInterface::sendJoystickGripperFingerControlTimerStop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
