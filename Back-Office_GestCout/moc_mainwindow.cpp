/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Jan 28 15:53:22 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      47,   11,   11,   11, 0x08,
      79,   11,   11,   11, 0x08,
     110,   11,   11,   11, 0x08,
     148,   11,   11,   11, 0x08,
     184,   11,   11,   11, 0x08,
     219,   11,   11,   11, 0x08,
     256,   11,   11,   11, 0x08,
     290,   11,   11,   11, 0x08,
     323,   11,   11,   11, 0x08,
     358,   11,   11,   11, 0x08,
     395,   11,   11,   11, 0x08,
     437,   11,   11,   11, 0x08,
     472,   11,   11,   11, 0x08,
     507,   11,   11,   11, 0x08,
     540,   11,   11,   11, 0x08,
     579,   11,   11,   11, 0x08,
     618,   11,   11,   11, 0x08,
     669,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButton_Ajout_Prod_clicked()\0"
    "on_tableView_Mod_Prod_clicked()\0"
    "on_pushButton_Switch_clicked()\0"
    "on_pushButton_Retour_Fourni_clicked()\0"
    "on_pushButton_Retour_Prod_clicked()\0"
    "on_pushButton_Mod_Fourni_clicked()\0"
    "on_pushButton_Ajout_Fourni_clicked()\0"
    "on_tableView_Mod_Fourni_clicked()\0"
    "on_pushButton_Mod_Prod_clicked()\0"
    "on_pushButton_Suppr_Prod_clicked()\0"
    "on_pushButton_Suppr_Fourni_clicked()\0"
    "on_pushButton_Fourni_page_suppr_clicked()\0"
    "on_tableView_Fourni_Supr_clicked()\0"
    "on_pushButton_Prod_suppr_clicked()\0"
    "on_tableView_Prod_Supr_clicked()\0"
    "on_pushButton_Retour_Suppr_P_clicked()\0"
    "on_pushButton_Retour_Suppr_F_clicked()\0"
    "on_comboBox_Fourni_Prod_Actu_currentIndexChanged()\0"
    "on_comboBox_Type_Prod_Actu_currentIndexChanged()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_Ajout_Prod_clicked(); break;
        case 1: _t->on_tableView_Mod_Prod_clicked(); break;
        case 2: _t->on_pushButton_Switch_clicked(); break;
        case 3: _t->on_pushButton_Retour_Fourni_clicked(); break;
        case 4: _t->on_pushButton_Retour_Prod_clicked(); break;
        case 5: _t->on_pushButton_Mod_Fourni_clicked(); break;
        case 6: _t->on_pushButton_Ajout_Fourni_clicked(); break;
        case 7: _t->on_tableView_Mod_Fourni_clicked(); break;
        case 8: _t->on_pushButton_Mod_Prod_clicked(); break;
        case 9: _t->on_pushButton_Suppr_Prod_clicked(); break;
        case 10: _t->on_pushButton_Suppr_Fourni_clicked(); break;
        case 11: _t->on_pushButton_Fourni_page_suppr_clicked(); break;
        case 12: _t->on_tableView_Fourni_Supr_clicked(); break;
        case 13: _t->on_pushButton_Prod_suppr_clicked(); break;
        case 14: _t->on_tableView_Prod_Supr_clicked(); break;
        case 15: _t->on_pushButton_Retour_Suppr_P_clicked(); break;
        case 16: _t->on_pushButton_Retour_Suppr_F_clicked(); break;
        case 17: _t->on_comboBox_Fourni_Prod_Actu_currentIndexChanged(); break;
        case 18: _t->on_comboBox_Type_Prod_Actu_currentIndexChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
