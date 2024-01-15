#pragma once

#include "Tool.h"

class LlaveCanio : public Tool
{
private:

	static int totalLlavesCanio;

	int size;


public:

	LlaveCanio(Date date, string brand, int size) : Tool(date, brand) { this->size = size; totalLlavesCanio++; }
	~LlaveCanio() { totalLlavesCanio--; }

	int GetTotalLlavesCanio() { return totalLlavesCanio; }

	int GetSize() { return size; }
};

