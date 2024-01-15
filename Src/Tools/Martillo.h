#pragma once

#include "Tool.h"


class Martillo : public Tool
{
private:

	static int totalMartillos;

	int size;


public:

	Martillo(Date date, string brand, int size) : Tool(date, brand) { this->size = size; totalMartillos++; }
	~Martillo() { totalMartillos--; }

	int GetTotalMartillos() { return totalMartillos; }

	int GetSize() { return size; }
};

