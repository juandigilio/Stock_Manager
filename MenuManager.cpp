#include "MenuManager.h"

#include "raylib.h"

MenuManager::MenuManager()
{
	currentScreen = CurrenScreen::MAINMENU;
}

MenuManager::~MenuManager()
{

}

void MenuManager::StartUp()
{
	srand(static_cast<unsigned>(time(NULL)));

	SetConfigFlags(FLAG_MSAA_4X_HINT);

	InitWindow(1024, 768, "Stock Manager");

	InitAudioDevice();

	//Menu::InitMenu();

	//PlayMusicStream(menuMusic);
}

void MenuManager::RunMenu()
{
	StartUp();

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(RAYWHITE);

		switch (currentScreen)
		{
		case CurrenScreen::MAINMENU:
		{
			//Menu::ShowMenu(currentSceen);
			break;
		}
		case CurrenScreen::ADDITEM:
		{
			//GameLoop::Play(player, enemies, currentSceen);
			break;
		}
		case CurrenScreen::DELETEITEM:
		{
			//FinalResults::ShowResults(player, currentSceen);
			break;
		}
		case CurrenScreen::EXIT:
		{
			//EnemyUtilities::DeleteEnemies(enemies);
			CloseWindow();
			break;
		}
		}

		EndDrawing();
	}

	UnloadTextures(player);
}
