#include "Enemy.h"
#include "Config.h"
#include <iostream>
#include <string>

Enemy::Enemy(const std::string name) :name(name), hp(100)
{
	std::cout << name << "‚ªoŒ»‚µ‚Ü‚µ‚½B\n";
}

Enemy::~Enemy(){}

void Enemy::Damage()
{
	hp -= DAMAGE;
}

int GetHp()
{

}