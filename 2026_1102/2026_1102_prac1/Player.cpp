#include <iostream>
#include <limits>
#include "Config.h"
#include "Player.h"
using namespace std;

//コンストラクタ
Player::Player():Caracter(MAX_HP){}

//プレイヤーの行動を選択する

PlayerAction Player::SerectAction() const
{

	//入力
	int plyInput;

	while (true)
	{
		cout << "=========SerectAction==========" << endl;
		cout << PLAYER_SERECT_ATTACK << "攻撃" << endl;
		cout << PLAYER_SERECT_DEFENSE << "防御" << endl;
		cout << PLAYER_SERECT_HEAL << "回復" << endl;

		cin >> plyInput;

		if (plyInput == PLAYER_SERECT_ATTACK)
		{
			return PlayerAction::Attack;
		}
		if (plyInput == PLAYER_SERECT_DEFENSE)
		{
			return PlayerAction::Defense;
		}
		if (plyInput == PLAYER_SERECT_HEAL)
		{
			return PlayerAction::Heal;
		}
		if (plyInput < PLAYER_SERECT_ATTACK || plyInput > PLAYER_SERECT_HEAL)
		{

		}
	}
}