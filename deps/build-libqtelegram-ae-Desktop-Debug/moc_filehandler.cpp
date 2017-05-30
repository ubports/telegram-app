/****************************************************************************
** Meta object code from reading C++ file 'filehandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../libqtelegram-ae/file/filehandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filehandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileHandler_t {
    QByteArrayData data[39];
    char stringdata0[526];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileHandler_t qt_meta_stringdata_FileHandler = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FileHandler"
QT_MOC_LITERAL(1, 12, 20), // "uploadSendFileAnswer"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 6), // "fileId"
QT_MOC_LITERAL(4, 41, 6), // "partId"
QT_MOC_LITERAL(5, 48, 8), // "uploaded"
QT_MOC_LITERAL(6, 57, 9), // "totalSize"
QT_MOC_LITERAL(7, 67, 19), // "uploadGetFileAnswer"
QT_MOC_LITERAL(8, 87, 15), // "StorageFileType"
QT_MOC_LITERAL(9, 103, 4), // "type"
QT_MOC_LITERAL(10, 108, 5), // "mtime"
QT_MOC_LITERAL(11, 114, 5), // "bytes"
QT_MOC_LITERAL(12, 120, 10), // "downloaded"
QT_MOC_LITERAL(13, 131, 5), // "total"
QT_MOC_LITERAL(14, 137, 22), // "uploadCancelFileAnswer"
QT_MOC_LITERAL(15, 160, 9), // "cancelled"
QT_MOC_LITERAL(16, 170, 5), // "error"
QT_MOC_LITERAL(17, 176, 2), // "id"
QT_MOC_LITERAL(18, 179, 9), // "errorCode"
QT_MOC_LITERAL(19, 189, 9), // "errorText"
QT_MOC_LITERAL(20, 199, 17), // "messagesSentMedia"
QT_MOC_LITERAL(21, 217, 11), // "UpdatesType"
QT_MOC_LITERAL(22, 229, 7), // "updates"
QT_MOC_LITERAL(23, 237, 31), // "messagesSendEncryptedFileAnswer"
QT_MOC_LITERAL(24, 269, 4), // "date"
QT_MOC_LITERAL(25, 274, 13), // "EncryptedFile"
QT_MOC_LITERAL(26, 288, 13), // "encryptedFile"
QT_MOC_LITERAL(27, 302, 30), // "onUploadSendFileSessionCreated"
QT_MOC_LITERAL(28, 333, 26), // "onUploadSaveFilePartResult"
QT_MOC_LITERAL(29, 360, 5), // "msgId"
QT_MOC_LITERAL(30, 366, 2), // "ok"
QT_MOC_LITERAL(31, 369, 29), // "onUploadGetFileSessionCreated"
QT_MOC_LITERAL(32, 399, 21), // "onUploadGetFileAnswer"
QT_MOC_LITERAL(33, 421, 20), // "onUploadGetFileError"
QT_MOC_LITERAL(34, 442, 19), // "onMessagesSentMedia"
QT_MOC_LITERAL(35, 462, 27), // "onMessagesSentEncryptedFile"
QT_MOC_LITERAL(36, 490, 17), // "onUpdateMessageId"
QT_MOC_LITERAL(37, 508, 8), // "oldMsgId"
QT_MOC_LITERAL(38, 517, 8) // "newMsgId"

    },
    "FileHandler\0uploadSendFileAnswer\0\0"
    "fileId\0partId\0uploaded\0totalSize\0"
    "uploadGetFileAnswer\0StorageFileType\0"
    "type\0mtime\0bytes\0downloaded\0total\0"
    "uploadCancelFileAnswer\0cancelled\0error\0"
    "id\0errorCode\0errorText\0messagesSentMedia\0"
    "UpdatesType\0updates\0messagesSendEncryptedFileAnswer\0"
    "date\0EncryptedFile\0encryptedFile\0"
    "onUploadSendFileSessionCreated\0"
    "onUploadSaveFilePartResult\0msgId\0ok\0"
    "onUploadGetFileSessionCreated\0"
    "onUploadGetFileAnswer\0onUploadGetFileError\0"
    "onMessagesSentMedia\0onMessagesSentEncryptedFile\0"
    "onUpdateMessageId\0oldMsgId\0newMsgId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   94,    2, 0x06 /* Public */,
       7,    7,  103,    2, 0x06 /* Public */,
      14,    2,  118,    2, 0x06 /* Public */,
      16,    3,  123,    2, 0x06 /* Public */,
      20,    2,  130,    2, 0x06 /* Public */,
      23,    3,  135,    2, 0x06 /* Public */,
      23,    2,  142,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
      27,    0,  147,    2, 0x08 /* Private */,
      28,    3,  148,    2, 0x08 /* Private */,
      31,    0,  155,    2, 0x08 /* Private */,
      32,    4,  156,    2, 0x08 /* Private */,
      33,    3,  165,    2, 0x08 /* Private */,
      34,    2,  172,    2, 0x08 /* Private */,
      35,    3,  177,    2, 0x08 /* Private */,
      35,    2,  184,    2, 0x28 /* Private | MethodCloned */,
      36,    2,  189,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 8, QMetaType::Int, QMetaType::QByteArray, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    9,   10,   11,    4,   12,   13,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Bool,    3,   15,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,   17,   18,   19,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 21,    3,   22,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 25,   17,   24,   26,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int,   17,   24,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong, QMetaType::Bool,   29,    3,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 8, QMetaType::Int, QMetaType::QByteArray,   29,    9,   10,   11,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, QMetaType::QString,   17,   18,   19,
    QMetaType::Void, QMetaType::LongLong, 0x80000000 | 21,   17,   22,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int, 0x80000000 | 25,    2,   24,   26,
    QMetaType::Void, QMetaType::LongLong, QMetaType::Int,    2,   24,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   37,   38,

       0        // eod
};

void FileHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileHandler *_t = static_cast<FileHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uploadSendFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4]))); break;
        case 1: _t->uploadGetFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const StorageFileType(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< const QByteArray(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qint32(*)>(_a[7]))); break;
        case 2: _t->uploadCancelFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->error((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->messagesSentMedia((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 5: _t->messagesSendEncryptedFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const EncryptedFile(*)>(_a[3]))); break;
        case 6: _t->messagesSendEncryptedFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 7: _t->onUploadSendFileSessionCreated(); break;
        case 8: _t->onUploadSaveFilePartResult((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: _t->onUploadGetFileSessionCreated(); break;
        case 10: _t->onUploadGetFileAnswer((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const StorageFileType(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4]))); break;
        case 11: _t->onUploadGetFileError((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->onMessagesSentMedia((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const UpdatesType(*)>(_a[2]))); break;
        case 13: _t->onMessagesSentEncryptedFile((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< const EncryptedFile(*)>(_a[3]))); break;
        case 14: _t->onMessagesSentEncryptedFile((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 15: _t->onUpdateMessageId((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StorageFileType >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EncryptedFile >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StorageFileType >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UpdatesType >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EncryptedFile >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileHandler::*_t)(qint64 , qint32 , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileHandler::uploadSendFileAnswer)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FileHandler::*_t)(qint64 , const StorageFileType & , qint32 , const QByteArray & , qint32 , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileHandler::uploadGetFileAnswer)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FileHandler::*_t)(qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileHandler::uploadCancelFileAnswer)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FileHandler::*_t)(qint64 , qint32 , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileHandler::error)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (FileHandler::*_t)(qint64 , const UpdatesType & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileHandler::messagesSentMedia)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (FileHandler::*_t)(qint64 , qint32 , const EncryptedFile & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileHandler::messagesSendEncryptedFileAnswer)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject FileHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileHandler.data,
      qt_meta_data_FileHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FileHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FileHandler.stringdata0))
        return static_cast<void*>(const_cast< FileHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int FileHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void FileHandler::uploadSendFileAnswer(qint64 _t1, qint32 _t2, qint32 _t3, qint32 _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileHandler::uploadGetFileAnswer(qint64 _t1, const StorageFileType & _t2, qint32 _t3, const QByteArray & _t4, qint32 _t5, qint32 _t6, qint32 _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileHandler::uploadCancelFileAnswer(qint64 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileHandler::error(qint64 _t1, qint32 _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileHandler::messagesSentMedia(qint64 _t1, const UpdatesType & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FileHandler::messagesSendEncryptedFileAnswer(qint64 _t1, qint32 _t2, const EncryptedFile & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
