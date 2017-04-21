/****************************************************************************
** Meta object code from reading C++ file 'budgieappqt.h'
**
** Created: Thu Apr 13 07:21:47 2017
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../budgieappqt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'budgieappqt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BudgieAPPQT[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      38,   12,   12,   12, 0x08,
      67,   12,   12,   12, 0x08,
     100,   12,   12,   12, 0x08,
     120,   12,   12,   12, 0x08,
     144,   12,   12,   12, 0x08,
     167,   12,   12,   12, 0x08,
     187,   12,   12,   12, 0x08,
     208,   12,   12,   12, 0x08,
     230,   12,   12,   12, 0x08,
     267,   12,   12,   12, 0x08,
     304,   12,   12,   12, 0x08,
     327,   12,   12,   12, 0x08,
     344,   12,   12,   12, 0x08,
     363,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BudgieAPPQT[] = {
    "BudgieAPPQT\0\0handleSubmitInfoButton()\0"
    "handleLoanCalculatorButton()\0"
    "handleTransportationCostButton()\0"
    "handleSaverButton()\0handleRentRadioButton()\0"
    "handleOwnRadioButton()\0handleDailyButton()\0"
    "handleWeeklyButton()\0handleMonthlyButton()\0"
    "handleTransportationCostBackButton()\0"
    "handleTransportationCostNextButton()\0"
    "handleCalenderButton()\0handleCalender()\0"
    "handleSaveButton()\0handleLaunchButton()\0"
};

const QMetaObject BudgieAPPQT::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BudgieAPPQT,
      qt_meta_data_BudgieAPPQT, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BudgieAPPQT::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BudgieAPPQT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BudgieAPPQT::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BudgieAPPQT))
        return static_cast<void*>(const_cast< BudgieAPPQT*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BudgieAPPQT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: handleSubmitInfoButton(); break;
        case 1: handleLoanCalculatorButton(); break;
        case 2: handleTransportationCostButton(); break;
        case 3: handleSaverButton(); break;
        case 4: handleRentRadioButton(); break;
        case 5: handleOwnRadioButton(); break;
        case 6: handleDailyButton(); break;
        case 7: handleWeeklyButton(); break;
        case 8: handleMonthlyButton(); break;
        case 9: handleTransportationCostBackButton(); break;
        case 10: handleTransportationCostNextButton(); break;
        case 11: handleCalenderButton(); break;
        case 12: handleCalender(); break;
        case 13: handleSaveButton(); break;
        case 14: handleLaunchButton(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
