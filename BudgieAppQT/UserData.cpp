#include "UserData.h"
#include <QComboBox.h>

UserData::UserData(void)
{
}


UserData::~UserData(void)
{
}

void UserData::setValue(QString key, QString value)
{
	data[key] = value;
}

QString UserData::getValue(QString key)
{
	return data[key];
}

QString UserData::toString()
{
	QString str;
	
	for (QMap<QString, QString>::const_iterator it=data.constBegin(); it!=data.constEnd(); ++it)
	{
		if(it!=data.constBegin())
		{
			str += "\n";
		}
		str += it.key() + ":" + it.value();
	}
	return str;
}

void UserData::addUser(QString email)
{
	users[users.size()] = email;
}

void UserData::removeUser(int index)
{
	users.remove(index);
}

QString UserData::usersList()
{
	QString str;
	
	for (QMap<int, QString>::const_iterator it=users.constBegin(); it!=users.constEnd(); ++it)
	{
		if(it!=users.constBegin())
		{
			str += "\n";
		}
		str += QString::number(it.key()) + ":" + it.value();
	}
	return str;
}

bool UserData::IsUserExists(QString username)
{
	for (QMap<int, QString>::const_iterator it=users.constBegin(); it!=users.constEnd(); ++it)
	{
		if(it.value() == username)
		{
			return true;
		}
		return false;
	}
	return false;
}

void UserData::populateUsers(QComboBox* list)
{
	for (QMap<int, QString>::const_iterator it=users.constBegin(); it!=users.constEnd(); ++it)
	{
		if(it.value() != "")
		{
			list->addItem(it.value());
		}
	}
}