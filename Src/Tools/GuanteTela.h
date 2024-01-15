#pragma once

#include "Tool.h"


class GuanteTela : public Tool
{
private:

	static int totalGuantesTela;

	
public:

	GuanteTela(Date date, string brand) : Tool(date, brand) { totalGuantesTela++; }
	~GuanteTela() { totalGuantesTela--; }

	int GetTotalGuantesTela() { return totalGuantesTela; }
};

