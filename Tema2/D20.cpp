#include "D20.h"

int D20::rollDice()
{
	srand(time(0));
	return (rand() % 19) + 1;
}

//bool D20::outcome(int abilityModifier, Object* object)
//{
//	std::cout << "Press ENTER to roll the dice!\n";
//	std::cin.get();
//	std::cin.get();
//	int value = rollDice();
//	std::cout << "Player rolled " << value;
//	std::cout << " -> +modifier => " << value + abilityModifier;
//	if (value + abilityModifier > object->getActionPoints())
//	{
//		std::cout << " Action result : HIT\n";
//		return true;
//	}
//	std::cout << " Action result : MISS\n";
//	return false;
//}
