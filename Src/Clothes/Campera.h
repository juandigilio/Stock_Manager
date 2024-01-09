#pragma once

#include "Clothes.h"

class Campera : public Clothes
{
private:

	static int totalCamperas;


public:

	Campera(string color, string size) : Clothes(color, size) { totalCamperas++; }
	~Campera() { totalCamperas--; }

	int GetTotalCamperas() { return totalCamperas; }
};