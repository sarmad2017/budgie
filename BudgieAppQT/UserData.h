#pragma once
#include <QString.h>
#include <QMap>
#include <qcombobox.h>

class UserData
{
public:
	UserData(void);
	~UserData(void);

	void setValue(QString key, QString value);
	QString getValue(QString key);
	QString toString();
	void addUser(QString);
	void removeUser(int);
	QString usersList();
	bool IsUserExists(QString);
	void populateUsers(QComboBox* list);

private:
	QMap<QString,QString> data;
	QMap<int,QString> users;
};

