#pragma once

#include "Clothes.h"

class ZapatoSeguridad : public Clothes
{
private:

	static int totalZapatosSeguridad;


public:

	ZapatoSeguridad(Date date, string color, string size) : Clothes(date, color, size) { totalZapatosSeguridad++; }
	~ZapatoSeguridad() { totalZapatosSeguridad--; }

	int GetTotalZapatosSeguridad() { return totalZapatosSeguridad; }
};