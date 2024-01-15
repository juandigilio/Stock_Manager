#pragma once

#include "Destornillador.h"


class Phillips : public Destornillador
{
private:

	static int totalPhillips;


public:

	Phillips(Date date, string brand, string color) : Destornillador(date, brand, color) { totalPhillips++; }
	~Phillips() { totalPhillips--; }

	int GetTotalPhillips() { return totalPhillips; }
};

