#pragma once
#include <QString.h>
#include <QMap>

class UserData
{
public:
	UserData(void);
	~UserData(void);

	void setValue(QString key, QString value);
	QString getValue(QString key);
	QString toString();

private:
	QMap<QString,QString> data;
};

