/****************************************************************************
** Meta object code from reading C++ file 'connection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../libqtelegram-ae/core/connection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Connection_t {
    QByteArrayData data[12];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Connection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Connection_t qt_meta_stringdata_Connection = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Connection"
QT_MOC_LITERAL(1, 11, 10), // "fatalError"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 15), // "connectToServer"
QT_MOC_LITERAL(4, 39, 11), // "onConnected"
QT_MOC_LITERAL(5, 51, 14), // "onDisconnected"
QT_MOC_LITERAL(6, 66, 11), // "onReadyRead"
QT_MOC_LITERAL(7, 78, 7), // "onError"
QT_MOC_LITERAL(8, 86, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(9, 115, 5), // "error"
QT_MOC_LITERAL(10, 121, 14), // "onStateChanged"
QT_MOC_LITERAL(11, 136, 28) // "QAbstractSocket::SocketState"

    },
    "Connection\0fatalError\0\0connectToServer\0"
    "onConnected\0onDisconnected\0onReadyRead\0"
    "onError\0QAbstractSocket::SocketError\0"
    "error\0onStateChanged\0QAbstractSocket::SocketState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Connection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x09 /* Protected */,
       5,    0,   52,    2, 0x09 /* Protected */,
       6,    0,   53,    2, 0x09 /* Protected */,
       7,    1,   54,    2, 0x09 /* Protected */,
      10,    1,   57,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,    2,

       0        // eod
};

void Connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Connection *_t = static_cast<Connection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fatalError(); break;
        case 1: _t->connectToServer(); break;
        case 2: _t->onConnected(); break;
        case 3: _t->onDisconnected(); break;
        case 4: _t->onReadyRead(); break;
        case 5: _t->onError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 6: _t->onStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Connection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Connection::fatalError)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Connection::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_Connection.data,
      qt_meta_data_Connection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Connection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Connection.stringdata0))
        return static_cast<void*>(const_cast< Connection*>(this));
    if (!strcmp(_clname, "Endpoint"))
        return static_cast< Endpoint*>(const_cast< Connection*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int Connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Connection::fatalError()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
