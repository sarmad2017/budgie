#pragma once
class UserData
{
public:
	UserData(void);
	~UserData(void);

	void setMonthlyIncome(double income);
	void setMonthlyLivingExpense(double livingIncome);
	void setMonthlyBillExpense(double billIncome);
	void setMonthlyOtherExpense(double otherIncome);

	double getMonthlyIncome();
	double getMonthlyLivingExpense();
	double getMonthlyBillExpense();
	double getMonthlyOtherExpense();

private:
	double monthlyIncome;
	double monthlyLivingExpense;
	double monthlyBillExpense;
	double monthlyOtherExpense;
};

