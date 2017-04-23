#include "IOHandlerFactory.h"

IOHandlerFactory::IOHandlerFactory(void)
{

}


IOHandlerFactory::~IOHandlerFactory(void)
{

}

IOHandler* IOHandlerFactory::getIOHandler(int type)
{
	switch(type)
	{
		case 0:
			handler = new FileIOHandler();
			break;
		default:
			handler = new FileIOHandler();
	}
	return handler;
}