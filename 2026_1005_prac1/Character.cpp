#include "Character.h"
#include "config.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//コンストラクタ
Character::Character()
{
	hp = MAX_HP;

	attack = rand() % (MAX_LEVEL - MIN_LEVEL + 1) + MIN_LEVEL;
	
	defense = rand() % (MAX_LEVEL - MIN_LEVEL + 1) + MIN_LEVEL;
	
	evasion = rand() % (MAX_LEVEL - MIN_LEVEL + 1) + MIN_LEVEL;
}

//ステータス表示
void Character::ShowState()
{
	cout << "HP：" << hp << endl;
	cout << "攻撃力：" << attack << endl;
	cout << "防御力：" << defense << endl;
	cout << "回避力：" << evasion << endl;
}

//攻撃
void Character::Attack(Character &target)
{
	//ランダムな攻撃値
	int randAtk = rand() % (ATTACK_MAX - ATTACK_MIN + 1) + ATTACK_MIN;
	int AttackValue = attack + randAtk;
	
	cout << "攻撃値は" << AttackValue << endl;

	if (AttackValue <= target.evasion)
	{
		cout << "攻撃を回避しました。\nダメージは０です。" << endl;
		return;
	}
	else
	{
		//ダメージ計算
		int damage = AttackValue - target.defense;
		if (damage < 0)
		{
			damage = 0;
		}

		target.hp -= damage;

		cout << "攻撃成功！！\nダメージ：" << damage << "点です" << endl;

		//生存判定
		if (target.hp < DEAD_HP)
		{
			target.hp = 0;
		}
	}
}

//回復
void Character::Recovrey()
{
	int randHeal = rand() % (ATTACK_MAX - ATTACK_MIN + 1) + ATTACK_MIN;
	hp + randHeal;

	if (hp > MAX_HP)
	{
		hp = MAX_HP;
	}
}