#pragma once

#include "Clothes.h"


class Chaqueta : public Clothes
{
private:

	static int totalChaquetas;


public:

	Chaqueta(string color, string size) : Clothes(color, size) { totalChaquetas++; }
	~Chaqueta() { totalChaquetas--; }

	int GetTotalChaquetas() { return totalChaquetas; }
};