#pragma once

#include "Object.h"

class Tool :  public Object
{
private:
	
	static int totalTools;

	string brand;

public:

	Tool(Date date, string brand) : Object(date) { this->brand = brand; totalTools++; }
	virtual ~Tool() { totalTools--; }

	int GetTotalTools() { return totalTools; }

	string GetBrand(){ return brand; }
};

