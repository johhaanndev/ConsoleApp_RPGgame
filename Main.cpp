#include "Functions.h"
#include "Game.h"

using namespace std;

int main()
{
	srand(time(NULL));

	Game game;
	game.InitGame();

	while (game.GetPlaying())
	{
		game.MainMenu();
	}

	return 0;
}