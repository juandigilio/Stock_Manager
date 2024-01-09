#pragma once

#include "LlaveFija.h"


class FijaImperial : public LlaveFija
{
private:

	static int totalFijasImperiales;

	int numerator;
	int denominator;


public:

	FijaImperial(string brand, int numerator, int denominator) : LlaveFija(brand) { this->numerator = numerator; this->denominator = denominator; totalFijasImperiales++; }
	~FijaImperial() { totalFijasImperiales--; }

	int GetTotalFijasImperailes() { return totalFijasImperiales; }
	int GetNumerator() { return numerator; }
	int GetDenominator() { return denominator; }
};

