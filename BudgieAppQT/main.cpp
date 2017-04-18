#include "budgieappqt.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BudgieAPPQT w;
	w.show();
	return a.exec();
}
