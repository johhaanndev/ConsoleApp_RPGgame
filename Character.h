#pragma once

#include <string>

class Character
{
public:
	Character();
	virtual ~Character();

	// Operators

	// Functions

	// Accessors

	// Modifiers

private:
	double xPos;
	double yPos;

	string name;
	int level;
	int exp;
	int hp;
	int hpMax;
	int stamina;
	int damageMin;
	int damageMax;
	int defense;
};

