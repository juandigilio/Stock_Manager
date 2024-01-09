#pragma once

#include "LlaveFija.h"


class CombinadaMetrica : public LlaveFija
{
private:

	static int totalCombinadasMetricas;

	int size1;
	int size2;


public:
	
	CombinadaMetrica(string brand, int size1, int size2) : LlaveFija(brand) { this->size1 = size1; this->size2 = size2; totalCombinadasMetricas++; }
	~CombinadaMetrica(){ totalCombinadasMetricas--; }

	int GetTotalCombinadasMetricas() { return totalCombinadasMetricas; }
	int GetSize1() { return size1; }
	int GetSize2() { return size2; }
};

