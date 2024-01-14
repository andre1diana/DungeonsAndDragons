#include "ReadBook.h"

bool ReadBook::doAction()
{
	DungeonMaster& dm = DungeonMaster::getInstance();
	if (dm.dice.outcome<Object>(dm.getPlayer().getAbilityModifier("intelligence"), this))
	{
		std::cout << "Congratulations! You have read this book about astronomy! Now you must be a master in this field\n";
		return true;
	}
	return false;
}
