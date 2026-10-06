#pragma once
#include "Player.h"
#include "Enemy.h"
class Trun
{
private:
	Player* player;
	Enemy* enemy;
public:
	Trun(Player* p, Enemy* e);

	void Execute();
};

