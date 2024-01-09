#pragma once

#include "Clothes.h"

class Delantal : public Clothes
{
private:

	static int totalDelantales;


public:

	Delantal(string color, string size) : Clothes(color, size) { totalDelantales++; }
	~Delantal() { totalDelantales--; }

	int GetTotalDelantales() { return totalDelantales; }
};

