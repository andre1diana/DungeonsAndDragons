#include "FightEnemy.h"

bool FightEnemy::fight()
{
	srand(time(0));
	DungeonMaster& dm = DungeonMaster::getInstance();
	while (true)
	{
		if (dm.dice.outcome<FightEnemy>(dm.player.getAbilityModifier("wisdom"), this))
		{
			//todo bug:hitP = 0
			if (hitPoints <= 0)
			{
				std::cout << "You defeated the monster!\n";
				return true;
			}
			hitPoints -= rand() % hitPoints;
		}
		else 
		{
			if (dm.player.getHitPoints() <= 0)
			{
				std::cout << "Ooh! You died! Your journey ends here!\n";
				exit(1);
			}
			int newHP = dm.player.getHitPoints() - (rand() % dm.player.getHitPoints());
			dm.player.setHitPoints(newHP);
		}
	}
}
