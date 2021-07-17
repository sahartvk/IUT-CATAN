/****************************************************************************
** Meta object code from reading C++ file 'robber.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../catan/robber.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Robber_t {
    const uint offsetsAndSize[14];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Robber_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Robber_t qt_meta_stringdata_Robber = {
    {
QT_MOC_LITERAL(0, 6), // "Robber"
QT_MOC_LITERAL(7, 7), // "onSheap"
QT_MOC_LITERAL(15, 0), // ""
QT_MOC_LITERAL(16, 7), // "onWheat"
QT_MOC_LITERAL(24, 6), // "onWood"
QT_MOC_LITERAL(31, 7), // "onBrick"
QT_MOC_LITERAL(39, 7) // "onStone"

    },
    "Robber\0onSheap\0\0onWheat\0onWood\0onBrick\0"
    "onStone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Robber[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x0a,    0 /* Public */,
       3,    0,   45,    2, 0x0a,    1 /* Public */,
       4,    0,   46,    2, 0x0a,    2 /* Public */,
       5,    0,   47,    2, 0x0a,    3 /* Public */,
       6,    0,   48,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Robber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Robber *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSheap(); break;
        case 1: _t->onWheat(); break;
        case 2: _t->onWood(); break;
        case 3: _t->onBrick(); break;
        case 4: _t->onStone(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject Robber::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Robber.offsetsAndSize,
    qt_meta_data_Robber,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Robber_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Robber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Robber::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Robber.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Robber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
