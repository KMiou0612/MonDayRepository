#include "Caracter.h"
#include "Config.h"
#include <iostream>

using namespace std;

//コンストラクタ
Caracter::Caracter(int initialHp) :hp(initialHp) {}

//ステータス表示
void Caracter::ShowStatus(const string& name) const
{
	cout << name << "HP:" << hp << endl;
}

//ダメージを受ける
void Caracter::TakeDamage(int damage)
{
	hp -= damage;

	if (hp < 0)
	{
		hp = 0;
	}
}

int Caracter::GetHp() const
{
	return hp;
}

void Caracter::RecoverHp(int amount)
{
	hp += amount;

	if (hp > MAX_HP)
	{
		hp = MAX_HP;
	}
}