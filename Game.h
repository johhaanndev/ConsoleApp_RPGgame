#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

#include "Functions.h"

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

