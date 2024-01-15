#pragma once

#include "Clothes.h"

class Campera : public Clothes
{
private:

	static int totalCamperas;


public:

	Campera(Date date, string color, string size) : Clothes(date, color, size) { totalCamperas++; }
	~Campera() { totalCamperas--; }

	int GetTotalCamperas() { return totalCamperas; }
};