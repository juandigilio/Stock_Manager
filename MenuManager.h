#pragma once

#include "ProgramLogic.h"


class MenuManager
{
private:

	CurrenScreen currentScreen;


public:

	MenuManager();
	~MenuManager();

	void StartUp();
	void RunMenu();
};

