#pragma once

#include "Clothes.h"


class Pantalon : public Clothes
{
private:

	static int totalPantalones;


public:

	Pantalon(string color, string size) : Clothes(color, size) { totalPantalones++; }
	~Pantalon() { totalPantalones--; }

	int GetTotalPantalones() { return totalPantalones; }
};