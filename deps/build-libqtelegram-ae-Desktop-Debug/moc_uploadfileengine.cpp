/****************************************************************************
** Meta object code from reading C++ file 'uploadfileengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../libqtelegram-ae/file/uploadfileengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uploadfileengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UploadFileEngine_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UploadFileEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UploadFileEngine_t qt_meta_stringdata_UploadFileEngine = {
    {
QT_MOC_LITERAL(0, 0, 16), // "UploadFileEngine"
QT_MOC_LITERAL(1, 17, 12), // "fileNotFound"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11) // "fileNotOpen"

    },
    "UploadFileEngine\0fileNotFound\0\0"
    "fileNotOpen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UploadFileEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UploadFileEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UploadFileEngine *_t = static_cast<UploadFileEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileNotFound(); break;
        case 1: _t->fileNotOpen(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UploadFileEngine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UploadFileEngine::fileNotFound)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UploadFileEngine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UploadFileEngine::fileNotOpen)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject UploadFileEngine::staticMetaObject = {
    { &File::staticMetaObject, qt_meta_stringdata_UploadFileEngine.data,
      qt_meta_data_UploadFileEngine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UploadFileEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UploadFileEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UploadFileEngine.stringdata0))
        return static_cast<void*>(const_cast< UploadFileEngine*>(this));
    return File::qt_metacast(_clname);
}

int UploadFileEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = File::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UploadFileEngine::fileNotFound()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void UploadFileEngine::fileNotOpen()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
