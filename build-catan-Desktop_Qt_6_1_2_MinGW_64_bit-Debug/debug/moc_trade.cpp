/****************************************************************************
** Meta object code from reading C++ file 'trade.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../catan/trade.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trade.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_trade_t {
    const uint offsetsAndSize[28];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_trade_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_trade_t qt_meta_stringdata_trade = {
    {
QT_MOC_LITERAL(0, 5), // "trade"
QT_MOC_LITERAL(6, 7), // "onTrade"
QT_MOC_LITERAL(14, 0), // ""
QT_MOC_LITERAL(15, 12), // "onYour_sheap"
QT_MOC_LITERAL(28, 12), // "onYour_brick"
QT_MOC_LITERAL(41, 12), // "onYour_wheat"
QT_MOC_LITERAL(54, 12), // "onYour_stone"
QT_MOC_LITERAL(67, 11), // "onYour_wood"
QT_MOC_LITERAL(79, 13), // "onTheir_sheap"
QT_MOC_LITERAL(93, 13), // "onTheir_brick"
QT_MOC_LITERAL(107, 13), // "onTheir_wheat"
QT_MOC_LITERAL(121, 13), // "onTheir_stone"
QT_MOC_LITERAL(135, 12), // "onTheir_wood"
QT_MOC_LITERAL(148, 4) // "onOk"

    },
    "trade\0onTrade\0\0onYour_sheap\0onYour_brick\0"
    "onYour_wheat\0onYour_stone\0onYour_wood\0"
    "onTheir_sheap\0onTheir_brick\0onTheir_wheat\0"
    "onTheir_stone\0onTheir_wood\0onOk"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_trade[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x0a,    0 /* Public */,
       3,    0,   87,    2, 0x0a,    1 /* Public */,
       4,    0,   88,    2, 0x0a,    2 /* Public */,
       5,    0,   89,    2, 0x0a,    3 /* Public */,
       6,    0,   90,    2, 0x0a,    4 /* Public */,
       7,    0,   91,    2, 0x0a,    5 /* Public */,
       8,    0,   92,    2, 0x0a,    6 /* Public */,
       9,    0,   93,    2, 0x0a,    7 /* Public */,
      10,    0,   94,    2, 0x0a,    8 /* Public */,
      11,    0,   95,    2, 0x0a,    9 /* Public */,
      12,    0,   96,    2, 0x0a,   10 /* Public */,
      13,    0,   97,    2, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void trade::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<trade *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onTrade(); break;
        case 1: _t->onYour_sheap(); break;
        case 2: _t->onYour_brick(); break;
        case 3: _t->onYour_wheat(); break;
        case 4: _t->onYour_stone(); break;
        case 5: _t->onYour_wood(); break;
        case 6: _t->onTheir_sheap(); break;
        case 7: _t->onTheir_brick(); break;
        case 8: _t->onTheir_wheat(); break;
        case 9: _t->onTheir_stone(); break;
        case 10: _t->onTheir_wood(); break;
        case 11: _t->onOk(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject trade::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_trade.offsetsAndSize,
    qt_meta_data_trade,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_trade_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *trade::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *trade::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_trade.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int trade::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
