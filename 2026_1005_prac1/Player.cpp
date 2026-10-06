#include "Player.h"
#include <iostream>
#include "config.h"
using namespace std;

//Player::Player(int hp, int attack, int defence, int evasion)
//{
	//plyHp = hp;
	//plyAtk = attack;
	//plyDef = defence;
	//plyEvs = evasion;
//}

//int Player::choice()
//{
	//cout << "このターンにすることを選択してください\n";
	//cout << "1で攻撃\n";
	//cout << "2で回復\n";
//}

//コンストラクタ
Player::Player() :Character() {}

//プレイヤーの行動
void Player::Action(Character& target)
{
	int choice;

	cout << "\n【プレイヤーのターン】\n" << "１：攻撃\n２：回復\n＞＞" << endl;

	while (true)
	{
		cin >> choice;
		if (PLAYER_ATTACK > choice || PLAYER_HEAL < choice)
		{
			cout << "選択肢以外の数値です。再度入力してください。 " << endl;
		}
		else
		{
			break;
		}
	}

	if (choice == PLAYER_ATTACK)
	{

	}
	else if (choice == PLAYER_HEAL)
	{

	}
}