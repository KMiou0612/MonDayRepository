#pragma once
#include <iostream>
#include <string>
#include "Config.h"

class Enemy
{
private:
	int hp;

public:
	Enemy();
	~Enemy();

	void Damage(int damage);

	int GetHp() const;

	bool IsAlive() const;

};

