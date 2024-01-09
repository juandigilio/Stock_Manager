#pragma once

#include "Clothes.h"


class Camisa : public Clothes
{
private:

	static int totalCamisas;


public:

	Camisa(string color, string size) : Clothes(color, size) { totalCamisas++; }
	~Camisa() { totalCamisas--; }

	int GetTotalCamisas() { return totalCamisas; }
};

