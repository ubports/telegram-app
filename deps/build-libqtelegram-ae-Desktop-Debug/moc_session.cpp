/****************************************************************************
** Meta object code from reading C++ file 'session.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../libqtelegram-ae/core/session.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'session.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Session_t {
    QByteArrayData data[55];
    char stringdata0[526];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Session_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Session_t qt_meta_stringdata_Session = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Session"
QT_MOC_LITERAL(1, 8, 12), // "sessionReady"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "DC*"
QT_MOC_LITERAL(4, 26, 2), // "dc"
QT_MOC_LITERAL(5, 29, 15), // "sessionReleased"
QT_MOC_LITERAL(6, 45, 9), // "sessionId"
QT_MOC_LITERAL(7, 55, 13), // "sessionClosed"
QT_MOC_LITERAL(8, 69, 14), // "resultReceived"
QT_MOC_LITERAL(9, 84, 6), // "Query*"
QT_MOC_LITERAL(10, 91, 1), // "q"
QT_MOC_LITERAL(11, 93, 11), // "InboundPkt&"
QT_MOC_LITERAL(12, 105, 10), // "inboundPkt"
QT_MOC_LITERAL(13, 116, 13), // "errorReceived"
QT_MOC_LITERAL(14, 130, 9), // "errorCode"
QT_MOC_LITERAL(15, 140, 9), // "errorText"
QT_MOC_LITERAL(16, 150, 15), // "updateMessageId"
QT_MOC_LITERAL(17, 166, 8), // "badMsgId"
QT_MOC_LITERAL(18, 175, 8), // "newMsgId"
QT_MOC_LITERAL(19, 184, 14), // "updatesTooLong"
QT_MOC_LITERAL(20, 199, 18), // "updateShortMessage"
QT_MOC_LITERAL(21, 218, 2), // "id"
QT_MOC_LITERAL(22, 221, 6), // "userId"
QT_MOC_LITERAL(23, 228, 7), // "message"
QT_MOC_LITERAL(24, 236, 3), // "pts"
QT_MOC_LITERAL(25, 240, 9), // "pts_count"
QT_MOC_LITERAL(26, 250, 4), // "date"
QT_MOC_LITERAL(27, 255, 4), // "Peer"
QT_MOC_LITERAL(28, 260, 11), // "fwd_from_id"
QT_MOC_LITERAL(29, 272, 8), // "fwd_date"
QT_MOC_LITERAL(30, 281, 15), // "reply_to_msg_id"
QT_MOC_LITERAL(31, 297, 6), // "unread"
QT_MOC_LITERAL(32, 304, 3), // "out"
QT_MOC_LITERAL(33, 308, 22), // "updateShortChatMessage"
QT_MOC_LITERAL(34, 331, 6), // "fromId"
QT_MOC_LITERAL(35, 338, 6), // "chatId"
QT_MOC_LITERAL(36, 345, 11), // "updateShort"
QT_MOC_LITERAL(37, 357, 6), // "Update"
QT_MOC_LITERAL(38, 364, 6), // "update"
QT_MOC_LITERAL(39, 371, 15), // "updatesCombined"
QT_MOC_LITERAL(40, 387, 13), // "QList<Update>"
QT_MOC_LITERAL(41, 401, 7), // "updates"
QT_MOC_LITERAL(42, 409, 11), // "QList<User>"
QT_MOC_LITERAL(43, 421, 5), // "users"
QT_MOC_LITERAL(44, 427, 11), // "QList<Chat>"
QT_MOC_LITERAL(45, 439, 5), // "chats"
QT_MOC_LITERAL(46, 445, 8), // "seqStart"
QT_MOC_LITERAL(47, 454, 3), // "seq"
QT_MOC_LITERAL(48, 458, 4), // "udts"
QT_MOC_LITERAL(49, 463, 16), // "processRpcAnswer"
QT_MOC_LITERAL(50, 480, 8), // "response"
QT_MOC_LITERAL(51, 489, 11), // "resendQuery"
QT_MOC_LITERAL(52, 501, 14), // "onDisconnected"
QT_MOC_LITERAL(53, 516, 3), // "ack"
QT_MOC_LITERAL(54, 520, 5) // "msgId"

    },
    "Session\0sessionReady\0\0DC*\0dc\0"
    "sessionReleased\0sessionId\0sessionClosed\0"
    "resultReceived\0Query*\0q\0InboundPkt&\0"
    "inboundPkt\0errorReceived\0errorCode\0"
    "errorText\0updateMessageId\0badMsgId\0"
    "newMsgId\0updatesTooLong\0updateShortMessage\0"
    "id\0userId\0message\0pts\0pts_count\0date\0"
    "Peer\0fwd_from_id\0fwd_date\0reply_to_msg_id\0"
    "unread\0out\0updateShortChatMessage\0"
    "fromId\0chatId\0updateShort\0Update\0"
    "update\0updatesCombined\0QList<Update>\0"
    "updates\0QList<User>\0users\0QList<Chat>\0"
    "chats\0seqStart\0seq\0udts\0processRpcAnswer\0"
    "response\0resendQuery\0onDisconnected\0"
    "ack\0msgId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Session[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       5,    1,   97,    2, 0x06 /* Public */,
       7,    1,  100,    2, 0x06 /* Public */,
       8,    2,  103,    2, 0x06 /* Public */,
      13,    3,  108,    2, 0x06 /* Public */,
      16,    2,  115,    2, 0x06 /* Public */,
      19,    0,  120,    2, 0x06 /* Public */,
      20,   11,  121,    2, 0x06 /* Public */,
      33,   12,  144,    2, 0x06 /* Public */,
      36,    2,  169,    2, 0x06 /* Public */,
      39,    6,  174,    2, 0x06 /* Public */,
      41,    5,  187,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      49,    1,  198,    2, 0x09 /* Protected */,
      51,    1,  201,    2, 0x08 /* Private */,
      52,    0,  204,    2, 0x08 /* Private */,
      53,    1,  205,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::QString,   10,   14,   15,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   17,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 27, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   21,   22,   23,   24,   25,   26,   28,   29,   30,   31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 27, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   21,   34,   35,   23,   24,   25,   26,   28,   29,   30,   31,   32,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Int,   38,   26,
    QMetaType::Void, 0x80000000 | 40, 0x80000000 | 42, 0x80000000 | 44, QMetaType::Int, QMetaType::Int, QMetaType::Int,   41,   43,   45,   26,   46,   47,
    QMetaType::Void, 0x80000000 | 40, 0x80000000 | 42, 0x80000000 | 44, QMetaType::Int, QMetaType::Int,   48,   43,   45,   26,   47,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,   50,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   54,

       0        // eod
};

void Session::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Session *_t = static_cast<Session *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sessionReady((*reinterpret_cast< DC*(*)>(_a[1]))); break;
        case 1: _t->sessionReleased((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->sessionClosed((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->resultReceived((*reinterpret_cast< Query*(*)>(_a[1])),(*reinterpret_cast< InboundPkt(*)>(_a[2]))); break;
        case 4: _t->errorReceived((*reinterpret_cast< Query*(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 5: _t->updateMessageId((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: _t->updatesTooLong(); break;
        case 7: _t->updateShortMessage((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< Peer(*)>(_a[7])),(*reinterpret_cast< qint32(*)>(_a[8])),(*reinterpret_cast< qint32(*)>(_a[9])),(*reinterpret_cast< bool(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11]))); break;
        case 8: _t->updateShortChatMessage((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qint32(*)>(_a[7])),(*reinterpret_cast< Peer(*)>(_a[8])),(*reinterpret_cast< qint32(*)>(_a[9])),(*reinterpret_cast< qint32(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12]))); break;
        case 9: _t->updateShort((*reinterpret_cast< const Update(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 10: _t->updatesCombined((*reinterpret_cast< const QList<Update>(*)>(_a[1])),(*reinterpret_cast< const QList<User>(*)>(_a[2])),(*reinterpret_cast< const QList<Chat>(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6]))); break;
        case 11: _t->updates((*reinterpret_cast< const QList<Update>(*)>(_a[1])),(*reinterpret_cast< const QList<User>(*)>(_a[2])),(*reinterpret_cast< const QList<Chat>(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5]))); break;
        case 12: _t->processRpcAnswer((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 13: _t->resendQuery((*reinterpret_cast< Query*(*)>(_a[1]))); break;
        case 14: _t->onDisconnected(); break;
        case 15: _t->ack((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Query* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Query* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Peer >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 7:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Peer >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Update >(); break;
            }
            break;
        case 10:
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
        case 11:
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
        case 13:
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
            typedef void (Session::*_t)(DC * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::sessionReady)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Session::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::sessionReleased)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Session::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::sessionClosed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Session::*_t)(Query * , InboundPkt & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::resultReceived)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Session::*_t)(Query * , qint32 , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::errorReceived)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Session::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::updateMessageId)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Session::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::updatesTooLong)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Session::*_t)(qint32 , qint32 , const QString & , qint32 , qint32 , qint32 , Peer , qint32 , qint32 , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::updateShortMessage)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Session::*_t)(qint32 , qint32 , qint32 , const QString & , qint32 , qint32 , qint32 , Peer , qint32 , qint32 , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::updateShortChatMessage)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Session::*_t)(const Update & , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::updateShort)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Session::*_t)(const QList<Update> & , const QList<User> & , const QList<Chat> & , qint32 , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::updatesCombined)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Session::*_t)(const QList<Update> & , const QList<User> & , const QList<Chat> & , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Session::updates)) {
                *result = 11;
                return;
            }
        }
    }
}

const QMetaObject Session::staticMetaObject = {
    { &Connection::staticMetaObject, qt_meta_stringdata_Session.data,
      qt_meta_data_Session,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Session::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Session::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Session.stringdata0))
        return static_cast<void*>(const_cast< Session*>(this));
    return Connection::qt_metacast(_clname);
}

int Session::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Connection::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Session::sessionReady(DC * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Session::sessionReleased(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Session::sessionClosed(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Session::resultReceived(Query * _t1, InboundPkt & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Session::errorReceived(Query * _t1, qint32 _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Session::updateMessageId(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Session::updatesTooLong()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void Session::updateShortMessage(qint32 _t1, qint32 _t2, const QString & _t3, qint32 _t4, qint32 _t5, qint32 _t6, Peer _t7, qint32 _t8, qint32 _t9, bool _t10, bool _t11)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Session::updateShortChatMessage(qint32 _t1, qint32 _t2, qint32 _t3, const QString & _t4, qint32 _t5, qint32 _t6, qint32 _t7, Peer _t8, qint32 _t9, qint32 _t10, bool _t11, bool _t12)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)), const_cast<void*>(reinterpret_cast<const void*>(&_t12)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Session::updateShort(const Update & _t1, qint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Session::updatesCombined(const QList<Update> & _t1, const QList<User> & _t2, const QList<Chat> & _t3, qint32 _t4, qint32 _t5, qint32 _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Session::updates(const QList<Update> & _t1, const QList<User> & _t2, const QList<Chat> & _t3, qint32 _t4, qint32 _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_END_MOC_NAMESPACE
