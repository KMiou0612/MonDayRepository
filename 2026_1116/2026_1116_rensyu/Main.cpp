#include <iostream>
#include <memory>
#include "Enemy.h"

int main(void)
{
	std::shared_ptr<Enemy> enemy = std::make_shared<Enemy>("ドラゴン");

	std::cout << "所有者の数：" << enemy.use_count() << "\n";

	{
		std::shared_ptr<Enemy> enemyB = enemy;

		//コピー
		std::cout << "コピーの数：" << enemy.use_count() << "\n";

		enemyB->Draw();
	}

	enemy->Draw();

	return 0;
}