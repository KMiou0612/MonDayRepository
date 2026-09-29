#pragma once
#include "CPU.h"
#include "CardManager.h"
#include "Trun.h"
#include "Config.h"

using namespace std;

class Game
{
private:
	//カード管理
	CardManager cardManager;

	//Player
	Player player;

	//CPU
	CPU cpu;

	//ターン管理
	Trun trun;

	//カードを配る
	void DealInitialCards();
	//勝敗判定
	void Showresult();

public:
	//コンストラクタ
	Game();

	//ゲーム開始
	void Start();

};

