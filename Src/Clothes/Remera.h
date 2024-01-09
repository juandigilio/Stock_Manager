#pragma once

#include "Clothes.h"

class Remera : public Clothes
{
private:

	static int totalRemeras;


public:

	Remera(string color, string size) : Clothes(color, size) { totalRemeras++; }
	~Remera() { totalRemeras--; }

	int GetTotalRemeras() { return totalRemeras; }
};