#pragma once
#include "Character.h"
#include "config.h"
class Player : public Character
{
private:
	int ChoiceNum;
public:

	/// <summary>
	/// Playerコンストラクタ
	/// </summary>
	Player();

	/// <summary>
	/// プレイヤーの行動選択
	/// </summary>
	/// <param name="target">対象キャラクター</param>
	void Action(Character& target);
};

