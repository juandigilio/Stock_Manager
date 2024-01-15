#pragma once

#include "Clothes.h"


class Pantalon : public Clothes
{
private:

	static int totalPantalones;


public:

	Pantalon(Date date, string color, string size) : Clothes(date, color, size) { totalPantalones++; }
	~Pantalon() { totalPantalones--; }

	int GetTotalPantalones() { return totalPantalones; }
};