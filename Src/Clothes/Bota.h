#pragma once

#include "Clothes.h"

class Bota : public Clothes
{
private:

	static int totalBotas;


public:

	Bota(string color, string size) : Clothes(color, size) { totalBotas++; }
	~Bota() { totalBotas--; }

	int GetTotalBotas() { return totalBotas; }
};