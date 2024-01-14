#include "OpenPortal.h"

bool OpenPortal::doAction()
{
	DungeonMaster& dm = DungeonMaster::getInstance();
	if (dm.dice.outcome<Object>(dm.getPlayer().getAbilityModifier("charisma"), this))
	{
		std::cout << "This is the game so far! Thank you for playing!\nTo be continued...\n";
		exit(1);
		return true;
	}
	return false;
}
