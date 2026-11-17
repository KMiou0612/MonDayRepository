#include "GameTask.h"
#include <iostream>
#include <limits>
#include "Config.h"

void GameTask::Init()
{
	for (int i = 0; i < Config::ENEMY_INDEX; i++)
	{
		enemies.push_back(std::make_shared<Enemy>());
	}
}

void GameTask::Draw() const
{
	std::cout << "“G‚ÌHP:\n";
	for (int i = 0; i < enemies.size(); i++)
	{
		if (enemies[i]->IsAlive())
		{
			std::cout << "“G" << i + 1 << "HPF" << enemies[i]->GetHp() << "\n";
		}
		else
		{
			std::cout << "Œ‚”jÏ‚Ý\n";
		}
	}
}

void GameTask::Attack()
{
	int target;
	std::cout << "UŒ‚‚·‚é“G‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢i1`3j\n";

	if (!(std::cin >> target))
	{
		std::cout << "”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		return;

	}

	if (target < 1 || target > Config::ENEMY_INDEX)
	{
		std::cout << "“ü—Í‚µ‚½”Žš‚Í‘I‘ðo—ˆ‚Ü‚¹‚ñBÄ“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n";
		return;
	}

	std::shared_ptr<Enemy> targetEnemy = enemies[target - 1];

	if (!targetEnemy->IsAlive())
	{
		std::cout << "‚±‚Ì“G‚Í‚·‚Å‚É“|‚³‚ê‚Ä‚¢‚Ü‚·B\n";
		return;
	}

	std::cout << "UŒ‚‚·‚é“G‚ÍA" << target << "\n";

	targetEnemy->Damage(Config::DAMAGE);
	std::cout << "“G" << target << "‚Éí“¬ƒ_ƒ[ƒW"
		<< Config::DAMAGE << "‚ð—^‚¦‚Ü‚µ‚½B\n";
}

bool GameTask::IsGameClear() const
{
	for (const auto& enemy :enemies)
	{
		if (enemy->IsAlive())
		{
			return false;
		}
	}
	return true;
}

void GameTask::Run()
{
	Init();

	while (true)
	{
		Draw();
		Attack();
		if (IsGameClear())
		{
			std::cout << "GameClear\n";
			break;
		}
	}
}