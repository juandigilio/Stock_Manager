#pragma once

#include "Clothes.h"

class Buzo : public Clothes
{
private:

	static int totalBuzos;


public:

	Buzo(Date date, string color, string size) : Clothes(date, color, size) { totalBuzos++; }
	~Buzo() { totalBuzos--; }

	int GetTotalBuzos() { return totalBuzos; }
};