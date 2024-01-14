#include "InteractPerson.h"

bool InteractPerson::doAction()
{
	DungeonMaster& dm = DungeonMaster::getInstance();
	if (dm.dice.outcome<Object>(dm.getPlayer().getAbilityModifier("intelligence"), this))
	{
		int n;
		std::cout << objectName << " : Adventurer! I'm in trouble. Goblins are attacking my village. Can you help?\n";
		std::cout << "Player : 1. Absolutely. Where are they?\n2. No, I don't want.\n";
		std::cin >> n;
		if (n == 1)
		{
			std::cout << objectName << " : East, in the woods. Please, rid us of them.\n";
			std::cin.get();
			std::cin.get();
			std::cout << "Character: I accept.I'll handle it. Any tips?\n";
			std::cin.get();
			std::cout << objectName << " : Watch for traps.Be careful.\n";
			std::cin.get();
			std::cout << "Character : Understood.I'll return after dealing with the goblins.\n";
			std::cin.get();
			std::cout << objectName << " : Thank you!Good luck, brave one!\n";
		}
		return true;
	}
	return false;
}
