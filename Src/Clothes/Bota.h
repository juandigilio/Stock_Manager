#pragma once

#include "Clothes.h"

class Bota : public Clothes
{
private:

	static int totalBotas;


public:

	Bota(Date date, string color, string size) : Clothes(date, color, size) { totalBotas++; }
	~Bota() { totalBotas--; }

	int GetTotalBotas() { return totalBotas; }
};