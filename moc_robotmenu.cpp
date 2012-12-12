/****************************************************************************
** Meta object code from reading C++ file 'robotmenu.h'
**
** Created: Wed Dec 12 12:42:27 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/ihm/widgets/robotmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robotmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RobotMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      42,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_RobotMenu[] = {
    "RobotMenu\0\0on_missionPushButton_clicked()\0"
    "on_informationPushButton_clicked()\0"
};

void RobotMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RobotMenu *_t = static_cast<RobotMenu *>(_o);
        switch (_id) {
        case 0: _t->on_missionPushButton_clicked(); break;
        case 1: _t->on_informationPushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData RobotMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RobotMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RobotMenu,
      qt_meta_data_RobotMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RobotMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RobotMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RobotMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RobotMenu))
        return static_cast<void*>(const_cast< RobotMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int RobotMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
