#pragma once

#include "Clothes.h"

class Chaleco : public Clothes
{
private:

	static int totalChalecos;


public:

	Chaleco(string color, string size) : Clothes(color, size) { totalChalecos++; }
	~Chaleco() { totalChalecos--; }

	int GetTotalChalecos() { return totalChalecos; }
};