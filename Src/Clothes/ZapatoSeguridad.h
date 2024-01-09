#pragma once

#include "Clothes.h"

class ZapatoSeguridad : public Clothes
{
private:

	static int totalZapatosSeguridad;


public:

	ZapatoSeguridad(string color, string size) : Clothes(color, size) { totalZapatosSeguridad++; }
	~ZapatoSeguridad() { totalZapatosSeguridad--; }

	int GetTotalZapatosSeguridad() { return totalZapatosSeguridad; }
};