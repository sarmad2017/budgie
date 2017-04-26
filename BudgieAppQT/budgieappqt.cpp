#include "budgieappqt.h"
#include <qmessagebox.h>

#include <XMLParser.h>

BudgieAPPQT::BudgieAPPQT(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	ioHandler = ioHandlerFactory.getIOHandler();
	ioHandler->loadUsers();
	ioHandler->populateUsers(ui.emailComboBox);
}

BudgieAPPQT::~BudgieAPPQT()
{

}

void BudgieAPPQT::handleSubmitInfoButton()
{
	ioHandler->setValue("incomeValue", ui.incomeValue->text());
	ioHandler->setValue("livingExpenseValue", ui.livingExpenseValue->text());
	ioHandler->setValue("billsExpenseValue", ui.billsExpenseValue->text());
	ioHandler->setValue("otherExpenseValue", ui.otherExpenseValue->text());

	ui.totalIncomeValue->setText("$ "+QString::number(ioHandler->getValue("incomeValue").toDouble()*12,'g',10));
	ui.monthlyExpenseValue->setText("$ "+QString::number(ioHandler->getValue("livingExpenseValue").toDouble() + ioHandler->getValue("billsExpenseValue").toDouble() + ioHandler->getValue("otherExpenseValue").toDouble()));
	ui.yearlyExpenseValue->setText("$ "+QString::number((ioHandler->getValue("livingExpenseValue").toDouble() + ioHandler->getValue("billsExpenseValue").toDouble() + ioHandler->getValue("otherExpenseValue").toDouble())*12));

	ioHandler->storeData();
	ui.stackedWidget->setCurrentIndex(2);
}

void BudgieAPPQT::handleLoanCalculatorButton()
{
	int loanType = ioHandler->getValue("loanTypeCar").toInt();
	if(loanType)
	{
		ui.loanTypeCar->setChecked(true);
		handleCarRadioButton();
	}
	else
	{
		ui.loanTypeHouse->setChecked(true);
		handleHouseRadioButton();
	}
	ui.loanDurationValue->setValue(ioHandler->getValue("loanDurationValue").toInt());
	ui.loanAmountValue->setValue(ioHandler->getValue("loanAmountValue").toDouble());
	ui.interestRateValue->setValue(ioHandler->getValue("interestRateValue").toDouble());
	ui.monthlyLoanAmountValue->setText(ioHandler->getValue("monthlyLoanAmountValue"));

	ui.stackedWidget->setCurrentIndex(5);
}

void BudgieAPPQT::handleTransportationCostButton()
{
	int carType = ioHandler->getValue("carTypeOwn").toInt();
	if(carType)
	{
		ui.carTypeOwn->setChecked(true);
		handleOwnRadioButton();
	}
	else
	{
		ui.carTypeRent->setChecked(true);
		handleRentRadioButton();
	}
	ui.monthlyRentalValue->setText(ioHandler->getValue("monthlyRentalValue"));
	ui.costPerGallonValue->setText(ioHandler->getValue("costPerGallonValue"));
	ui.distanceTravelledValue->setText(ioHandler->getValue("distanceTravelledValue"));
	ui.milePerGallonValue->setText(ioHandler->getValue("milePerGallonValue"));

	ui.stackedWidget->setCurrentIndex(3);
}

void BudgieAPPQT::handleSaverButton()
{
	ui.calender->hide();
	ui.dueDateValue->setDate(QDate::currentDate());
	ui.dueDateValue->setMinimumDate(QDate::currentDate());
	ui.amountNeededValue->setText(ioHandler->getValue("amountNeededValue"));
	ui.savingValue->setText(ioHandler->getValue("savingValue"));
	ui.stackedWidget->setCurrentIndex(4);
}

void BudgieAPPQT::handleRentRadioButton()
{
	ui.monthlyRentalLabel->show();
	ui.monthlyRentalValue->show();
}

void BudgieAPPQT::handleOwnRadioButton()
{
	ui.monthlyRentalLabel->hide();
	ui.monthlyRentalValue->hide();
}

void BudgieAPPQT::handleDailyButton()
{
	double monthlyRental = 0;
	if(ui.monthlyRentalValue->isEnabled())
	{
		monthlyRental = ui.monthlyRentalValue->text().toDouble();
		ioHandler->setValue("carTypeRent","1");
		ioHandler->setValue("carTypeOwn", "0");
		ioHandler->setValue("monthlyRentalValue", ui.monthlyRentalValue->text());
	}
	else
	{
		ioHandler->setValue("carTypeRent","0");
		ioHandler->setValue("carTypeOwn", "1");
		ioHandler->setValue("monthlyRentalValue", ui.monthlyRentalValue->text());
	}
	ui.traveledCostValue->setText(QString::number((monthlyRental/30) + (ui.costPerGallonValue->text().toDouble()*ui.distanceTravelledValue->text().toDouble())/ui.milePerGallonValue->text().toDouble()));
	ioHandler->setValue("costPerGallonValue", ui.costPerGallonValue->text());
	ioHandler->setValue("distanceTravelledValue", ui.distanceTravelledValue->text());
	ioHandler->setValue("milePerGallonValue", ui.milePerGallonValue->text());
	ioHandler->setValue("traveledCostValue", ui.traveledCostValue->text());
	ioHandler->storeData();
}

void BudgieAPPQT::handleWeeklyButton()
{
	double monthlyRental = 0;
	if(!ui.monthlyRentalValue->isHidden())
	{
		monthlyRental = ui.monthlyRentalValue->text().toDouble();
		ioHandler->setValue("carTypeRent","1");
		ioHandler->setValue("carTypeOwn", "0");
		ioHandler->setValue("monthlyRentalValue", ui.monthlyRentalValue->text());
	}
	else
	{
		ioHandler->setValue("carTypeRent","0");
		ioHandler->setValue("carTypeOwn", "1");
		ioHandler->setValue("monthlyRentalValue", ui.monthlyRentalValue->text());
	}
	ui.traveledCostValue->setText(QString::number(((monthlyRental/30) + (ui.costPerGallonValue->text().toDouble()*ui.distanceTravelledValue->text().toDouble())/ui.milePerGallonValue->text().toDouble())*7));
	ioHandler->setValue("costPerGallonValue", ui.costPerGallonValue->text());
	ioHandler->setValue("distanceTravelledValue", ui.distanceTravelledValue->text());
	ioHandler->setValue("milePerGallonValue", ui.milePerGallonValue->text());
}

void BudgieAPPQT::handleMonthlyButton()
{
	double monthlyRental = 0;
	if(!ui.monthlyRentalValue->isHidden())
	{
		monthlyRental = ui.monthlyRentalValue->text().toDouble();
		ioHandler->setValue("carTypeRent","1");
		ioHandler->setValue("carTypeOwn", "0");
		ioHandler->setValue("monthlyRentalValue", ui.monthlyRentalValue->text());
	}
	else
	{
		ioHandler->setValue("carTypeRent","0");
		ioHandler->setValue("carTypeOwn", "1");
		ioHandler->setValue("monthlyRentalValue", ui.monthlyRentalValue->text());
	}
	ui.traveledCostValue->setText(QString::number(((monthlyRental/30) + (ui.costPerGallonValue->text().toDouble()*ui.distanceTravelledValue->text().toDouble())/ui.milePerGallonValue->text().toDouble())*30));
	ioHandler->setValue("costPerGallonValue", ui.costPerGallonValue->text());
	ioHandler->setValue("distanceTravelledValue", ui.distanceTravelledValue->text());
	ioHandler->setValue("milePerGallonValue", ui.milePerGallonValue->text());
}

void BudgieAPPQT::handleBackButton()
{
	ui.stackedWidget->setCurrentIndex(2);
}

void BudgieAPPQT::handleNextButton()
{

}

void BudgieAPPQT::handleCalenderButton()
{
	if(ui.calender->isVisible())
	{
		ui.calender->hide();
	}
	else
	{
		ui.calender->show();
	}
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
    int days = dNow.daysTo(ui.dueDateValue->date()) + 1;
	ui.savingValue->setText(QString::number(ui.amountNeededValue->text().toDouble()/days));
	ioHandler->setValue("amountNeededValue",ui.amountNeededValue->text());
	ioHandler->setValue("dueDateValue", ui.dueDateValue->date().toString());
	ioHandler->setValue("savingValue", ui.savingValue->text());
	ioHandler->storeData();
}

void BudgieAPPQT::handleLaunchButton()
{
	
	QString filename = ui.emailValue->text();
	if(filename != "")
	{
		//check for duplicates
		if(ioHandler->IsUserExists(filename))
		{
			QMessageBox msgBox;
			msgBox.setText("The document has been modified.");
			msgBox.exec();
			return;
		}
		else
		{
			ioHandler->addUser(filename);
			ioHandler->storeUsers();
		}
		
		if(ioHandler->makeConnection(&filename))
		{
			ui.incomeValue->setText(ioHandler->getValue("incomeValue"));
			ui.livingExpenseValue->setText(ioHandler->getValue("livingExpenseValue"));
			ui.billsExpenseValue->setText(ioHandler->getValue("billsExpenseValue"));
			ui.otherExpenseValue->setText(ioHandler->getValue("otherExpenseValue"));
			ui.stackedWidget->setCurrentIndex(1);
		}
	}
	
}

void BudgieAPPQT::handleHouseRadioButton()
{
	ui.loanDurationValue->setMinimum(15);
	ui.loanDurationValue->setMaximum(30);
	ui.loanDurationValue->setSingleStep(15);
	
	ui.loanDurationValue->setValue((ui.loanDurationValue->value()/15)*15);
}

void BudgieAPPQT::handleCarRadioButton()
{
	ui.loanDurationValue->setMinimum(1);
	ui.loanDurationValue->setMaximum(74);
	ui.loanDurationValue->setSingleStep(1);
	
	ui.loanDurationValue->setValue(ui.loanDurationValue->value());
}

void BudgieAPPQT::handleCalculateLoanButton()
{
	int numberOfMonths = 0;
	if(ui.loanTypeHouse->isChecked())
	{
		numberOfMonths = 12*ui.loanDurationValue->value();
		ioHandler->setValue("loanTypeHouse","1");
		ioHandler->setValue("loanTypeCar","0");
	}
	else
	{
		numberOfMonths = ui.loanDurationValue->value();
		ioHandler->setValue("loanTypeHouse","0");
		ioHandler->setValue("loanTypeCar","1");
	}
	ui.monthlyLoanAmountValue->setText(QString::number((ui.loanAmountValue->value()*(100+ui.interestRateValue->value()))/(100 * numberOfMonths)));

	ioHandler->setValue("loanAmountValue",ui.loanAmountValue->text());
	ioHandler->setValue("loanDurationValue",ui.loanDurationValue->text());
	ioHandler->setValue("interestRateValue",ui.interestRateValue->text());
	ioHandler->setValue("monthlyLoanAmountValue",ui.monthlyLoanAmountValue->text());
	ioHandler->storeData();
}

void BudgieAPPQT::handleViewButton()
{
	QString filename = ui.emailComboBox->currentText();
	if(ioHandler->makeConnection(&filename))
	{
		ui.incomeValue->setText(ioHandler->getValue("incomeValue"));
		ui.livingExpenseValue->setText(ioHandler->getValue("livingExpenseValue"));
		ui.billsExpenseValue->setText(ioHandler->getValue("billsExpenseValue"));
		ui.otherExpenseValue->setText(ioHandler->getValue("otherExpenseValue"));
		ui.stackedWidget->setCurrentIndex(1);
	}
}

void BudgieAPPQT::handleDeleteButton()
{
	int fileIndex = ui.emailComboBox->currentIndex();
	QString filename = ui.emailComboBox->currentText();
	ui.emailComboBox->removeItem(fileIndex);
	ioHandler->removeUser(fileIndex-1);
	ioHandler->storeUsers();
}

void BudgieAPPQT::handleEmailComboBox()
{
	int index = ui.emailComboBox->currentIndex();
	bool display = false;
	if(index)
	{
		display = true;
	}
	ui.emailValue->setDisabled(display);
	ui.launchButton->setDisabled(display);
	ui.viewButton->setEnabled(display);
	ui.deleteButton->setEnabled(display);
}