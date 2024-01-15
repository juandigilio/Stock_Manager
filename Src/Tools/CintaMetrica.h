#pragma once

#include "Tool.h"


class CintaMetrica : public Tool
{
private:

	static int totalCintasMetricas;

	int size;


public:

	CintaMetrica(Date date, string brand, int size) : Tool(date, brand) { this->size = size; totalCintasMetricas++; }
	~CintaMetrica() { totalCintasMetricas--; }

	int GetTotalCintasMetricas() { return totalCintasMetricas; }

	int GetSize() { return size; }
};

