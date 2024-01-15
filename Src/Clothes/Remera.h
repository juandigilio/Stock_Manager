#pragma once

#include "Clothes.h"

class Remera : public Clothes
{
private:

	static int totalRemeras;


public:

	Remera(Date date, string color, string size) : Clothes(date, color, size) { totalRemeras++; }
	~Remera() { totalRemeras--; }

	int GetTotalRemeras() { return totalRemeras; }
};