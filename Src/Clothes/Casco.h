#pragma once

#include "Clothes.h"

class Casco : public Clothes
{
private:

	static int totalCascos;


public:

	Casco(string color, string size) : Clothes(color, size) { totalCascos++; }
	~Casco() { totalCascos--; }

	int GetTotalCascos() { return totalCascos; }
};