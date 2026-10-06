#include "Trun.h"
#include "config.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Trun::Trun(Player* p, Enemy* e)
{
	player = p;
	enemy = e;
}

void Trun::Execute()
{
	player->Action(*enemy);

	if (!enemy->IsAlive())
	{
		return;
	}

	enemy->Action(*player);
}