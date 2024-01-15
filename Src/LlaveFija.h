#pragma once

#include "Tool.h"


class LlaveFija : public Tool
{
private:
	
	static int totalLlavesFijas;


protected:


public:

	LlaveFija(Date date, string brand) : Tool(date, brand) { totalLlavesFijas++; }
	virtual ~LlaveFija() { totalLlavesFijas--; }

	int GetTotalLlavesFijas() { return totalLlavesFijas; }
};

