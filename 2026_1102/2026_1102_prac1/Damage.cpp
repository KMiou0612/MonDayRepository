#include "Damage.h"
#include "Config.h"

namespace Damage
{
	int CalculatePlaeryDamage(bool enemyDefending)
	{
		if (enemyDefending)
		{
			return PLAYEAR_DEFENSED_DAMAGE;
		}
	}

	int CalcukateEnemyDamage(bool playerDefending)
	{
		if (playerDefending)
		{
			return ENEMY_DEFENSED_DAMAGE;
		}
	}
}