#pragma once

#include "Tool.h"


class JuegoAllen : public Tool
{
private:

	static int totalJuegosAllen;

	int size;

public:

	JuegoAllen(Date date, string brand, int size) : Tool(date, brand) { this->size = size; totalJuegosAllen++; }
	~JuegoAllen() { totalJuegosAllen--; }

	int GetTotalJuegosAllen() { return totalJuegosAllen; }

	int GetSize() { return size; }
};

