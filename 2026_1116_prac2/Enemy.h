#pragma once
#include <iostream>
#include <string>
#include "Config.h"

class Enemy
{
private:
	std::string name;
	int hp;

public:
	Enemy(const std::string name);
	~Enemy();

	void Damage();

	int GetHp();

	bool IsAlive();

	void ShowStatus() const;
};

