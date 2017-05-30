/****************************************************************************
** Meta object code from reading C++ file 'sessionmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../libqtelegram-ae/core/sessionmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessionmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SessionManager_t {
    QByteArrayData data[10];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SessionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SessionManager_t qt_meta_stringdata_SessionManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SessionManager"
QT_MOC_LITERAL(1, 15, 20), // "mainSessionDcChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 3), // "DC*"
QT_MOC_LITERAL(4, 41, 2), // "dc"
QT_MOC_LITERAL(5, 44, 16), // "mainSessionReady"
QT_MOC_LITERAL(6, 61, 17), // "mainSessionClosed"
QT_MOC_LITERAL(7, 79, 17), // "onSessionReleased"
QT_MOC_LITERAL(8, 97, 9), // "sessionId"
QT_MOC_LITERAL(9, 107, 15) // "onSessionClosed"

    },
    "SessionManager\0mainSessionDcChanged\0"
    "\0DC*\0dc\0mainSessionReady\0mainSessionClosed\0"
    "onSessionReleased\0sessionId\0onSessionClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SessionManager[] = {

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
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   44,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::LongLong,    8,

       0        // eod
};

void SessionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SessionManager *_t = static_cast<SessionManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mainSessionDcChanged((*reinterpret_cast< DC*(*)>(_a[1]))); break;
        case 1: _t->mainSessionReady(); break;
        case 2: _t->mainSessionClosed(); break;
        case 3: _t->onSessionReleased((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->onSessionClosed((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SessionManager::*_t)(DC * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SessionManager::mainSessionDcChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SessionManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SessionManager::mainSessionReady)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SessionManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SessionManager::mainSessionClosed)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SessionManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SessionManager.data,
      qt_meta_data_SessionManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SessionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SessionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SessionManager.stringdata0))
        return static_cast<void*>(const_cast< SessionManager*>(this));
    return QObject::qt_metacast(_clname);
}

int SessionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SessionManager::mainSessionDcChanged(DC * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SessionManager::mainSessionReady()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SessionManager::mainSessionClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
