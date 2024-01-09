#pragma once

#include "Object.h"

class Clothes : public Object
{
private:

	static int totalClothes;


protected:

	string color;
	string size;

public:

	Clothes(string color, string size) : Object() { this->color = color; this->size = size; totalClothes++; }
	virtual ~Clothes() { totalClothes--; }

	int GetTotalClothes() { return totalClothes; }

	void SetColor(string color) { this->color = color; }
	string GetColor() { return color; }
	void SetSize(string size) { this->size = size; }
	string GetSize() { return size; }

};

