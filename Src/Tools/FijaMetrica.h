#pragma once

#include "LlaveFija.h"

class FijaMetrica : public LlaveFija
{
private:

	static int totalFijasMetricas;

	int size;


public:

	FijaMetrica(string brand, int size) : LlaveFija(brand) { this->size = size; totalFijasMetricas++; }
	~FijaMetrica() { totalFijasMetricas--; }

	int GetTotalFijasMetricas() { return totalFijasMetricas; }
	int GetSize() { return size; }
};

