#include "FileIOHandler.h"
#include <iostream>
#include <fstream>
#include <qfile.h>
#include <QFileInfo>
#include <fstream>
#include <QMessageBox>
#include <QTextStream>

FileIOHandler::FileIOHandler(void)
{

}


FileIOHandler::~FileIOHandler(void)
{
}

QString FileIOHandler::getValue(QString key)
{
	return userdata->getValue(key);
}

void FileIOHandler::setValue(QString key, QString value)
{
	userdata->setValue(key, value);
}

void FileIOHandler::storeData()
{
	QFile file(file);
	file.open(QIODevice::WriteOnly | QIODevice::Text);
	QTextStream stream(&file); //stream of information
	stream << userdata->toString();
	file.close();

}

bool FileIOHandler::makeConnection(void* filename)
{
	file = *((QString*)filename);
	return loadData();
}

bool FileIOHandler::loadData()
{
	QFile file(file);
	if(!file.open(QIODevice::ReadWrite)) {
		QMessageBox::information(0, "error", file.errorString());
		return false;
	}
	
	//userdata = new UserData();
	QTextStream in(&file);

	while(!in.atEnd()) {
		QString line = in.readLine();    
		QStringList fields = line.split(":");
		userdata->setValue(fields[0],fields[1]);
	}

	file.close();
	return true;
}

void FileIOHandler::loadUsers()
{
	QFile file("users.txt");
	if(!file.open(QIODevice::ReadWrite)) {
		QMessageBox::information(0, "error", file.errorString());
	}
	
	userdata = new UserData();
	QTextStream in(&file);

	while(!in.atEnd()) {
		QString line = in.readLine();    
		QStringList fields = line.split(":");
		userdata->addUser(fields[1]);
	}

	file.close();
}

void FileIOHandler::addUser(QString email)
{
	userdata->addUser(email);
}
void FileIOHandler::removeUser(int index)
{
	userdata->removeUser(index);
}

void FileIOHandler::storeUsers()
{
	QFile file("users.txt");
	file.open(QIODevice::WriteOnly | QIODevice::Text);
	QTextStream stream(&file); //stream of information
	stream << userdata->usersList();
	file.close();
}

bool FileIOHandler::IsUserExists(QString username)
{
	return userdata->IsUserExists(username);
}

void FileIOHandler::populateUsers(QComboBox* list)
{
	userdata->populateUsers(list);
}