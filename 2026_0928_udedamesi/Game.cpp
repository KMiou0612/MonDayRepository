#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Game.h"
#include "Config.h"

using namespace std;

Game::Game()
{
	//カードを作成してシャッフル
	cardManager.CreateCards();
	cardManager.ShuffleCards();
}

void Game::Start()
{
	//初期カードを配る
	DealInitialCards();
	//プレイヤーのターン
	bool playreTrunResult = trun.PlayPlayerTrun(&player, &cardManager);
	//CPUのターン
	if (playreTrunResult)
	{
		trun.PlayCpuTurn(&player, &cpu, &cardManager);
	}
	else
	{
		cout << "\nPlayerの負けです。\n";

		return;
	}
	//勝敗判定
	Showresult();
}

void Game::DealInitialCards()
{
	//プレイヤーとCPUに初期カードを配る
	for (int i = 0; i < START_DRAW_CARD; i++)
	{
		int playerCard = cardManager.DrawCard();
		player.AddCard(playerCard);
		int cpucard = cardManager.DrawCard();
		cpu.AddCard(cpucard);
	}
}

void Game::Showresult()
{
	cout << "\n=====================\n";
	cout << "ゲーム結果\n";
	cout << "======================\n";
	player.ShowStatus();
	cpu.ShowStatus();

	int playerTotal = player.GetTotal();
	int cpuTotal = cpu.GetTotal();

	if (cpuTotal >= BLACKJACK || playerTotal == BLACKJACK)
	{
		cout << "\nPlayer's Winner!!\n";
		return;
	}

	if (cpuTotal == BLACKJACK)
	{
		cout << "\nCPU's Winner!!\n";
		return;
	}

	int playerDistance = BLACKJACK - playerTotal;

	int cpuDistance = BLACKJACK - cpuTotal;

	if (playerDistance > cpuDistance)
	{
		cout << "\nPlayerの勝ちです。\n";
	}
	else if (playerDistance < cpuDistance)
	{
		cout << "\nCPUの勝ちです\n";
	}
	else
	{
		cout << "\n引き分けです。\n";
	}
}