/****************************************************************************
** Meta object code from reading C++ file 'micromouseserver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../microMouseServer/micromouseserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'micromouseserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_microMouseServer_t {
    const uint offsetsAndSize[54];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_microMouseServer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_microMouseServer_t qt_meta_stringdata_microMouseServer = {
    {
QT_MOC_LITERAL(0, 16), // "microMouseServer"
QT_MOC_LITERAL(17, 26), // "on_tabWidget_tabBarClicked"
QT_MOC_LITERAL(44, 0), // ""
QT_MOC_LITERAL(45, 5), // "index"
QT_MOC_LITERAL(51, 8), // "loadMaze"
QT_MOC_LITERAL(60, 8), // "saveMaze"
QT_MOC_LITERAL(69, 11), // "addLeftWall"
QT_MOC_LITERAL(81, 4), // "cell"
QT_MOC_LITERAL(86, 12), // "addRightWall"
QT_MOC_LITERAL(99, 10), // "addTopWall"
QT_MOC_LITERAL(110, 13), // "addBottomWall"
QT_MOC_LITERAL(124, 15), // "removeRightWall"
QT_MOC_LITERAL(140, 14), // "removeLeftWall"
QT_MOC_LITERAL(155, 13), // "removeTopWall"
QT_MOC_LITERAL(169, 16), // "removeBottomWall"
QT_MOC_LITERAL(186, 7), // "netComs"
QT_MOC_LITERAL(194, 13), // "connect2mouse"
QT_MOC_LITERAL(208, 7), // "startAI"
QT_MOC_LITERAL(216, 9), // "studentAI"
QT_MOC_LITERAL(226, 11), // "moveHandler"
QT_MOC_LITERAL(238, 9), // "backtrack"
QT_MOC_LITERAL(248, 8), // "twoTurns"
QT_MOC_LITERAL(257, 10), // "threeTurns"
QT_MOC_LITERAL(268, 7), // "dirTurn"
QT_MOC_LITERAL(276, 3), // "dir"
QT_MOC_LITERAL(280, 9), // "testPaths"
QT_MOC_LITERAL(290, 17) // "intersectionCheck"

    },
    "microMouseServer\0on_tabWidget_tabBarClicked\0"
    "\0index\0loadMaze\0saveMaze\0addLeftWall\0"
    "cell\0addRightWall\0addTopWall\0addBottomWall\0"
    "removeRightWall\0removeLeftWall\0"
    "removeTopWall\0removeBottomWall\0netComs\0"
    "connect2mouse\0startAI\0studentAI\0"
    "moveHandler\0backtrack\0twoTurns\0"
    "threeTurns\0dirTurn\0dir\0testPaths\0"
    "intersectionCheck"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_microMouseServer[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  146,    2, 0x08,    1 /* Private */,
       4,    0,  149,    2, 0x08,    3 /* Private */,
       5,    0,  150,    2, 0x08,    4 /* Private */,
       6,    1,  151,    2, 0x08,    5 /* Private */,
       8,    1,  154,    2, 0x08,    7 /* Private */,
       9,    1,  157,    2, 0x08,    9 /* Private */,
      10,    1,  160,    2, 0x08,   11 /* Private */,
      11,    1,  163,    2, 0x08,   13 /* Private */,
      12,    1,  166,    2, 0x08,   15 /* Private */,
      13,    1,  169,    2, 0x08,   17 /* Private */,
      14,    1,  172,    2, 0x08,   19 /* Private */,
      15,    0,  175,    2, 0x08,   21 /* Private */,
      16,    0,  176,    2, 0x08,   22 /* Private */,
      17,    0,  177,    2, 0x08,   23 /* Private */,
      18,    0,  178,    2, 0x08,   24 /* Private */,
      19,    0,  179,    2, 0x08,   25 /* Private */,
      20,    0,  180,    2, 0x08,   26 /* Private */,
      21,    0,  181,    2, 0x08,   27 /* Private */,
      22,    0,  182,    2, 0x08,   28 /* Private */,
      23,    1,  183,    2, 0x08,   29 /* Private */,
      25,    0,  186,    2, 0x08,   31 /* Private */,
      26,    0,  187,    2, 0x08,   32 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Char,   24,
    QMetaType::Void,
    QMetaType::Int,

       0        // eod
};

void microMouseServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<microMouseServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_tabWidget_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->loadMaze(); break;
        case 2: _t->saveMaze(); break;
        case 3: _t->addLeftWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->addRightWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: _t->addTopWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 6: _t->addBottomWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 7: _t->removeRightWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 8: _t->removeLeftWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 9: _t->removeTopWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 10: _t->removeBottomWall((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 11: _t->netComs(); break;
        case 12: _t->connect2mouse(); break;
        case 13: _t->startAI(); break;
        case 14: _t->studentAI(); break;
        case 15: _t->moveHandler(); break;
        case 16: _t->backtrack(); break;
        case 17: _t->twoTurns(); break;
        case 18: _t->threeTurns(); break;
        case 19: _t->dirTurn((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 21: { int _r = _t->intersectionCheck();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject microMouseServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_microMouseServer.offsetsAndSize,
    qt_meta_data_microMouseServer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_microMouseServer_t
, QtPrivate::TypeAndForceComplete<microMouseServer, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QPoint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<char, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *microMouseServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *microMouseServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_microMouseServer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int microMouseServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
