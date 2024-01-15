#pragma once

#include "Clothes.h"

class Delantal : public Clothes
{
private:

	static int totalDelantales;


public:

	Delantal(Date date, string color, string size) : Clothes(date, color, size) { totalDelantales++; }
	~Delantal() { totalDelantales--; }

	int GetTotalDelantales() { return totalDelantales; }
};

