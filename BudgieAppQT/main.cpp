#include "budgieappqt.h"
#include <QtGui/QApplication>
#include <XMLParser.h>
#include <iostream>

int main(int argc, char *argv[])
{
	std::cout << "----------------------------------------------------" << std::endl;
	QApplication a(argc, argv);
	BudgieAPPQT w;
	w.show();
	return a.exec();
}
