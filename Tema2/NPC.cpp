#include "NPC.h"

bool NPC::isDefeated() const
{
	if (hitPoints == 0)
		return true;
	return false;
}

void NPC::setHitPointsByType()
{
	hitPoints = EnemiesList[name];
}

int NPC::getActionPoints()
{
	return actionPoints;
}
