#pragma once

#include "Tool.h"


class LlaveFija : public Tool
{
private:
	
	static int totalLlavesFijas;


protected:

	string brand;


public:

	LlaveFija(string brand) { this->brand = brand; totalLlavesFijas++; }
	virtual ~LlaveFija() { totalLlavesFijas--; }

	int GetTotalLlavesFijas() { return totalLlavesFijas; }
	string GetBrand() { return brand; }
};

