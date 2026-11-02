#pragma once
#include "Caracter.h"
#include "EnemyAction.h"
class Enemy:public Caracter
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Enemy();

	/// <summary>
	/// 敵の行動を決定
	/// </summary>
	/// <returns>行動選択</returns>
	EnemyAction DecideAction() const;
};

