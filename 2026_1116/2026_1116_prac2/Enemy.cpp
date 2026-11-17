#include "Enemy.h"
#include "Config.h"
#include <iostream>
#include <string>

Enemy::Enemy():hp(Config::MAX_HP){}

Enemy::~Enemy(){}

void Enemy::Damage(int damage)
{
	hp -= damage;
	if (hp < Config::MIN_HP)
	{
		hp = Config::MIN_HP;
	}
}

int Enemy::GetHp() const
{
	return hp;
}

bool Enemy::IsAlive() const
{
	return hp > 0;
}