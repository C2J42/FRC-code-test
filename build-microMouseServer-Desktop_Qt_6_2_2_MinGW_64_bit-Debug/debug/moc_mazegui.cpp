/****************************************************************************
** Meta object code from reading C++ file 'mazegui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../microMouseServer/mazegui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mazegui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mazeGui_t {
    const uint offsetsAndSize[22];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_mazeGui_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_mazeGui_t qt_meta_stringdata_mazeGui = {
    {
QT_MOC_LITERAL(0, 7), // "mazeGui"
QT_MOC_LITERAL(8, 13), // "passRightWall"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 4), // "cell"
QT_MOC_LITERAL(28, 12), // "passLeftWall"
QT_MOC_LITERAL(41, 11), // "passTopWall"
QT_MOC_LITERAL(53, 14), // "passBottomWall"
QT_MOC_LITERAL(68, 13), // "takeRightWall"
QT_MOC_LITERAL(82, 12), // "takeLeftWall"
QT_MOC_LITERAL(95, 11), // "takeTopWall"
QT_MOC_LITERAL(107, 14) // "takeBottomWall"

    },
    "mazeGui\0passRightWall\0\0cell\0passLeftWall\0"
    "passTopWall\0passBottomWall\0takeRightWall\0"
    "takeLeftWall\0takeTopWall\0takeBottomWall"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mazeGui[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       4,    1,   65,    2, 0x06,    3 /* Public */,
       5,    1,   68,    2, 0x06,    5 /* Public */,
       6,    1,   71,    2, 0x06,    7 /* Public */,
       7,    1,   74,    2, 0x06,    9 /* Public */,
       8,    1,   77,    2, 0x06,   11 /* Public */,
       9,    1,   80,    2, 0x06,   13 /* Public */,
      10,    1,   83,    2, 0x06,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::QPoint,    3,

       0        // eod
};

void mazeGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mazeGui *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->passRightWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->passLeftWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->passTopWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->passBottomWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->takeRightWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: _t->takeLeftWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 6: _t->takeTopWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 7: _t->takeBottomWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mazeGui::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mazeGui::passRightWall)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (mazeGui::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mazeGui::passLeftWall)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (mazeGui::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mazeGui::passTopWall)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (mazeGui::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mazeGui::passBottomWall)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (mazeGui::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mazeGui::takeRightWall)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (mazeGui::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mazeGui::takeLeftWall)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (mazeGui::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mazeGui::takeTopWall)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (mazeGui::*)(QPoint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&mazeGui::takeBottomWall)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject mazeGui::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_mazeGui.offsetsAndSize,
    qt_meta_data_mazeGui,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_mazeGui_t
, QtPrivate::TypeAndForceComplete<mazeGui, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>



>,
    nullptr
} };


const QMetaObject *mazeGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mazeGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mazeGui.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int mazeGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void mazeGui::passRightWall(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mazeGui::passLeftWall(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mazeGui::passTopWall(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void mazeGui::passBottomWall(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void mazeGui::takeRightWall(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mazeGui::takeLeftWall(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void mazeGui::takeTopWall(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void mazeGui::takeBottomWall(QPoint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
