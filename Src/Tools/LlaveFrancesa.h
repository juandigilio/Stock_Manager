#pragma once

#include "Tool.h"


class LlaveFrancesa : public Tool
{
private:

	static int totalLlavesFrancesas;

	int size;


public:

	LlaveFrancesa(Date date, string brand, int size) : Tool(date, brand) { this->size = size; totalLlavesFrancesas++; }
	~LlaveFrancesa() { totalLlavesFrancesas--; }

	int GetTotalLlavesFrancesas() { return totalLlavesFrancesas; }
};

