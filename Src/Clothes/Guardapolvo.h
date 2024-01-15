#pragma once

#include "Clothes.h"

class Guardapolvo : public Clothes
{
private:
	
	static int totalGuardapolvos;


public:

	Guardapolvo(Date date, string color, string size) : Clothes(date, color, size) { totalGuardapolvos++; }
	~Guardapolvo() { totalGuardapolvos--; }

	int GetTotalGuardapolvos() { return totalGuardapolvos; }
};

