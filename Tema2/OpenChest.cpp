#include "OpenChest.h"

bool OpenChest::doAction()
{
	DungeonMaster& dm = DungeonMaster::getInstance();
	if (dm.dice.outcome<Object>(dm.getPlayer().getAbilityModifier("charisma"), this))
	{
		std::cout << "Congratulations! You opened the chest!";
		return true;
	}
	return false;
}
