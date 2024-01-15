#pragma once

#include "Clothes.h"

class Chaleco : public Clothes
{
private:

	static int totalChalecos;


public:

	Chaleco(Date date, string color, string size) : Clothes(date, color, size) { totalChalecos++; }
	~Chaleco() { totalChalecos--; }

	int GetTotalChalecos() { return totalChalecos; }
};