/****************************************************************************
** Meta object code from reading C++ file 'leftmenu.h'
**
** Created: Tue Dec 4 10:35:59 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/leftmenu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'leftmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LeftMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   10,    9,    9, 0x05,
      35,    9,    9,    9, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_LeftMenu[] = {
    "LeftMenu\0\0file\0askMapLoad(QString)\0"
    "askUnloadMap()\0"
};

void LeftMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LeftMenu *_t = static_cast<LeftMenu *>(_o);
        switch (_id) {
        case 0: _t->askMapLoad((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->askUnloadMap(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LeftMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LeftMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LeftMenu,
      qt_meta_data_LeftMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LeftMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LeftMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LeftMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LeftMenu))
        return static_cast<void*>(const_cast< LeftMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int LeftMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void LeftMenu::askMapLoad(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LeftMenu::askUnloadMap()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
