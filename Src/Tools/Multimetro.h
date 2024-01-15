#pragma once

#include "Tool.h"


class Multimetro : public Tool
{
private:

	static int totalMultimetros;


public:

	Multimetro(Date date, string brand) : Tool(date, brand) { totalMultimetros++; }
	~Multimetro() { totalMultimetros--; }

	int GetTotalMultimetros() { return totalMultimetros; }
};

