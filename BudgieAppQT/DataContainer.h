#pragma once
#include <QString>

class DataContainer
{
public:
	DataContainer(QString);
	~DataContainer();

	QString toString();
	void setSubContainer(DataContainer*);

private:
	QString xmlTag;
	DataContainer* subContainers;
	QString value;
};

