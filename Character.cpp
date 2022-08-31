#include "Character.h"

Character::Character()
{
	this->name = "";
	this->level = 0;
	this->exp = 0;
	this->expNext = 0;
	this->hp = 0;
	this->hpMax = 0;
	this->stamina = 0;
	this->damageMin = 0;
	this->damageMax = 0;
	this->defense = 0;
}

Character::~Character()
{
}

void Character::Initialize(std::string name, int level)
{
	this->name = name;
	this->level = level;
	this->exp = 0;
	this->expNext = 100;
	this->hp = 10;
	this->hpMax = 10;
	this->stamina = 10;
	this->damageMin = 2;
	this->damageMax = 4;
	this->defense = 1;
}
