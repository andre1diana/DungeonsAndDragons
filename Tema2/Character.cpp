#include "Character.h"

void Character::setName(std::string n)
{
	name = n;
}

void Character::setHitPoints(int n)
{
	hitPoints = n;
}

void Character::print()
{
	std::cout << "Character name : " << name;
	std::cout << "\nTotal hitPoints : " << hitPoints << std::endl;
}

int Character::getHitPoints()
{
	return hitPoints;
}
