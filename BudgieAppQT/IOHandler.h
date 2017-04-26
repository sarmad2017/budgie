#pragma once
#include <DataContainer.h>
#include <UserData.h>
#include <QComboBox.h>
class IOHandler
{
public:
	IOHandler(void);
	~IOHandler(void);
	virtual QString getValue(QString tag) = 0;
	virtual void setValue(QString tag, QString value) = 0;
	virtual void storeData() = 0;
	virtual bool makeConnection(void*) = 0;
	virtual void addUser(QString) = 0;
	virtual void removeUser(int) = 0;
	virtual void storeUsers() = 0;
	virtual void loadUsers() = 0;
	virtual bool IsUserExists(QString) = 0;
	virtual void populateUsers(QComboBox* list) = 0;

protected:
	UserData* userdata;
};