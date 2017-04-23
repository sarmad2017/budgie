#pragma once
#include <DataContainer.h>
#include <UserData.h>
class IOHandler
{
public:
	IOHandler(void);
	~IOHandler(void);
	virtual QString getValue(QString tag) = 0;
	virtual void setValue(QString tag, QString value) = 0;
	virtual void storeData() = 0;
	virtual bool makeConnection(void*) = 0;

protected:
	UserData* userdata;
};