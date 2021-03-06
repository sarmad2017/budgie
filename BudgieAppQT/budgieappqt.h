#ifndef BUDGIEAPPQT_H
#define BUDGIEAPPQT_H

#include <QtGui/QMainWindow>
#include "ui_budgieappqt.h"
#include "UserData.h"
#include <IOHandlerFactory.h>

class BudgieAPPQT : public QMainWindow
{
	Q_OBJECT

public:
	BudgieAPPQT(QWidget *parent = 0, Qt::WFlags flags = 0);
	~BudgieAPPQT();

private:
	Ui::BudgieAPPQTClass ui;
	UserData* userData;
	IOHandlerFactory ioHandlerFactory;
	IOHandler* ioHandler;

private slots:
	void handleSubmitInfoButton();
	void handleLoanCalculatorButton();
	void handleTransportationCostButton();
	void handleSaverButton();
	void handleRentRadioButton();
	void handleOwnRadioButton();
	void handleDailyButton();
	void handleWeeklyButton();
	void handleMonthlyButton();
	void handleBackButton();
	void handleNextButton();
	void handleCalenderButton();
	void handleCalender();
	void handleSaveButton();
	void handleLaunchButton();
	void handleHouseRadioButton();
	void handleCarRadioButton();
	void handleCalculateLoanButton();
	void handleViewButton();
	void handleDeleteButton();
	void handleEmailComboBox();
};

#endif // BUDGIEAPPQT_H
