#include "UserData.h"


UserData::UserData(void)
{
}


UserData::~UserData(void)
{
}

void UserData::setMonthlyIncome(double income)
{
	monthlyIncome = income;
}
void UserData::setMonthlyLivingExpense(double livindExpense)
{
	monthlyLivingExpense = livindExpense;
}
void UserData::setMonthlyBillExpense(double billExpense)
{
	monthlyBillExpense = billExpense;
}
void UserData::setMonthlyOtherExpense(double otherExpense)
{
	monthlyOtherExpense = otherExpense;
}

double UserData::getMonthlyIncome()
{
	return monthlyIncome;
}

double UserData::getMonthlyLivingExpense()
{
	return monthlyLivingExpense;
}

double UserData::getMonthlyBillExpense()
{
	return monthlyBillExpense;
}

double UserData::getMonthlyOtherExpense()
{
	return monthlyOtherExpense;
}