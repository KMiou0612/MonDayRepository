#pragma once
#include "Player.h"
#include "CPU.h"
#include "CardManager.h"
class Trun
{
public:
	//Player'sTurn
	bool PlayPlayerTrun(Player* player, CardManager* cardmanager);
	//Cpu'sTurn
	void PlayCpuTurn(Player* player, CPU* cpu, CardManager* cardManager);
};

