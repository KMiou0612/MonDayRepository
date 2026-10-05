#pragma once
#include "Character.h"
#include "config.h"
class Player : public Character
{
private:
	int ChoiceNum;
public:
	Player(int hp, int attack, int defence, int evasion);
	int choice();
};

