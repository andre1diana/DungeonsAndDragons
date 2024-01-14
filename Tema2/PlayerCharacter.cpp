#include "PlayerCharacter.h"

bool PlayerCharacter::isDefeated() const
{
    if (hitPoints == 0)
        return true;
    return false;
}

void PlayerCharacter::setRank(std::string r, std::string ab1, std::string ab2)
{
	rank = r;
	scoreAbilities.increaseAbility(ab1, 2); //Proficiency
	scoreAbilities.increaseAbility(ab2, 2); //Proficiency
}

void PlayerCharacter::setRace(std::string r, int val, std::string ab)
{
	race = r;
	if (ab == "all")
	{
		scoreAbilities.increaseAbility("strength", val);
		scoreAbilities.increaseAbility("dexterity", val);
		scoreAbilities.increaseAbility("constitution", val);
		scoreAbilities.increaseAbility("intelligence", val);
		scoreAbilities.increaseAbility("wisdom", val);
		scoreAbilities.increaseAbility("charisma", val);
	}
	else
	{
		scoreAbilities.increaseAbility(ab, val);
	}
}

void PlayerCharacter::setBackground(std::string b, std::string ab1, std::string ab2)
{
	background = b;
	scoreAbilities.increaseAbility(ab1, 2); //Proficiency
	scoreAbilities.increaseAbility(ab2, 2); //Proficiency
}

void PlayerCharacter::setScoreAbilities(std::vector<int> values)
{
	scoreAbilities.increaseAbility("strength", values[0]);
	scoreAbilities.increaseAbility("dexterity", values[1]);
	scoreAbilities.increaseAbility("constitution", values[2]);
	scoreAbilities.increaseAbility("intelligence", values[3]);
	scoreAbilities.increaseAbility("wisdom", values[4]);
	scoreAbilities.increaseAbility("charisma", values[5]);
}

void PlayerCharacter::print()
{
	std::cout << "Your character details are : \n";
	std::cout << "Name : " << name << std::endl;
	std::cout << "Rank : " << rank << std::endl;
	std::cout << "Race : " << race << std::endl;
	std::cout << "Background : " << background << std::endl;
	std::cout << "ScoreAbilities : \n";
	for (auto ab : scoreAbilities.getAbilities())
	{
		std::cout << ab.first << " " << ab.second.first << " " << ab.second.second << "\n";
	}
	std::cout << "HitPoints : " << hitPoints << std::endl;
}

int PlayerCharacter::calculateHitPoints()
{
	int n = 10;
	for (auto ab : scoreAbilities.getAbilities())
	{
		n += ab.second.first;
	}
	return n;
}

int PlayerCharacter::getAbilityModifier(std::string ability)
{
	return scoreAbilities.getAbilities()[ability].second;
}

void PlayerCharacter::addInventoryObject(std::string obj)
{
	inventoryObjects.push_back(obj);
}
