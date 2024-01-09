#pragma once

#include "Object.h"

class Tool :  public Object
{
private:
	
	static int totalTools;


public:

	Tool() { totalTools++; }
	virtual ~Tool() { totalTools--; }

	int GetTotalTools() { return totalTools; }
};

