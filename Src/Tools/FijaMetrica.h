#pragma once

#include "LlaveFija.h"

class FijaMetrica : public LlaveFija
{
private:

	static int totalFijasMetricas;

	int size;


public:

	FijaMetrica(Date date, string brand, int size) : LlaveFija(date, brand) { this->size = size; totalFijasMetricas++; }
	~FijaMetrica() { totalFijasMetricas--; }

	int GetTotalFijasMetricas() { return totalFijasMetricas; }
	int GetSize() { return size; }
};

