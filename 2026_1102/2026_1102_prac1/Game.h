#pragma once
#include "Player.h"
#include "Enemy.h"

class Game
{
private:
	Player player;
	Enemy enemy;
public:
	void Run();
};

