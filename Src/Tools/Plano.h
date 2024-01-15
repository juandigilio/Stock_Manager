#pragma once

#include "Destornillador.h"


class Plano : public Destornillador
{
private:

	static int totalPlanos;


public:

	Plano(Date date, string brand, string color) : Destornillador(date, brand, color) { totalPlanos++; }
	~Plano() { totalPlanos--; }

	int GetTotalPlanos() { return totalPlanos; }
};

