#pragma once

#include "Clothes.h"

class Buzo : public Clothes
{
private:

	static int totalBuzos;


public:

	Buzo(string color, string size) : Clothes(color, size) { totalBuzos++; }
	~Buzo() { totalBuzos--; }

	int GetTotalBuzos() { return totalBuzos; }
};