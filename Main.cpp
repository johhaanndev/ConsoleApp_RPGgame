#include "Functions.h"
#include "Game.h"

using namespace std;

int main()
{
	srand(time(NULL));

	Game game;

	while (game.GetPlaying())
	{
		game.MainMenu();
	}

	return 0;
}