#pragma once
#include "Caracter.h"
#include "PlayerAction.h"
class Player:public Caracter
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Player();

	PlayerAction SerectAction()const;
};