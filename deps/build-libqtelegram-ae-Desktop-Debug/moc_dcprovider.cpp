/****************************************************************************
** Meta object code from reading C++ file 'dcprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../libqtelegram-ae/core/dcprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dcprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DcProvider_t {
    QByteArrayData data[29];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DcProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DcProvider_t qt_meta_stringdata_DcProvider = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DcProvider"
QT_MOC_LITERAL(1, 11, 15), // "dcProviderReady"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "authNeeded"
QT_MOC_LITERAL(4, 39, 21), // "authTransferCompleted"
QT_MOC_LITERAL(5, 61, 5), // "error"
QT_MOC_LITERAL(6, 67, 2), // "id"
QT_MOC_LITERAL(7, 70, 9), // "errorCode"
QT_MOC_LITERAL(8, 80, 9), // "errorText"
QT_MOC_LITERAL(9, 90, 12), // "functionName"
QT_MOC_LITERAL(10, 103, 10), // "fatalError"
QT_MOC_LITERAL(11, 114, 6), // "logOut"
QT_MOC_LITERAL(12, 121, 9), // "onDcReady"
QT_MOC_LITERAL(13, 131, 3), // "DC*"
QT_MOC_LITERAL(14, 135, 2), // "dc"
QT_MOC_LITERAL(15, 138, 20), // "onDcAuthDisconnected"
QT_MOC_LITERAL(16, 159, 10), // "onApiReady"
QT_MOC_LITERAL(17, 170, 10), // "onApiError"
QT_MOC_LITERAL(18, 181, 16), // "onConfigReceived"
QT_MOC_LITERAL(19, 198, 5), // "msgId"
QT_MOC_LITERAL(20, 204, 6), // "Config"
QT_MOC_LITERAL(21, 211, 6), // "config"
QT_MOC_LITERAL(22, 218, 22), // "onTransferSessionReady"
QT_MOC_LITERAL(23, 241, 27), // "onAuthExportedAuthorization"
QT_MOC_LITERAL(24, 269, 5), // "ourId"
QT_MOC_LITERAL(25, 275, 5), // "bytes"
QT_MOC_LITERAL(26, 281, 27), // "onAuthImportedAuthorization"
QT_MOC_LITERAL(27, 309, 7), // "expires"
QT_MOC_LITERAL(28, 317, 4) // "User"

    },
    "DcProvider\0dcProviderReady\0\0authNeeded\0"
    "authTransferCompleted\0error\0id\0errorCode\0"
    "errorText\0functionName\0fatalError\0"
    "logOut\0onDcReady\0DC*\0dc\0onDcAuthDisconnected\0"
    "onApiReady\0onApiError\0onConfigReceived\0"
    "msgId\0Config\0config\0onTransferSessionReady\0"
    "onAuthExportedAuthorization\0ourId\0"
    "bytes\0onAuthImportedAuthorization\0"
    "expires\0User"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DcProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    4,   87,    2, 0x06 /* Public */,
      10,    0,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   97,    2, 0x0a /* Public */,
      12,    1,   98,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,
      16,    1,  102,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,
      18,    2,  106,    2, 0x08 /* Private */,
      22,    1,  111,    2, 0x08 /* Private */,
      23,    3,  114,    2, 0x08 /* Private */,
      26,    3,  121,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString, QMetaType::QString,    6,    7,    8,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 20,   19,   21,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QByteArray,    2,   24,   25,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 28,    2,   27,    2,

       0        // eod
};

void DcProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DcProvider *_t = static_cast<DcProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dcProviderReady(); break;
        case 1: _t->authNeeded(); break;
        case 2: _t->authTransferCompleted(); break;
        case 3: _t->error((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 4: _t->fatalError(); break;
        case 5: _t->logOut(); break;
        case 6: _t->onDcReady((*reinterpret_cast< DC*(*)>(_a[1]))); break;
        case 7: _t->onDcAuthDisconnected(); break;
        case 8: _t->onApiReady((*reinterpret_cast< DC*(*)>(_a[1]))); break;
        case 9: _t->onApiError(); break;
        case 10: _t->onConfigReceived((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const Config(*)>(_a[2]))); break;
        case 11: _t->onTransferSessionReady((*reinterpret_cast< DC*(*)>(_a[1]))); break;
        case 12: _t->onAuthExportedAuthorization((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 13: _t->onAuthImportedAuthorization((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const User(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Config >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DcProvider::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DcProvider::dcProviderReady)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DcProvider::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DcProvider::authNeeded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DcProvider::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DcProvider::authTransferCompleted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DcProvider::*_t)(qint64 , qint32 , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DcProvider::error)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DcProvider::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DcProvider::fatalError)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject DcProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DcProvider.data,
      qt_meta_data_DcProvider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DcProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DcProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DcProvider.stringdata0))
        return static_cast<void*>(const_cast< DcProvider*>(this));
    return QObject::qt_metacast(_clname);
}

int DcProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void DcProvider::dcProviderReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DcProvider::authNeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DcProvider::authTransferCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void DcProvider::error(qint64 _t1, qint32 _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DcProvider::fatalError()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
