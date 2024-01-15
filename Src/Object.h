#pragma once

#include <iostream>

using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};

class Object
{
protected:

	Date date;


public:

	Object(Date date) { this->date = date; }
	virtual ~Object() {}

	Date GetDate() { return date; }
};

