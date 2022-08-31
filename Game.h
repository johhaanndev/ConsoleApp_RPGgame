#pragma once

#include "Functions.h"
#include "Character.h"

#include <ctime>

class Game
{
public:
	Game();
	virtual ~Game();

	// Operators

	// Functions
	void InitGame();
	void MainMenu();

	// Accessors
	bool GetPlaying() const { return this->playing; };

	// Modifiers

private:
	// Variables
	int choice;
	bool playing;
	
	// Character reference
	Character character;
};

