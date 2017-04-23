#pragma once
#include <DataContainer.h>

class XMLParser
{
public:
	XMLParser(void);
	~XMLParser(void);
	void parseXML(QString);
	DataContainer* getDataContainer();

private:
	DataContainer* data;
};

