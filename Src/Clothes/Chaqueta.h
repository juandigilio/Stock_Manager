#pragma once

#include "Clothes.h"


class Chaqueta : public Clothes
{
private:

	static int totalChaquetas;


public:

	Chaqueta(Date date, string color, string size) : Clothes(date, color, size) { totalChaquetas++; }
	~Chaqueta() { totalChaquetas--; }

	int GetTotalChaquetas() { return totalChaquetas; }
};