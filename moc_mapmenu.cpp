/****************************************************************************
** Meta object code from reading C++ file 'mapmenu.h'
**
** Created: Thu Dec 6 11:15:01 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/ihm/widgets/mapmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MapMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,    9,    8,    8, 0x05,
      34,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,    8,    8,    8, 0x08,
      82,    8,    8,    8, 0x08,
     119,    8,    8,    8, 0x08,
     153,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MapMenu[] = {
    "MapMenu\0\0file\0askLoadMap(QString)\0"
    "askUnloadMap()\0on_browseMapPushButton_clicked()\0"
    "on_browseMissionPushButton_clicked()\0"
    "on_startPausePushButton_clicked()\0"
    "on_stopPushButton_clicked()\0"
};

void MapMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MapMenu *_t = static_cast<MapMenu *>(_o);
        switch (_id) {
        case 0: _t->askLoadMap((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->askUnloadMap(); break;
        case 2: _t->on_browseMapPushButton_clicked(); break;
        case 3: _t->on_browseMissionPushButton_clicked(); break;
        case 4: _t->on_startPausePushButton_clicked(); break;
        case 5: _t->on_stopPushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MapMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MapMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MapMenu,
      qt_meta_data_MapMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MapMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MapMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MapMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MapMenu))
        return static_cast<void*>(const_cast< MapMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int MapMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MapMenu::askLoadMap(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapMenu::askUnloadMap()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
