#pragma once

#include "Clothes.h"


class Camisa : public Clothes
{
private:

	static int totalCamisas;


public:

	Camisa(Date date, string color, string size) : Clothes(date, color, size) { totalCamisas++; }
	~Camisa() { totalCamisas--; }

	int GetTotalCamisas() { return totalCamisas; }
};

