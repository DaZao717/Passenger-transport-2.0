/****************************************************************************
** Meta object code from reading C++ file 'detailedinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../detailedinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'detailedinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_detailedinfo_t {
    QByteArrayData data[13];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_detailedinfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_detailedinfo_t qt_meta_stringdata_detailedinfo = {
    {
QT_MOC_LITERAL(0, 0, 12), // "detailedinfo"
QT_MOC_LITERAL(1, 13, 3), // "end"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 20), // "on_buyButton_clicked"
QT_MOC_LITERAL(4, 39, 15), // "receive_from_sp"
QT_MOC_LITERAL(5, 55, 6), // "a_name"
QT_MOC_LITERAL(6, 62, 4), // "a_ID"
QT_MOC_LITERAL(7, 67, 15), // "receive_from_mp"
QT_MOC_LITERAL(8, 83, 8), // "a_zuowei"
QT_MOC_LITERAL(9, 92, 20), // "on_tuiButton_clicked"
QT_MOC_LITERAL(10, 113, 19), // "on_okButton_clicked"
QT_MOC_LITERAL(11, 133, 22), // "on_printButton_clicked"
QT_MOC_LITERAL(12, 156, 21) // "on_pushButton_clicked"

    },
    "detailedinfo\0end\0\0on_buyButton_clicked\0"
    "receive_from_sp\0a_name\0a_ID\0receive_from_mp\0"
    "a_zuowei\0on_tuiButton_clicked\0"
    "on_okButton_clicked\0on_printButton_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_detailedinfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    2,   56,    2, 0x08 /* Private */,
       7,    3,   61,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    5,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void detailedinfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<detailedinfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->end(); break;
        case 1: _t->on_buyButton_clicked(); break;
        case 2: _t->receive_from_sp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->receive_from_mp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->on_tuiButton_clicked(); break;
        case 5: _t->on_okButton_clicked(); break;
        case 6: _t->on_printButton_clicked(); break;
        case 7: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (detailedinfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&detailedinfo::end)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject detailedinfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_detailedinfo.data,
    qt_meta_data_detailedinfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *detailedinfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *detailedinfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_detailedinfo.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int detailedinfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void detailedinfo::end()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
