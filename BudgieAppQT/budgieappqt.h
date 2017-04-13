#ifndef BUDGIEAPPQT_H
#define BUDGIEAPPQT_H

#include <QtGui/QMainWindow>
#include "ui_budgieappqt.h"
#include "UserData.h"

class BudgieAppQT : public QMainWindow
{
	Q_OBJECT

public:
	BudgieAppQT(QWidget *parent = 0, Qt::WFlags flags = 0);
	void setUserData(UserData* userData);
	~BudgieAppQT();

private:
	Ui::BudgieAppQTClass ui;
	UserData* data;

private slots:
	void handleButton();
};

#endif // BUDGIEAPPQT_H
