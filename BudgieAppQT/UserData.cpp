#include "UserData.h"


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