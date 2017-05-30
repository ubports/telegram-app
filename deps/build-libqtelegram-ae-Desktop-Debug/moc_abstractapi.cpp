/****************************************************************************
** Meta object code from reading C++ file 'abstractapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../libqtelegram-ae/core/abstractapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AbstractApi_t {
    QByteArrayData data[40];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractApi_t qt_meta_stringdata_AbstractApi = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AbstractApi"
QT_MOC_LITERAL(1, 12, 10), // "fatalError"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "updatesTooLong"
QT_MOC_LITERAL(4, 39, 18), // "updateShortMessage"
QT_MOC_LITERAL(5, 58, 2), // "id"
QT_MOC_LITERAL(6, 61, 6), // "userId"
QT_MOC_LITERAL(7, 68, 7), // "message"
QT_MOC_LITERAL(8, 76, 3), // "pts"
QT_MOC_LITERAL(9, 80, 9), // "pts_count"
QT_MOC_LITERAL(10, 90, 4), // "date"
QT_MOC_LITERAL(11, 95, 11), // "fwd_from_id"
QT_MOC_LITERAL(12, 107, 8), // "fwd_date"
QT_MOC_LITERAL(13, 116, 15), // "reply_to_msg_id"
QT_MOC_LITERAL(14, 132, 6), // "unread"
QT_MOC_LITERAL(15, 139, 3), // "out"
QT_MOC_LITERAL(16, 143, 22), // "updateShortChatMessage"
QT_MOC_LITERAL(17, 166, 6), // "fromId"
QT_MOC_LITERAL(18, 173, 6), // "chatId"
QT_MOC_LITERAL(19, 180, 11), // "updateShort"
QT_MOC_LITERAL(20, 192, 6), // "Update"
QT_MOC_LITERAL(21, 199, 6), // "update"
QT_MOC_LITERAL(22, 206, 15), // "updatesCombined"
QT_MOC_LITERAL(23, 222, 13), // "QList<Update>"
QT_MOC_LITERAL(24, 236, 7), // "updates"
QT_MOC_LITERAL(25, 244, 11), // "QList<User>"
QT_MOC_LITERAL(26, 256, 5), // "users"
QT_MOC_LITERAL(27, 262, 11), // "QList<Chat>"
QT_MOC_LITERAL(28, 274, 5), // "chats"
QT_MOC_LITERAL(29, 280, 8), // "seqStart"
QT_MOC_LITERAL(30, 289, 3), // "seq"
QT_MOC_LITERAL(31, 293, 4), // "udts"
QT_MOC_LITERAL(32, 298, 16), // "onResultReceived"
QT_MOC_LITERAL(33, 315, 6), // "Query*"
QT_MOC_LITERAL(34, 322, 1), // "q"
QT_MOC_LITERAL(35, 324, 11), // "InboundPkt&"
QT_MOC_LITERAL(36, 336, 10), // "inboundPkt"
QT_MOC_LITERAL(37, 347, 15), // "onErrorReceived"
QT_MOC_LITERAL(38, 363, 9), // "errorCode"
QT_MOC_LITERAL(39, 373, 9) // "errorText"

    },
    "AbstractApi\0fatalError\0\0updatesTooLong\0"
    "updateShortMessage\0id\0userId\0message\0"
    "pts\0pts_count\0date\0fwd_from_id\0fwd_date\0"
    "reply_to_msg_id\0unread\0out\0"
    "updateShortChatMessage\0fromId\0chatId\0"
    "updateShort\0Update\0update\0updatesCombined\0"
    "QList<Update>\0updates\0QList<User>\0"
    "users\0QList<Chat>\0chats\0seqStart\0seq\0"
    "udts\0onResultReceived\0Query*\0q\0"
    "InboundPkt&\0inboundPkt\0onErrorReceived\0"
    "errorCode\0errorText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractApi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,   11,   61,    2, 0x06 /* Public */,
      16,   12,   84,    2, 0x06 /* Public */,
      19,    2,  109,    2, 0x06 /* Public */,
      22,    6,  114,    2, 0x06 /* Public */,
      24,    5,  127,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      32,    2,  138,    2, 0x08 /* Private */,
      37,    3,  143,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    5,   17,   18,    7,    8,    9,   10,   11,   12,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 20, QMetaType::Int,   21,   10,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 25, 0x80000000 | 27, QMetaType::Int, QMetaType::Int, QMetaType::Int,   24,   26,   28,   10,   29,   30,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 25, 0x80000000 | 27, QMetaType::Int, QMetaType::Int,   31,   26,   28,   10,   30,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 33, 0x80000000 | 35,   34,   36,
    QMetaType::Void, 0x80000000 | 33, QMetaType::Int, QMetaType::QString,   34,   38,   39,

       0        // eod
};

void AbstractApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbstractApi *_t = static_cast<AbstractApi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fatalError(); break;
        case 1: _t->updatesTooLong(); break;
        case 2: _t->updateShortMessage((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qint32(*)>(_a[7])),(*reinterpret_cast< qint32(*)>(_a[8])),(*reinterpret_cast< qint32(*)>(_a[9])),(*reinterpret_cast< bool(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11]))); break;
        case 3: _t->updateShortChatMessage((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qint32(*)>(_a[7])),(*reinterpret_cast< qint32(*)>(_a[8])),(*reinterpret_cast< qint32(*)>(_a[9])),(*reinterpret_cast< qint32(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12]))); break;
        case 4: _t->updateShort((*reinterpret_cast< const Update(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 5: _t->updatesCombined((*reinterpret_cast< const QList<Update>(*)>(_a[1])),(*reinterpret_cast< const QList<User>(*)>(_a[2])),(*reinterpret_cast< const QList<Chat>(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6]))); break;
        case 6: _t->updates((*reinterpret_cast< const QList<Update>(*)>(_a[1])),(*reinterpret_cast< const QList<User>(*)>(_a[2])),(*reinterpret_cast< const QList<Chat>(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5]))); break;
        case 7: _t->onResultReceived((*reinterpret_cast< Query*(*)>(_a[1])),(*reinterpret_cast< InboundPkt(*)>(_a[2]))); break;
        case 8: _t->onErrorReceived((*reinterpret_cast< Query*(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Update >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Update> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Chat> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Update> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<User> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Query* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Query* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AbstractApi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractApi::fatalError)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AbstractApi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractApi::updatesTooLong)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AbstractApi::*_t)(qint32 , qint32 , const QString & , qint32 , qint32 , qint32 , qint32 , qint32 , qint32 , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractApi::updateShortMessage)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AbstractApi::*_t)(qint32 , qint32 , qint32 , const QString & , qint32 , qint32 , qint32 , qint32 , qint32 , qint32 , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractApi::updateShortChatMessage)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AbstractApi::*_t)(const Update & , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractApi::updateShort)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (AbstractApi::*_t)(const QList<Update> & , const QList<User> & , const QList<Chat> & , qint32 , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractApi::updatesCombined)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (AbstractApi::*_t)(const QList<Update> & , const QList<User> & , const QList<Chat> & , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AbstractApi::updates)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject AbstractApi::staticMetaObject = {
    { &SessionManager::staticMetaObject, qt_meta_stringdata_AbstractApi.data,
      qt_meta_data_AbstractApi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AbstractApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractApi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractApi.stringdata0))
        return static_cast<void*>(const_cast< AbstractApi*>(this));
    return SessionManager::qt_metacast(_clname);
}

int AbstractApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SessionManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AbstractApi::fatalError()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AbstractApi::updatesTooLong()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void AbstractApi::updateShortMessage(qint32 _t1, qint32 _t2, const QString & _t3, qint32 _t4, qint32 _t5, qint32 _t6, qint32 _t7, qint32 _t8, qint32 _t9, bool _t10, bool _t11)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AbstractApi::updateShortChatMessage(qint32 _t1, qint32 _t2, qint32 _t3, const QString & _t4, qint32 _t5, qint32 _t6, qint32 _t7, qint32 _t8, qint32 _t9, qint32 _t10, bool _t11, bool _t12)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AbstractApi::updateShort(const Update & _t1, qint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AbstractApi::updatesCombined(const QList<Update> & _t1, const QList<User> & _t2, const QList<Chat> & _t3, qint32 _t4, qint32 _t5, qint32 _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AbstractApi::updates(const QList<Update> & _t1, const QList<User> & _t2, const QList<Chat> & _t3, qint32 _t4, qint32 _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
