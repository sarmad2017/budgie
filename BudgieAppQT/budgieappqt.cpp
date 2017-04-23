#include "budgieappqt.h"
#include <iostream>
#include <fstream>
#include <qfile.h>
#include <QFileInfo>

BudgieAPPQT::BudgieAPPQT(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	userData = new UserData();
	/*if(userData)
	{
		ui.incomeValue->setText(QString::number(userData->getMonthlyIncome()));
		ui.livingExpenseValue->setText(QString::number(userData->getMonthlyLivingExpense()));
		ui.billsExpenseValue->setText(QString::number(userData->getMonthlyBillExpense()));
		ui.otherExpenseValue->setText(QString::number(userData->getMonthlyOtherExpense()));
	}*/
}

BudgieAPPQT::~BudgieAPPQT()
{

}

void BudgieAPPQT::handleSubmitInfoButton()
{
	userData->setMonthlyIncome(ui.incomeValue->text().toDouble());
	userData->setMonthlyLivingExpense(ui.livingExpenseValue->text().toDouble());
	userData->setMonthlyBillExpense(ui.billsExpenseValue->text().toDouble());
	userData->setMonthlyOtherExpense(ui.otherExpenseValue->text().toDouble());

	ui.totalIncomeValue->setText("$ "+QString::number(userData->getMonthlyIncome()*12));
	ui.monthlyExpenseValue->setText("$ "+QString::number(userData->getMonthlyLivingExpense() + userData->getMonthlyBillExpense() + userData->getMonthlyOtherExpense()));
	ui.yearlyExpenseValue->setText("$ "+QString::number((userData->getMonthlyLivingExpense() + userData->getMonthlyBillExpense() + userData->getMonthlyOtherExpense())*12));

	ui.stackedWidget->setCurrentIndex(2);
}


void BudgieAPPQT::handleLoanCalculatorButton()
{
	ui.stackedWidget->setCurrentIndex(5);
}

void BudgieAPPQT::handleTransportationCostButton()
{
	ui.carTypeRent->setChecked(true);
	ui.stackedWidget->setCurrentIndex(3);
}

void BudgieAPPQT::handleSaverButton()
{
	ui.calender->hide();
	ui.dueDateValue->setDate(QDate::currentDate());
	ui.stackedWidget->setCurrentIndex(4);
}

void BudgieAPPQT::handleRentRadioButton()
{
	ui.monthlyRentalLabel->show();
	ui.monthlyRentalValue->show();
	ui.milePerGallonLabel->move(ui.milePerGallonLabel->x(),ui.milePerGallonLabel->y()+40);
	ui.milePerGallonValue->move(ui.milePerGallonValue->x(),ui.milePerGallonValue->y()+40);
	ui.costPerGallonLabel->move(ui.costPerGallonLabel->x(),ui.costPerGallonLabel->y()+40);
	ui.costPerGallonValue->move(ui.costPerGallonValue->x(),ui.costPerGallonValue->y()+40);
	ui.distanceTravelledLabel->move(ui.distanceTravelledLabel->x(),ui.distanceTravelledLabel->y()+40);
	ui.distanceTravelledValue->move(ui.distanceTravelledValue->x(),ui.distanceTravelledValue->y()+40);
}

void BudgieAPPQT::handleOwnRadioButton()
{
	ui.monthlyRentalLabel->hide();
	ui.monthlyRentalValue->hide();
	ui.milePerGallonLabel->move(ui.milePerGallonLabel->x(),ui.milePerGallonLabel->y()-40);
	ui.milePerGallonValue->move(ui.milePerGallonValue->x(),ui.milePerGallonValue->y()-40);
	ui.costPerGallonLabel->move(ui.costPerGallonLabel->x(),ui.costPerGallonLabel->y()-40);
	ui.costPerGallonValue->move(ui.costPerGallonValue->x(),ui.costPerGallonValue->y()-40);
	ui.distanceTravelledLabel->move(ui.distanceTravelledLabel->x(),ui.distanceTravelledLabel->y()-40);
	ui.distanceTravelledValue->move(ui.distanceTravelledValue->x(),ui.distanceTravelledValue->y()-40);
}

void BudgieAPPQT::handleDailyButton()
{
	double monthlyRental = 0;
	if(ui.monthlyRentalValue->isEnabled())
	{
		monthlyRental = ui.monthlyRentalValue->text().toDouble();
	}
	ui.traveledCostValue->setText(QString::number((monthlyRental/30) + (ui.costPerGallonValue->text().toDouble()*ui.distanceTravelledValue->text().toDouble())/ui.milePerGallonValue->text().toDouble()));
}

void BudgieAPPQT::handleWeeklyButton()
{
	double monthlyRental = 0;
	if(!ui.monthlyRentalValue->isHidden())
	{
		monthlyRental = ui.monthlyRentalValue->text().toDouble();
	}
	ui.traveledCostValue->setText(QString::number(((monthlyRental/30) + (ui.costPerGallonValue->text().toDouble()*ui.distanceTravelledValue->text().toDouble())/ui.milePerGallonValue->text().toDouble())*7));
}

void BudgieAPPQT::handleMonthlyButton()
{
	double monthlyRental = 0;
	if(!ui.monthlyRentalValue->isHidden())
	{
		monthlyRental = ui.monthlyRentalValue->text().toDouble();
	}
	ui.traveledCostValue->setText(QString::number(((monthlyRental/30) + (ui.costPerGallonValue->text().toDouble()*ui.distanceTravelledValue->text().toDouble())/ui.milePerGallonValue->text().toDouble())*30));
}

void BudgieAPPQT::handleTransportationCostBackButton()
{
	ui.stackedWidget->setCurrentIndex(2);
}

void BudgieAPPQT::handleTransportationCostNextButton()
{

}

void BudgieAPPQT::handleCalenderButton()
{
	ui.calender->show();
}

void BudgieAPPQT::handleCalender()
{
	ui.dueDateValue->setDate(ui.calender->selectedDate());
	ui.calender->hide();
}

void BudgieAPPQT::handleSaveButton()
{
	QDate dNow(QDate::currentDate());
    QDate dEndOfTheWord(2012, 12, 21);
    int days = dNow.daysTo(ui.dueDateValue->date());
	ui.savingValue->setText(QString::number(ui.amountNeededValue->text().toDouble()/days));
}

void BudgieAPPQT::handleLaunchButton()
{
	
	QString filename = ui.emailValue->text();
	if(filename != "")
	{
		QFileInfo check_file(filename);
		// check if file exists and if yes: Is it really a file and no directory?
		if (check_file.exists() && check_file.isFile())
		{

		}
		else
		{
			QFile myFile(filename);

			if(myFile.open(QIODevice::Append | QIODevice::Text ))
			{
				std::cout << "File Has Been Created" << std::endl;
				ui.stackedWidget->setCurrentIndex(1);
			}
			else
			{
				std::cout << "Failed to Create File" << std::endl;
			}
		}
		ui.stackedWidget->setCurrentIndex(1);
	}
	
}