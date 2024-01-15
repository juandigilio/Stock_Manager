#pragma once

#include "Tool.h"


class Maza : public Tool
{
private:

	static int totalMazas;

	int size;


public:

	Maza(Date date, string brand, int size) : Tool(date, brand) { this->size = size; totalMazas++; }
	~Maza() { totalMazas--; }

	int GetTotalMazas() { return totalMazas; }
	
	int GetSize() { return size; }
};

