#pragma once
#include <iostream>
#include <string>
#include <iomanip>

class Character
{
public:
	Character();
	virtual ~Character();

	// Operators

	// Functions
	void Initialize(const std::string name);
	void PrintStats() const;
	void LevelUp();

	// Accessors
	inline const double& GetXPos() const { return this->xPos; };
	inline const double& GetYPos() const { return this->yPos; };
	inline const std::string& GetName() const { return this->name; };
	inline const int& GetLevel() const { return this->level; };
	inline const int& GetExp() const { return this->exp; };
	inline const int& GetExpNext() const { return this->expNext; };
	inline const int& GetHp() const { return this->hp; };
	inline const int& GetHpMax() const { return this->hpMax; };
	inline const int& GetStamina() const { return this->stamina; };
	inline const int& GetStaminaMax() const { return this->staminaMax; };
	inline const int& GetDamageMin() const { return this->damageMin; };
	inline const int& GetDamageMax() const { return this->damageMax; };
	inline const int& GetDefense() const { return this->defense; };

	// Modifiers

private:
	double xPos;
	double yPos;

	std::string name;
	int level;
	int exp;
	int expNext;

	int strength;
	int vitality;
	int dexterity;
	int intelligence;

	int hp;
	int hpMax;
	int stamina;
	int staminaMax;
	int damageMin;
	int damageMax;
	int defense;
	int luck;

	int statPoints;
	int skillPoints;
};

