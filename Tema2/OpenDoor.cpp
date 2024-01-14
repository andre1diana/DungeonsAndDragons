#include "OpenDoor.h"


bool OpenDoor::doAction()
{
	DungeonMaster& dm = DungeonMaster::getInstance();
	if (dm.dice.outcome<Object>(dm.getPlayer().getAbilityModifier("dexterity"), this))
	{
		dm.scene.goNextRoom();
		return true;
	}
	return false;
}
