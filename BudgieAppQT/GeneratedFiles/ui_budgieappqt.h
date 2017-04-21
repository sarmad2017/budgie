/********************************************************************************
** Form generated from reading UI file 'budgieappqt.ui'
**
** Created: Thu Apr 13 07:21:47 2017
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
#include <QtGui/QDateEdit>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
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
    QPushButton *transportationCostNextButton;
    QWidget *page;
    QLabel *amountNeededLabel;
    QLabel *dueDateLabel;
    QLabel *savingLabel;
    QLineEdit *amountNeededValue;
    QLineEdit *savingValue;
    QDateEdit *dueDateValue;
    QPushButton *calenderButton;
    QCalendarWidget *calender;
    QPushButton *saveButton;
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
        emailLabel->setGeometry(QRect(60, 60, 150, 20));
        emailLabel->setLayoutDirection(Qt::LeftToRight);
        emailLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        emailValue = new QLineEdit(homePage);
        emailValue->setObjectName(QString::fromUtf8("emailValue"));
        emailValue->setGeometry(QRect(220, 60, 200, 20));
        launchButton = new QPushButton(homePage);
        launchButton->setObjectName(QString::fromUtf8("launchButton"));
        launchButton->setGeometry(QRect(275, 320, 50, 30));
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
        transportationCostNextButton = new QPushButton(transportationCostPage);
        transportationCostNextButton->setObjectName(QString::fromUtf8("transportationCostNextButton"));
        transportationCostNextButton->setGeometry(QRect(540, 10, 50, 20));
        stackedWidget->addWidget(transportationCostPage);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        amountNeededLabel = new QLabel(page);
        amountNeededLabel->setObjectName(QString::fromUtf8("amountNeededLabel"));
        amountNeededLabel->setGeometry(QRect(100, 80, 180, 20));
        amountNeededLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        dueDateLabel = new QLabel(page);
        dueDateLabel->setObjectName(QString::fromUtf8("dueDateLabel"));
        dueDateLabel->setGeometry(QRect(100, 120, 180, 20));
        dueDateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        savingLabel = new QLabel(page);
        savingLabel->setObjectName(QString::fromUtf8("savingLabel"));
        savingLabel->setGeometry(QRect(100, 160, 180, 20));
        savingLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        savingLabel->setIndent(-1);
        amountNeededValue = new QLineEdit(page);
        amountNeededValue->setObjectName(QString::fromUtf8("amountNeededValue"));
        amountNeededValue->setGeometry(QRect(300, 80, 120, 20));
        savingValue = new QLineEdit(page);
        savingValue->setObjectName(QString::fromUtf8("savingValue"));
        savingValue->setEnabled(false);
        savingValue->setGeometry(QRect(300, 160, 120, 20));
        dueDateValue = new QDateEdit(page);
        dueDateValue->setObjectName(QString::fromUtf8("dueDateValue"));
        dueDateValue->setEnabled(false);
        dueDateValue->setGeometry(QRect(300, 120, 100, 20));
        dueDateValue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dueDateValue->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        calenderButton = new QPushButton(page);
        calenderButton->setObjectName(QString::fromUtf8("calenderButton"));
        calenderButton->setGeometry(QRect(400, 120, 20, 20));
        calender = new QCalendarWidget(page);
        calender->setObjectName(QString::fromUtf8("calender"));
        calender->setEnabled(true);
        calender->setGeometry(QRect(170, 140, 250, 155));
        calender->setGridVisible(false);
        calender->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        calender->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calender->setNavigationBarVisible(true);
        calender->setDateEditEnabled(true);
        saveButton = new QPushButton(page);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(275, 320, 50, 30));
        stackedWidget->addWidget(page);
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
        QObject::connect(transportationCostBackButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleTransportationCostBackButton()));
        QObject::connect(transportationCostNextButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleTransportationCostNextButton()));
        QObject::connect(calender, SIGNAL(clicked(QDate)), BudgieAPPQTClass, SLOT(handleCalender()));
        QObject::connect(calenderButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleCalenderButton()));
        QObject::connect(saveButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleSaveButton()));
        QObject::connect(launchButton, SIGNAL(released()), BudgieAPPQTClass, SLOT(handleLaunchButton()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BudgieAPPQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *BudgieAPPQTClass)
    {
        BudgieAPPQTClass->setWindowTitle(QApplication::translate("BudgieAPPQTClass", "BudgieAPPQT", 0, QApplication::UnicodeUTF8));
        emailLabel->setText(QApplication::translate("BudgieAPPQTClass", "Enter Your Email", 0, QApplication::UnicodeUTF8));
        launchButton->setText(QApplication::translate("BudgieAPPQTClass", "Launch", 0, QApplication::UnicodeUTF8));
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
        transportationCostNextButton->setText(QApplication::translate("BudgieAPPQTClass", "Next", 0, QApplication::UnicodeUTF8));
        amountNeededLabel->setText(QApplication::translate("BudgieAPPQTClass", "Amount Needed", 0, QApplication::UnicodeUTF8));
        dueDateLabel->setText(QApplication::translate("BudgieAPPQTClass", "Due Date", 0, QApplication::UnicodeUTF8));
        savingLabel->setText(QApplication::translate("BudgieAPPQTClass", "Your Daily Saving Must Be", 0, QApplication::UnicodeUTF8));
        calenderButton->setText(QString());
        saveButton->setText(QApplication::translate("BudgieAPPQTClass", "Save", 0, QApplication::UnicodeUTF8));
        heading->setText(QApplication::translate("BudgieAPPQTClass", "Budgie App", 0, QApplication::UnicodeUTF8));
        subHeading->setText(QApplication::translate("BudgieAPPQTClass", "Finance Made Simple", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BudgieAPPQTClass: public Ui_BudgieAPPQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUDGIEAPPQT_H
