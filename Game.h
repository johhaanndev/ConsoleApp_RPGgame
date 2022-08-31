#pragma once

#include "Functions.h"
#include "Character.h"

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

class Game
{
public:
	Game();
	virtual ~Game();

	// Operators

	// Functions
	void MainMenu();

	// Accessors
	bool GetPlaying() const { return this->playing; };

	// Modifiers

private:
	// Variables
	int choice;
	bool playing;
};

