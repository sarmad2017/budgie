#include "XMLParser.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

XMLParser::XMLParser(void)
{
}


XMLParser::~XMLParser(void)
{
}

void XMLParser::parseXML(QString)
{
	/*string s = "<tag1>Hello</tag1>";
	  smatch sm;
	  regex re("<tag1>([\\s\\S]*?)</tag1>");
	  regex_match(s, sm, re);
	*/
	std::cout << "----------------------------------------------------" << std::endl;
	std::ifstream infile("thefile.txt");
	std::string line;
	while (std::getline(infile, line))
	{
		QString str(line.c_str());
		std::cout << str.toStdString() << std::endl;
	}
}

DataContainer* XMLParser::getDataContainer()
{
	return data;
}