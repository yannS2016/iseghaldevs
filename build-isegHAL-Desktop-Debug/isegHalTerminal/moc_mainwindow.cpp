/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../isegHAL/isegHalTerminal/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata0[516];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "on_login_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 17), // "on_logout_clicked"
QT_MOC_LITERAL(4, 47, 21), // "on_buttonSend_clicked"
QT_MOC_LITERAL(5, 69, 21), // "currentCommandChanged"
QT_MOC_LITERAL(6, 91, 7), // "newText"
QT_MOC_LITERAL(7, 99, 23), // "on_timeout_valueChanged"
QT_MOC_LITERAL(8, 123, 4), // "arg1"
QT_MOC_LITERAL(9, 128, 23), // "on_selectScript_clicked"
QT_MOC_LITERAL(10, 152, 20), // "on_runScript_clicked"
QT_MOC_LITERAL(11, 173, 18), // "sendNextScriptLine"
QT_MOC_LITERAL(12, 192, 21), // "on_canConnect_clicked"
QT_MOC_LITERAL(13, 214, 24), // "on_canDisconnect_clicked"
QT_MOC_LITERAL(14, 239, 28), // "on_scpiSerialConnect_clicked"
QT_MOC_LITERAL(15, 268, 31), // "on_scpiSerialDisconnect_clicked"
QT_MOC_LITERAL(16, 300, 27), // "on_shqSerialConnect_clicked"
QT_MOC_LITERAL(17, 328, 30), // "on_shqSerialDisconnect_clicked"
QT_MOC_LITERAL(18, 359, 30), // "on_scpiEthernetConnect_clicked"
QT_MOC_LITERAL(19, 390, 33), // "on_scpiEthernetDisconnect_cli..."
QT_MOC_LITERAL(20, 424, 11), // "appendToLog"
QT_MOC_LITERAL(21, 436, 4), // "text"
QT_MOC_LITERAL(22, 441, 5), // "color"
QT_MOC_LITERAL(23, 447, 23), // "currentCanPluginChanged"
QT_MOC_LITERAL(24, 471, 22), // "on_commandHelp_clicked"
QT_MOC_LITERAL(25, 494, 21) // "on_scriptHelp_clicked"

    },
    "MainWindow\0on_login_clicked\0\0"
    "on_logout_clicked\0on_buttonSend_clicked\0"
    "currentCommandChanged\0newText\0"
    "on_timeout_valueChanged\0arg1\0"
    "on_selectScript_clicked\0on_runScript_clicked\0"
    "sendNextScriptLine\0on_canConnect_clicked\0"
    "on_canDisconnect_clicked\0"
    "on_scpiSerialConnect_clicked\0"
    "on_scpiSerialDisconnect_clicked\0"
    "on_shqSerialConnect_clicked\0"
    "on_shqSerialDisconnect_clicked\0"
    "on_scpiEthernetConnect_clicked\0"
    "on_scpiEthernetDisconnect_clicked\0"
    "appendToLog\0text\0color\0currentCanPluginChanged\0"
    "on_commandHelp_clicked\0on_scriptHelp_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x08 /* Private */,
       3,    0,  120,    2, 0x08 /* Private */,
       4,    0,  121,    2, 0x08 /* Private */,
       5,    1,  122,    2, 0x08 /* Private */,
       7,    1,  125,    2, 0x08 /* Private */,
       9,    0,  128,    2, 0x08 /* Private */,
      10,    0,  129,    2, 0x08 /* Private */,
      11,    0,  130,    2, 0x08 /* Private */,
      12,    0,  131,    2, 0x08 /* Private */,
      13,    0,  132,    2, 0x08 /* Private */,
      14,    0,  133,    2, 0x08 /* Private */,
      15,    0,  134,    2, 0x08 /* Private */,
      16,    0,  135,    2, 0x08 /* Private */,
      17,    0,  136,    2, 0x08 /* Private */,
      18,    0,  137,    2, 0x08 /* Private */,
      19,    0,  138,    2, 0x08 /* Private */,
      20,    2,  139,    2, 0x08 /* Private */,
      20,    1,  144,    2, 0x28 /* Private | MethodCloned */,
      23,    0,  147,    2, 0x08 /* Private */,
      24,    0,  148,    2, 0x08 /* Private */,
      25,    0,  149,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,
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
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,   21,   22,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_login_clicked(); break;
        case 1: _t->on_logout_clicked(); break;
        case 2: _t->on_buttonSend_clicked(); break;
        case 3: _t->currentCommandChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_timeout_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_selectScript_clicked(); break;
        case 6: _t->on_runScript_clicked(); break;
        case 7: _t->sendNextScriptLine(); break;
        case 8: _t->on_canConnect_clicked(); break;
        case 9: _t->on_canDisconnect_clicked(); break;
        case 10: _t->on_scpiSerialConnect_clicked(); break;
        case 11: _t->on_scpiSerialDisconnect_clicked(); break;
        case 12: _t->on_shqSerialConnect_clicked(); break;
        case 13: _t->on_shqSerialDisconnect_clicked(); break;
        case 14: _t->on_scpiEthernetConnect_clicked(); break;
        case 15: _t->on_scpiEthernetDisconnect_clicked(); break;
        case 16: _t->appendToLog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 17: _t->appendToLog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->currentCanPluginChanged(); break;
        case 19: _t->on_commandHelp_clicked(); break;
        case 20: _t->on_scriptHelp_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
