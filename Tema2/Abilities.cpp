#include "Abilities.h"

void Abilities::initiateAbilities()
{
	scoreAbilities.insert({ "strength", std::make_pair(0, 0) });
	scoreAbilities.insert({ "dexterity", std::make_pair(0, 0) });
	scoreAbilities.insert({ "constitution", std::make_pair(0, 0) });
	scoreAbilities.insert({ "intelligence", std::make_pair(0, 0) });
	scoreAbilities.insert({ "wisdom", std::make_pair(0, 0) });
	scoreAbilities.insert({ "charisma", std::make_pair(0, 0) });
}

void Abilities::setAbility(std::string ability, int value)
{
	scoreAbilities[ability].first = value;
	if (scoreAbilities[ability].first < 10)
	{
		scoreAbilities[ability].second = (scoreAbilities[ability].first - 11) / 2;
	}
	else
	{
		scoreAbilities[ability].second = (scoreAbilities[ability].first - 10) / 2;
	}
}

void Abilities::increaseAbility(std::string ab, int value)
{
	setAbility(ab, scoreAbilities[ab].first + value);
}

std::map<std::string, std::pair<int, int>> Abilities::getAbilities()
{
	return scoreAbilities;
}
