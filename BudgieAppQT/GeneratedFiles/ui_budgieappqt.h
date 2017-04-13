/********************************************************************************
** Form generated from reading UI file 'budgieappqt.ui'
**
** Created: Sun Apr 2 23:21:04 2017
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUDGIEAPPQT_H
#define UI_BUDGIEAPPQT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BudgieAppQTClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *monthlyIncome;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *monthlyLivingExpense;
    QLineEdit *monthlyBillExpense;
    QLineEdit *monthlyOtherExpense;
    QLabel *label_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BudgieAppQTClass)
    {
        if (BudgieAppQTClass->objectName().isEmpty())
            BudgieAppQTClass->setObjectName(QString::fromUtf8("BudgieAppQTClass"));
        BudgieAppQTClass->resize(600, 400);
        centralWidget = new QWidget(BudgieAppQTClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 10, 191, 51));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 140, 111, 20));
        monthlyIncome = new QLineEdit(centralWidget);
        monthlyIncome->setObjectName(QString::fromUtf8("monthlyIncome"));
        monthlyIncome->setGeometry(QRect(230, 140, 113, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 290, 75, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 170, 151, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 200, 141, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 230, 171, 20));
        monthlyLivingExpense = new QLineEdit(centralWidget);
        monthlyLivingExpense->setObjectName(QString::fromUtf8("monthlyLivingExpense"));
        monthlyLivingExpense->setGeometry(QRect(230, 170, 113, 20));
        monthlyBillExpense = new QLineEdit(centralWidget);
        monthlyBillExpense->setObjectName(QString::fromUtf8("monthlyBillExpense"));
        monthlyBillExpense->setGeometry(QRect(230, 200, 113, 20));
        monthlyOtherExpense = new QLineEdit(centralWidget);
        monthlyOtherExpense->setObjectName(QString::fromUtf8("monthlyOtherExpense"));
        monthlyOtherExpense->setGeometry(QRect(230, 230, 113, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 70, 171, 20));
        QFont font1;
        font1.setPointSize(12);
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);
        BudgieAppQTClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BudgieAppQTClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        BudgieAppQTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BudgieAppQTClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BudgieAppQTClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BudgieAppQTClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BudgieAppQTClass->setStatusBar(statusBar);
        QWidget::setTabOrder(monthlyIncome, monthlyLivingExpense);
        QWidget::setTabOrder(monthlyLivingExpense, monthlyBillExpense);
        QWidget::setTabOrder(monthlyBillExpense, monthlyOtherExpense);
        QWidget::setTabOrder(monthlyOtherExpense, pushButton);

        retranslateUi(BudgieAppQTClass);

        QMetaObject::connectSlotsByName(BudgieAppQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *BudgieAppQTClass)
    {
        BudgieAppQTClass->setWindowTitle(QApplication::translate("BudgieAppQTClass", "BudgieAppQT", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BudgieAppQTClass", "Budgie App", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BudgieAppQTClass", "Enter Monthly Income:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("BudgieAppQTClass", "PushButton", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BudgieAppQTClass", "Enter Monthly Living Expense:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("BudgieAppQTClass", "Enter Monthly Bills Expense:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("BudgieAppQTClass", "Enter Any Other Monthly Expense:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("BudgieAppQTClass", "Finance Made Symple", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BudgieAppQTClass: public Ui_BudgieAppQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGIEAPPQT_H
