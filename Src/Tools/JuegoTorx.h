#pragma once

#include "Tool.h"


class JuegoTorx : public Tool
{
private:

	static int totalJuegosTorx;

	int size;


public:

	JuegoTorx(Date date, string brand, int size) : Tool(date, brand) { this->size = size; totalJuegosTorx++; }
	~JuegoTorx() { totalJuegosTorx--; }

	int GetTotalJuegosTorx() { return totalJuegosTorx; }

	int GetSize() { return size; }
};

