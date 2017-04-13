#include "budgieappqt.h"

BudgieAppQT::BudgieAppQT(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL (released()), this, SLOT (handleButton()));
}

void BudgieAppQT::setUserData(UserData* userData)
{
	data = userData;
}

BudgieAppQT::~BudgieAppQT()
{
	
}

void BudgieAppQT::handleButton()
{
	data->setMonthlyIncome((ui.monthlyIncome->text()).toDouble());
	data->setMonthlyLivingExpense((ui.monthlyLivingExpense->text()).toDouble());
	data->setMonthlyBillExpense((ui.monthlyBillExpense->text()).toDouble());
	data->setMonthlyOtherExpense((ui.monthlyOtherExpense->text()).toDouble());
	ui.pushButton->setText(QString::number(data->getMonthlyBillExpense()));
}