#pragma once

#include "Clothes.h"

class Guardapolvo : public Clothes
{
private:
	
	static int totalGuardapolvos;


public:

	Guardapolvo(string color, string size) : Clothes(color, size) { totalGuardapolvos++; }
	~Guardapolvo() { totalGuardapolvos--; }

	int GetTotalGuardapolvos() { return totalGuardapolvos; }
};

