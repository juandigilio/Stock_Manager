#pragma once

#include "Tool.h"


class GuanteCuero : public Tool
{
private:

	static int totalGuantesCuero;


public:

	GuanteCuero(Date date, string brand) : Tool(date, brand) { totalGuantesCuero++; }
	~GuanteCuero() { totalGuantesCuero--; }

	int GetTotalGuantesCuero() { return totalGuantesCuero; }
};

