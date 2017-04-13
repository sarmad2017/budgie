#include "budgieappqt.h"
#include "UserData.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	UserData* userData = new UserData();
	BudgieAppQT w;
	w.setUserData(userData);
	w.show();
	return a.exec();
}
