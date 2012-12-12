/****************************************************************************
** Meta object code from reading C++ file 'mission.h'
**
** Created: Wed Dec 12 12:52:10 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/ihm/widgets/mission.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mission.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Mission[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      26,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   44,    8,    8, 0x0a,
      88,    8,    8,    8, 0x08,
     116,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Mission[] = {
    "Mission\0\0askStopMission()\0askStartMission()\0"
    "act\0loadMovementActuator(MovementActuator*)\0"
    "on_stopPushButton_clicked()\0"
    "on_startPushButton_clicked()\0"
};

void Mission::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Mission *_t = static_cast<Mission *>(_o);
        switch (_id) {
        case 0: _t->askStopMission(); break;
        case 1: _t->askStartMission(); break;
        case 2: _t->loadMovementActuator((*reinterpret_cast< MovementActuator*(*)>(_a[1]))); break;
        case 3: _t->on_stopPushButton_clicked(); break;
        case 4: _t->on_startPushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Mission::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Mission::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Mission,
      qt_meta_data_Mission, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Mission::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Mission::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Mission::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Mission))
        return static_cast<void*>(const_cast< Mission*>(this));
    return QWidget::qt_metacast(_clname);
}

int Mission::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Mission::askStopMission()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Mission::askStartMission()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
