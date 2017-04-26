/********************************************************************************
** Form generated from reading UI file 'budgieappqt.ui'
**
** Created: Wed Apr 26 02:13:48 2017
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
#include <QtGui/QCalendarWidget>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BudgieAPPQTClass
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QLabel *emailLabel;
    QLineEdit *emailValue;
    QPushButton *launchButton;
    QComboBox *emailComboBox;
    QLabel *selectEmailLabel;
    QPushButton *deleteButton;
    QPushButton *viewButton;
    QWidget *inputPage;
    QLabel *incomeLabel;
    QLabel *livingExpenseLabel;
    QLabel *billsExpenseLabel;
    QLabel *otherExpenseLabel;
    QLineEdit *incomeValue;
    QLineEdit *livingExpenseValue;
    QLineEdit *billsExpenseValue;
    QLineEdit *otherExpenseValue;
    QPushButton *submitInfoButton;
    QWidget *displayPage;
    QLabel *totalIncomeLabel;
    QLabel *monthlyExpenseLabel;
    QLabel *yearlyExpenseLabel;
    QLabel *totalIncomeValue;
    QLabel *yearlyExpenseValue;
    QLabel *monthlyExpenseValue;
    QPushButton *loanCalculatorButton;
    QPushButton *transportationCostButton;
    QPushButton *saverButton;
    QWidget *transportationCostPage;
    QLabel *costPerGallonLabel;
    QLabel *distanceTravelledLabel;
    QLineEdit *distanceTravelledValue;
    QLineEdit *monthlyRentalValue;
    QLabel *monthlyRentalLabel;
    QLineEdit *milePerGallonValue;
    QLabel *milePerGallonLabel;
    QLineEdit *costPerGallonValue;
    QLabel *carTypeLabel;
    QRadioButton *carTypeRent;
    QRadioButton *carTypeOwn;
    QLineEdit *traveledCostValue;
    QLabel *traveledCostLabel;
    QPushButton *dailyButton;
    QPushButton *weeklyButton;
    QPushButton *monthlyButton;
    QPushButton *transportationCostBackButton;
    QWidget *saverPage;
    QLabel *amountNeededLabel;
    QLabel *dueDateLabel;
    QLabel *savingLabel;
    QLineEdit *amountNeededValue;
    QLineEdit *savingValue;
    QDateEdit *dueDateValue;
    QPushButton *calenderButton;
    QCalendarWidget *calender;
    QPushButton *saveButton;
    QPushButton *saverBackButton;
    QWidget *loanCalcPage;
    QPushButton *LoanCalculatorBackButton;
    QRadioButton *loanTypeCar;
    QPushButton *calculateLoanButton;
    QLabel *loanTypeLabel;
    QLabel *monthlyLoanAmountLabel;
    QLineEdit *monthlyLoanAmountValue;
    QRadioButton *loanTypeHouse;
    QLabel *interestRateLabel;
    QLabel *loanDurationLabel;
    QSpinBox *loanDurationValue;
    QDoubleSpinBox *interestRateValue;
    QDoubleSpinBox *loanAmountValue;
    QLabel *loanAmountLabel;
    QLabel *heading;
    QLabel *subHeading;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BudgieAPPQTClass)
    {
        if (BudgieAPPQTClass->objectName().isEmpty())
            BudgieAPPQTClass->setObjectName(QString::fromUtf8("BudgieAPPQTClass"));
        BudgieAPPQTClass->resize(600, 500);
        BudgieAPPQTClass->setMinimumSize(QSize(600, 500));
        BudgieAPPQTClass->setMaximumSize(QSize(600, 500));
        centralWidget = new QWidget(BudgieAPPQTClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 100, 600, 360));
        homePage = new QWidget();
        homePage->setObjectName(QString::fromUtf8("homePage"));
        emailLabel = new QLabel(homePage);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));
        emailLabel->setGeometry(QRect(60, 170, 150, 20));
        emailLabel->setLayoutDirection(Qt::LeftToRight);
        emailLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        emailValue = new QLineEdit(homePage);
        emailValue->setObjectName(QString::fromUtf8("emailValue"));
        emailValue->setEnabled(true);
        emailValue->setGeometry(QRect(220, 170, 200, 20));
        launchButton = new QPushButton(homePage);
        launchButton->setObjectName(QString::fromUtf8("launchButton"));
        launchButton->setEnabled(true);
        launchButton->setGeometry(QRect(275, 320, 50, 30));
        emailComboBox = new QComboBox(homePage);
        emailComboBox->setObjectName(QString::fromUtf8("emailComboBox"));
        emailComboBox->setGeometry(QRect(220, 70, 200, 20));
        selectEmailLabel = new QLabel(homePage);
        selectEmailLabel->setObjectName(QString::fromUtf8("selectEmailLabel"));
        selectEmailLabel->setGeometry(QRect(60, 70, 150, 20));
        selectEmailLabel->setLayoutDirection(Qt::LeftToRight);
        selectEmailLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        deleteButton = new QPushButton(homePage);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setEnabled(false);
        deleteButton->setGeometry(QRect(370, 110, 50, 30));
        viewButton = new QPushButton(homePage);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));
        viewButton->setEnabled(false);
        viewButton->setGeometry(QRect(220, 110, 50, 30));
        stackedWidget->addWidget(homePage);
        inputPage = new QWidget();
        inputPage->setObjectName(QString::fromUtf8("inputPage"));
        incomeLabel = new QLabel(inputPage);
        incomeLabel->setObjectName(QString::fromUtf8("incomeLabel"));
        incomeLabel->setGeometry(QRect(40, 40, 180, 20));
        incomeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        livingExpenseLabel = new QLabel(inputPage);
        livingExpenseLabel->setObjectName(QString::fromUtf8("livingExpenseLabel"));
        livingExpenseLabel->setGeometry(QRect(40, 80, 180, 20));
        livingExpenseLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        billsExpenseLabel = new QLabel(inputPage);
        billsExpenseLabel->setObjectName(QString::fromUtf8("billsExpenseLabel"));
        billsExpenseLabel->setGeometry(QRect(40, 120, 180, 20));
        billsExpenseLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        otherExpenseLabel = new QLabel(inputPage);
        otherExpenseLabel->setObjectName(QString::fromUtf8("otherExpenseLabel"));
        otherExpenseLabel->setGeometry(QRect(40, 160, 180, 20));
        otherExpenseLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        incomeValue = new QLineEdit(inputPage);
        incomeValue->setObjectName(QString::fromUtf8("incomeValue"));
        incomeValue->setGeometry(QRect(230, 40, 120, 20));
        livingExpenseValue = new QLineEdit(inputPage);
        livingExpenseValue->setObjectName(QString::fromUtf8("livingExpenseValue"));
        livingExpenseValue->setGeometry(QRect(230, 80, 120, 20));
        billsExpenseValue = new QLineEdit(inputPage);
        billsExpenseValue->setObjectName(QString::fromUtf8("billsExpenseValue"));
        billsExpenseValue->setGeometry(QRect(230, 120, 120, 20));
        otherExpenseValue = new QLineEdit(inputPage);
        otherExpenseValue->setObjectName(QString::fromUtf8("otherExpenseValue"));
        otherExpenseValue->setGeometry(QRect(230, 160, 120, 20));
        submitInfoButton = new QPushButton(inputPage);
        submitInfoButton->setObjectName(QString::fromUtf8("submitInfoButton"));
        submitInfoButton->setGeometry(QRect(225, 320, 150, 30));
        submitInfoButton->setLayoutDirection(Qt::LeftToRight);
        submitInfoButton->setAutoFillBackground(false);
        stackedWidget->addWidget(inputPage);
        displayPage = new QWidget();
        displayPage->setObjectName(QString::fromUtf8("displayPage"));
        totalIncomeLabel = new QLabel(displayPage);
        totalIncomeLabel->setObjectName(QString::fromUtf8("totalIncomeLabel"));
        totalIncomeLabel->setGeometry(QRect(40, 40, 180, 20));
        totalIncomeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        monthlyExpenseLabel = new QLabel(displayPage);
        monthlyExpenseLabel->setObjectName(QString::fromUtf8("monthlyExpenseLabel"));
        monthlyExpenseLabel->setGeometry(QRect(40, 80, 180, 20));
        monthlyExpenseLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        yearlyExpenseLabel = new QLabel(displayPage);
        yearlyExpenseLabel->setObjectName(QString::fromUtf8("yearlyExpenseLabel"));
        yearlyExpenseLabel->setGeometry(QRect(40, 120, 180, 20));
        yearlyExpenseLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        totalIncomeValue = new QLabel(displayPage);
        totalIncomeValue->setObjectName(QString::fromUtf8("totalIncomeValue"));
        totalIncomeValue->setGeometry(QRect(230, 40, 100, 20));
        yearlyExpenseValue = new QLabel(displayPage);
        yearlyExpenseValue->setObjectName(QString::fromUtf8("yearlyExpenseValue"));
        yearlyExpenseValue->setGeometry(QRect(230, 120, 100, 20));
        monthlyExpenseValue = new QLabel(displayPage);
        monthlyExpenseValue->setObjectName(QString::fromUtf8("monthlyExpenseValue"));
        monthlyExpenseValue->setGeometry(QRect(230, 80, 100, 20));
        loanCalculatorButton = new QPushButton(displayPage);
        loanCalculatorButton->setObjectName(QString::fromUtf8("loanCalculatorButton"));
        loanCalculatorButton->setGeometry(QRect(40, 320, 100, 30));
        transportationCostButton = new QPushButton(displayPage);
        transportationCostButton->setObjectName(QString::fromUtf8("transportationCostButton"));
        transportationCostButton->setGeometry(QRect(225, 320, 150, 30));
        saverButton = new QPushButton(displayPage);
        saverButton->setObjectName(QString::fromUtf8("saverButton"));
        saverButton->setGeometry(QRect(460, 320, 100, 30));
        stackedWidget->addWidget(displayPage);
        transportationCostPage = new QWidget();
        transportationCostPage->setObjectName(QString::fromUtf8("transportationCostPage"));
        costPerGallonLabel = new QLabel(transportationCostPage);
        costPerGallonLabel->setObjectName(QString::fromUtf8("costPerGallonLabel"));
        costPerGallonLabel->setGeometry(QRect(80, 180, 180, 20));
        costPerGallonLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        distanceTravelledLabel = new QLabel(transportationCostPage);
        distanceTravelledLabel->setObjectName(QString::fromUtf8("distanceTravelledLabel"));
        distanceTravelledLabel->setGeometry(QRect(80, 220, 180, 20));
        distanceTravelledLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        distanceTravelledValue = new QLineEdit(transportationCostPage);
        distanceTravelledValue->setObjectName(QString::fromUtf8("distanceTravelledValue"));
        distanceTravelledValue->setGeometry(QRect(270, 220, 120, 20));
        monthlyRentalValue = new QLineEdit(transportationCostPage);
        monthlyRentalValue->setObjectName(QString::fromUtf8("monthlyRentalValue"));
        monthlyRentalValue->setGeometry(QRect(270, 100, 120, 20));
        monthlyRentalLabel = new QLabel(transportationCostPage);
        monthlyRentalLabel->setObjectName(QString::fromUtf8("monthlyRentalLabel"));
        monthlyRentalLabel->setGeometry(QRect(80, 100, 180, 20));
        monthlyRentalLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        milePerGallonValue = new QLineEdit(transportationCostPage);
        milePerGallonValue->setObjectName(QString::fromUtf8("milePerGallonValue"));
        milePerGallonValue->setGeometry(QRect(270, 140, 120, 20));
        milePerGallonLabel = new QLabel(transportationCostPage);
        milePerGallonLabel->setObjectName(QString::fromUtf8("milePerGallonLabel"));
        milePerGallonLabel->setGeometry(QRect(80, 140, 180, 20));
        milePerGallonLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        costPerGallonValue = new QLineEdit(transportationCostPage);
        costPerGallonValue->setObjectName(QString::fromUtf8("costPerGallonValue"));
        costPerGallonValue->setGeometry(QRect(270, 180, 120, 20));
        carTypeLabel = new QLabel(transportationCostPage);
        carTypeLabel->setObjectName(QString::fromUtf8("carTypeLabel"));
        carTypeLabel->setGeometry(QRect(80, 60, 180, 20));
        carTypeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        carTypeRent = new QRadioButton(transportationCostPage);
        carTypeRent->setObjectName(QString::fromUtf8("carTypeRent"));
        carTypeRent->setGeometry(QRect(270, 60, 50, 20));
        carTypeOwn = new QRadioButton(transportationCostPage);
        carTypeOwn->setObjectName(QString::fromUtf8("carTypeOwn"));
        carTypeOwn->setGeometry(QRect(330, 60, 50, 20));
        traveledCostValue = new QLineEdit(transportationCostPage);
        traveledCostValue->setObjectName(QString::fromUtf8("traveledCostValue"));
        traveledCostValue->setEnabled(false);
        traveledCostValue->setGeometry(QRect(270, 260, 120, 20));
        traveledCostLabel = new QLabel(transportationCostPage);
        traveledCostLabel->setObjectName(QString::fromUtf8("traveledCostLabel"));
        traveledCostLabel->setGeometry(QRect(80, 260, 180, 20));
        traveledCostLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dailyButton = new QPushButton(transportationCostPage);
        dailyButton->setObjectName(QString::fromUtf8("dailyButton"));
        dailyButton->setGeometry(QRect(140, 320, 50, 30));
        weeklyButton = new QPushButton(transportationCostPage);
        weeklyButton->setObjectName(QString::fromUtf8("weeklyButton"));
        weeklyButton->setGeometry(QRect(275, 320, 50, 30));
        monthlyButton = new QPushButton(transportationCostPage);
        monthlyButton->setObjectName(QString::fromUtf8("monthlyButton"));
        monthlyButton->setGeometry(QRect(400, 320, 50, 30));
        transportationCostBackButton = new QPushButton(transportationCostPage);
        transportationCostBackButton->setObjectName(QString::fromUtf8("transportationCostBackButton"));
        transportationCostBackButton->setGeometry(QRect(10, 10, 50, 20));
        stackedWidget->addWidget(transportationCostPage);
        saverPage = new QWidget();
        saverPage->setObjectName(QString::fromUtf8("saverPage"));
        amountNeededLabel = new QLabel(saverPage);
        amountNeededLabel->setObjectName(QString::fromUtf8("amountNeededLabel"));
        amountNeededLabel->setGeometry(QRect(100, 80, 180, 20));
        amountNeededLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dueDateLabel = new QLabel(saverPage);
        dueDateLabel->setObjectName(QString::fromUtf8("dueDateLabel"));
        dueDateLabel->setGeometry(QRect(100, 120, 180, 20));
        dueDateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        savingLabel = new QLabel(saverPage);
        savingLabel->setObjectName(QString::fromUtf8("savingLabel"));
        savingLabel->setGeometry(QRect(100, 160, 180, 20));
        savingLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        savingLabel->setIndent(-1);
        amountNeededValue = new QLineEdit(saverPage);
        amountNeededValue->setObjectName(QString::fromUtf8("amountNeededValue"));
        amountNeededValue->setGeometry(QRect(300, 80, 120, 20));
        savingValue = new QLineEdit(saverPage);
        savingValue->setObjectName(QString::fromUtf8("savingValue"));
        savingValue->setEnabled(false);
        savingValue->setGeometry(QRect(300, 160, 120, 20));
        dueDateValue = new QDateEdit(saverPage);
        dueDateValue->setObjectName(QString::fromUtf8("dueDateValue"));
        dueDateValue->setEnabled(false);
        dueDateValue->setGeometry(QRect(300, 120, 100, 20));
        dueDateValue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dueDateValue->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        calenderButton = new QPushButton(saverPage);
        calenderButton->setObjectName(QString::fromUtf8("calenderButton"));
        calenderButton->setGeometry(QRect(400, 120, 20, 20));
        calender = new QCalendarWidget(saverPage);
        calender->setObjectName(QString::fromUtf8("calender"));
        calender->setEnabled(true);
        calender->setGeometry(QRect(170, 140, 250, 155));
        calender->setGridVisible(false);
        calender->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        calender->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calender->setNavigationBarVisible(true);
        calender->setDateEditEnabled(true);
        saveButton = new QPushButton(saverPage);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(275, 320, 50, 30));
        saverBackButton = new QPushButton(saverPage);
        saverBackButton->setObjectName(QString::fromUtf8("saverBackButton"));
        saverBackButton->setGeometry(QRect(10, 10, 50, 20));
        stackedWidget->addWidget(saverPage);
        loanCalcPage = new QWidget();
        loanCalcPage->setObjectName(QString::fromUtf8("loanCalcPage"));
        LoanCalculatorBackButton = new QPushButton(loanCalcPage);
        LoanCalculatorBackButton->setObjectName(QString::fromUtf8("LoanCalculatorBackButton"));
        LoanCalculatorBackButton->setGeometry(QRect(10, 10, 50, 20));
        loanTypeCar = new QRadioButton(loanCalcPage);
        loanTypeCar->setObjectName(QString::fromUtf8("loanTypeCar"));
        loanTypeCar->setGeometry(QRect(330, 60, 50, 20));
        calculateLoanButton = new QPushButton(loanCalcPage);
        calculateLoanButton->setObjectName(QString::fromUtf8("calculateLoanButton"));
        calculateLoanButton->setGeometry(QRect(250, 320, 100, 30));
        loanTypeLabel = new QLabel(loanCalcPage);
        loanTypeLabel->setObjectName(QString::fromUtf8("loanTypeLabel"));
        loanTypeLabel->setGeometry(QRect(80, 60, 180, 20));
        loanTypeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        monthlyLoanAmountLabel = new QLabel(loanCalcPage);
        monthlyLoanAmountLabel->setObjectName(QString::fromUtf8("monthlyLoanAmountLabel"));
        monthlyLoanAmountLabel->setGeometry(QRect(80, 260, 180, 20));
        monthlyLoanAmountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        monthlyLoanAmountValue = new QLineEdit(loanCalcPage);
        monthlyLoanAmountValue->setObjectName(QString::fromUtf8("monthlyLoanAmountValue"));
        monthlyLoanAmountValue->setEnabled(false);
        monthlyLoanAmountValue->setGeometry(QRect(270, 260, 120, 20));
        loanTypeHouse = new QRadioButton(loanCalcPage);
        loanTypeHouse->setObjectName(QString::fromUtf8("loanTypeHouse"));
        loanTypeHouse->setGeometry(QRect(270, 60, 50, 20));
        interestRateLabel = new QLabel(loanCalcPage);
        interestRateLabel->setObjectName(QString::fromUtf8("interestRateLabel"));
        interestRateLabel->setGeometry(QRect(80, 180, 180, 20));
        interestRateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        loanDurationLabel = new QLabel(loanCalcPage);
        loanDurationLabel->setObjectName(QString::fromUtf8("loanDurationLabel"));
        loanDurationLabel->setGeometry(QRect(80, 140, 180, 20));
        loanDurationLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        loanDurationValue = new QSpinBox(loanCalcPage);
        loanDurationValue->setObjectName(QString::fromUtf8("loanDurationValue"));
        loanDurationValue->setGeometry(QRect(270, 140, 120, 20));
        loanDurationValue->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        loanDurationValue->setMinimum(15);
        loanDurationValue->setMaximum(30);
        loanDurationValue->setSingleStep(15);
        loanDurationValue->setValue(15);
        interestRateValue = new QDoubleSpinBox(loanCalcPage);
        interestRateValue->setObjectName(QString::fromUtf8("interestRateValue"));
        interestRateValue->setGeometry(QRect(270, 180, 120, 20));
        interestRateValue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        interestRateValue->setSingleStep(0.01);
        loanAmountValue = new QDoubleSpinBox(loanCalcPage);
        loanAmountValue->setObjectName(QString::fromUtf8("loanAmountValue"));
        loanAmountValue->setGeometry(QRect(270, 100, 120, 20));
        loanAmountValue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        loanAmountValue->setMaximum(1e+07);
        loanAmountValue->setSingleStep(0.01);
        loanAmountLabel = new QLabel(loanCalcPage);
        loanAmountLabel->setObjectName(QString::fromUtf8("loanAmountLabel"));
        loanAmountLabel->setGeometry(QRect(80, 100, 180, 20));
        loanAmountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stackedWidget->addWidget(loanCalcPage);
        heading = new QLabel(centralWidget);
        heading->setObjectName(QString::fromUtf8("heading"));
        heading->setGeometry(QRect(0, 0, 600, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Roboto Slab"));
        font.setPointSize(28);
        heading->setFont(font);
        heading->setAlignment(Qt::AlignCenter);
        subHeading = new QLabel(centralWidget);
        subHeading->setObjectName(QString::fromUtf8("subHeading"));
        subHeading->setGeometry(QRect(0, 60, 600, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Rod"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setWeight(50);
        subHeading->setFont(font1);
        subHeading->setAlignment(Qt::AlignCenter);
        BudgieAPPQTClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BudgieAPPQTClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        BudgieAPPQTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BudgieAPPQTClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BudgieAPPQTClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BudgieAPPQTClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BudgieAPPQTClass->setStatusBar(statusBar);
        QWidget::setTabOrder(incomeValue, livingExpenseValue);
        QWidget::setTabOrder(livingExpenseValue, billsExpenseValue);
        QWidget::setTabOrder(billsExpenseValue, otherExpenseValue);
        QWidget::setTabOrder(otherExpenseValue, submitInfoButton);
        QWidget::setTabOrder(submitInfoButton, carTypeRent);
        QWidget::setTabOrder(carTypeRent, carTypeOwn);
        QWidget::setTabOrder(carTypeOwn, monthlyRentalValue);
        QWidget::setTabOrder(monthlyRentalValue, milePerGallonValue);
        QWidget::setTabOrder(milePerGallonValue, costPerGallonValue);
        QWidget::setTabOrder(costPerGallonValue, distanceTravelledValue);
        QWidget::setTabOrder(distanceTravelledValue, saverButton);
        QWidget::setTabOrder(saverButton, transportationCostButton);
        QWidget::setTabOrder(transportationCostButton, loanCalculatorButton);

        retranslateUi(BudgieAPPQTClass);
        QObject::connect(submitInfoButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleSubmitInfoButton()));
        QObject::connect(loanCalculatorButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleLoanCalculatorButton()));
        QObject::connect(transportationCostButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleTransportationCostButton()));
        QObject::connect(saverButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleSaverButton()));
        QObject::connect(carTypeRent, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleRentRadioButton()));
        QObject::connect(carTypeOwn, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleOwnRadioButton()));
        QObject::connect(dailyButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleDailyButton()));
        QObject::connect(weeklyButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleWeeklyButton()));
        QObject::connect(monthlyButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleMonthlyButton()));
        QObject::connect(transportationCostBackButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleBackButton()));
        QObject::connect(calender, SIGNAL(clicked(QDate)), BudgieAPPQTClass, SLOT(handleCalender()));
        QObject::connect(calenderButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleCalenderButton()));
        QObject::connect(saveButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleSaveButton()));
        QObject::connect(launchButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleLaunchButton()));
        QObject::connect(saverBackButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleBackButton()));
        QObject::connect(LoanCalculatorBackButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleBackButton()));
        QObject::connect(loanTypeHouse, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleHouseRadioButton()));
        QObject::connect(loanTypeCar, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleCarRadioButton()));
        QObject::connect(calculateLoanButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleCalculateLoanButton()));
        QObject::connect(viewButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleViewButton()));
        QObject::connect(deleteButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleDeleteButton()));
        QObject::connect(emailComboBox, SIGNAL(currentIndexChanged(int)), BudgieAPPQTClass, SLOT(handleEmailComboBox()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BudgieAPPQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *BudgieAPPQTClass)
    {
        BudgieAPPQTClass->setWindowTitle(QApplication::translate("BudgieAPPQTClass", "BudgieAPPQT", 0, QApplication::UnicodeUTF8));
        emailLabel->setText(QApplication::translate("BudgieAPPQTClass", "Enter Your Email", 0, QApplication::UnicodeUTF8));
        launchButton->setText(QApplication::translate("BudgieAPPQTClass", "Launch", 0, QApplication::UnicodeUTF8));
        emailComboBox->clear();
        emailComboBox->insertItems(0, QStringList()
         << QApplication::translate("BudgieAPPQTClass", "--Add New--", 0, QApplication::UnicodeUTF8)
        );
        selectEmailLabel->setText(QApplication::translate("BudgieAPPQTClass", "Select Your Email", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("BudgieAPPQTClass", "Delete", 0, QApplication::UnicodeUTF8));
        viewButton->setText(QApplication::translate("BudgieAPPQTClass", "View", 0, QApplication::UnicodeUTF8));
        incomeLabel->setText(QApplication::translate("BudgieAPPQTClass", "Enter Monthly Income", 0, QApplication::UnicodeUTF8));
        livingExpenseLabel->setText(QApplication::translate("BudgieAPPQTClass", "Enter Monthly Living Expense", 0, QApplication::UnicodeUTF8));
        billsExpenseLabel->setText(QApplication::translate("BudgieAPPQTClass", "Enter Monthly Bills Expense", 0, QApplication::UnicodeUTF8));
        otherExpenseLabel->setText(QApplication::translate("BudgieAPPQTClass", "Enter Any Other Monthly Expense", 0, QApplication::UnicodeUTF8));
        submitInfoButton->setText(QApplication::translate("BudgieAPPQTClass", "Submit Information", 0, QApplication::UnicodeUTF8));
        totalIncomeLabel->setText(QApplication::translate("BudgieAPPQTClass", "Yearly Total Income", 0, QApplication::UnicodeUTF8));
        monthlyExpenseLabel->setText(QApplication::translate("BudgieAPPQTClass", "Monthly Total Expense", 0, QApplication::UnicodeUTF8));
        yearlyExpenseLabel->setText(QApplication::translate("BudgieAPPQTClass", "Yearly Total Expense", 0, QApplication::UnicodeUTF8));
        totalIncomeValue->setText(QApplication::translate("BudgieAPPQTClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        yearlyExpenseValue->setText(QApplication::translate("BudgieAPPQTClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        monthlyExpenseValue->setText(QApplication::translate("BudgieAPPQTClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        loanCalculatorButton->setText(QApplication::translate("BudgieAPPQTClass", "Loan Calculator", 0, QApplication::UnicodeUTF8));
        transportationCostButton->setText(QApplication::translate("BudgieAPPQTClass", "Transportation Cost", 0, QApplication::UnicodeUTF8));
        saverButton->setText(QApplication::translate("BudgieAPPQTClass", "Saver", 0, QApplication::UnicodeUTF8));
        costPerGallonLabel->setText(QApplication::translate("BudgieAPPQTClass", "Cost per gallon", 0, QApplication::UnicodeUTF8));
        distanceTravelledLabel->setText(QApplication::translate("BudgieAPPQTClass", "Distance traveled", 0, QApplication::UnicodeUTF8));
        monthlyRentalLabel->setText(QApplication::translate("BudgieAPPQTClass", "How much per minth ($)", 0, QApplication::UnicodeUTF8));
        milePerGallonLabel->setText(QApplication::translate("BudgieAPPQTClass", "Mile per gallon", 0, QApplication::UnicodeUTF8));
        carTypeLabel->setText(QApplication::translate("BudgieAPPQTClass", "Car Type", 0, QApplication::UnicodeUTF8));
        carTypeRent->setText(QApplication::translate("BudgieAPPQTClass", "Rent", 0, QApplication::UnicodeUTF8));
        carTypeOwn->setText(QApplication::translate("BudgieAPPQTClass", "Own", 0, QApplication::UnicodeUTF8));
        traveledCostLabel->setText(QApplication::translate("BudgieAPPQTClass", "Traveled Cost", 0, QApplication::UnicodeUTF8));
        dailyButton->setText(QApplication::translate("BudgieAPPQTClass", "Daily", 0, QApplication::UnicodeUTF8));
        weeklyButton->setText(QApplication::translate("BudgieAPPQTClass", "Weekly", 0, QApplication::UnicodeUTF8));
        monthlyButton->setText(QApplication::translate("BudgieAPPQTClass", "Monthly", 0, QApplication::UnicodeUTF8));
        transportationCostBackButton->setText(QApplication::translate("BudgieAPPQTClass", "Back", 0, QApplication::UnicodeUTF8));
        amountNeededLabel->setText(QApplication::translate("BudgieAPPQTClass", "Amount Needed", 0, QApplication::UnicodeUTF8));
        dueDateLabel->setText(QApplication::translate("BudgieAPPQTClass", "Due Date", 0, QApplication::UnicodeUTF8));
        savingLabel->setText(QApplication::translate("BudgieAPPQTClass", "Your Daily Saving Must Be", 0, QApplication::UnicodeUTF8));
        calenderButton->setText(QString());
        saveButton->setText(QApplication::translate("BudgieAPPQTClass", "Save", 0, QApplication::UnicodeUTF8));
        saverBackButton->setText(QApplication::translate("BudgieAPPQTClass", "Back", 0, QApplication::UnicodeUTF8));
        LoanCalculatorBackButton->setText(QApplication::translate("BudgieAPPQTClass", "Back", 0, QApplication::UnicodeUTF8));
        loanTypeCar->setText(QApplication::translate("BudgieAPPQTClass", "Car", 0, QApplication::UnicodeUTF8));
        calculateLoanButton->setText(QApplication::translate("BudgieAPPQTClass", "Calculate Loan", 0, QApplication::UnicodeUTF8));
        loanTypeLabel->setText(QApplication::translate("BudgieAPPQTClass", "Loan Type", 0, QApplication::UnicodeUTF8));
        monthlyLoanAmountLabel->setText(QApplication::translate("BudgieAPPQTClass", "Monthly Loan Amount", 0, QApplication::UnicodeUTF8));
        loanTypeHouse->setText(QApplication::translate("BudgieAPPQTClass", "House", 0, QApplication::UnicodeUTF8));
        interestRateLabel->setText(QApplication::translate("BudgieAPPQTClass", "Interest Rate", 0, QApplication::UnicodeUTF8));
        loanDurationLabel->setText(QApplication::translate("BudgieAPPQTClass", "duratioin", 0, QApplication::UnicodeUTF8));
        loanAmountLabel->setText(QApplication::translate("BudgieAPPQTClass", "Loan Amount", 0, QApplication::UnicodeUTF8));
        heading->setText(QApplication::translate("BudgieAPPQTClass", "Budgie App", 0, QApplication::UnicodeUTF8));
        subHeading->setText(QApplication::translate("BudgieAPPQTClass", "Finance Made Simple", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BudgieAPPQTClass: public Ui_BudgieAPPQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGIEAPPQT_H
