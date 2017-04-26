#pragma once
#include "iohandler.h"

class FileIOHandler :
	public IOHandler
{
public:
	FileIOHandler(void);
	~FileIOHandler(void);
	QString getValue(QString tag);
	void setValue(QString tag, QString value);
	void storeData();
	bool makeConnection(void*);
	void addUser(QString);
	void removeUser(int);
	void storeUsers();
	void loadUsers();
	bool IsUserExists(QString);
	void populateUsers(QComboBox* list);

private:
	bool loadData();
	QString file;

};

