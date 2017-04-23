#pragma once
#include <IOHandler.h>
#include <FileIOHandler.h>

class IOHandlerFactory
{
public:
	IOHandlerFactory(void);
	~IOHandlerFactory(void);
	IOHandler* getIOHandler(int type=0);

private:
	IOHandler* handler;
};

