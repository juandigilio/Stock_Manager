#pragma once

#include "Tool.h"


class Destornillador : public Tool
{
private:

	static int totalDestornilladores;

	string color;


public:

	Destornillador(Date date, string brand, string color) : Tool(date, brand) { this->color = color; totalDestornilladores++; }
	~Destornillador() { totalDestornilladores--; }

	int GetTotalDestornilladores() { return totalDestornilladores; }

	string GetColor() { return color; }
};

