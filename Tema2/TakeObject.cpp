#include "TakeObject.h"

bool TakeObject::doAction()
{
	DungeonMaster& dm = DungeonMaster::getInstance();
	if (dm.dice.outcome<Object>(dm.getPlayer().getAbilityModifier("strength"), this))
	{
		dm.getPlayer().addInventoryObject(objectName);
		std::cout << "Congratulations! Now you have a " << objectName << " in your inventory\n";
		return true;
	}
	return false;
}
