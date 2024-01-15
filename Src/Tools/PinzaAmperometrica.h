#pragma once

#include "Tool.h"


class PinzaAmperometrica : public Tool
{
private:

	static int totalPinzasAmperometricas;


public:

	PinzaAmperometrica(Date date, string brand) : Tool(date, brand) { totalPinzasAmperometricas++; }
	~PinzaAmperometrica() { totalPinzasAmperometricas--; }

	int GetTotalPinzasAmperometricas() { return totalPinzasAmperometricas; }
};

