#pragma once

#include "LlaveFija.h"


class CombinadaImperial : public LlaveFija
{
private:

	static int totalComnbinadasImperiales;

	int numerator1;
	int denominator1;
	int numerator2;
	int denominator2;

	
public:

	CombinadaImperial(Date date, string brand, int numerator1, int denominator1, int numerator2, int denominator2) : LlaveFija(date, brand)
	{
		this->numerator1 = numerator1; 
		this->denominator1 = denominator1;
		this->numerator2 = numerator2;
		this->denominator2 = denominator2;
		totalComnbinadasImperiales++;
	}

	~CombinadaImperial() { totalComnbinadasImperiales--; }

	int GetNumerator1() { return numerator1; }
	int GetDenominator1() { return denominator1; }
	int GetNumerator2() { return numerator2; }
	int GetDenominator2() { return denominator2; }
};

