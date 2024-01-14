#include "PlayerBuilder.h"

std::ostream& operator<<(std::ostream& out, const std::vector<std::string>& option)
{
	for (int i = 0; i < option.size(); i++)
	{
		out << i << ". " << option[i] << std::endl;
	}
	out << "Choose a number between 0 and " << option.size() - 1 << " : \n";
	return out;
}

void PlayerBuilder::buildCharacter(PlayerCharacter& character, const Options& option)
{
	chooseName(character);
	chooseRace(character, option);
	chooseRank(character, option);
	chooseBackground(character, option);
	setAbilities(character);
	character.setHitPoints(character.calculateHitPoints());
}

void PlayerBuilder::chooseName(PlayerCharacter& character)
{
	std::string name;
	std::cout << "Choose your character's name : ";
	std::cin >> name;
	character.setName(name);
}

void PlayerBuilder::chooseRank(PlayerCharacter& character, const Options& option)
{
	int n = 0;
	std::cout << "Rank optons : \n" << option.getRankList();
	//std::cin >> n;
	while (true)
	{
		std::cin >> n;
		try
		{
			if (n >= option.getRankList().size())
				throw MyException("Index out of range! Try again!\n", 1001);
			else break;
		}
		catch (MyException exp)
		{
			exp.printErrorMessage();
		}
	}

	std::cout << "*******************************************************\n";
	character.setRank(option.getRankList()[n], option.getRankBonuses()[n].first, option.getRankBonuses()[n].second);
}

void PlayerBuilder::chooseRace(PlayerCharacter& character, const Options& option)
{
	int n;
	std::cout << "Race options : \n" << option.getRaceList();
	while (true)
	{
		std::cin >> n;
		try
		{
			if (n >= option.getRaceList().size())
				throw MyException("Index out of range! Try again!\n", 1001);
			else break;
		}
		catch (MyException exp)
		{
			exp.printErrorMessage();
		}
	}
	std::cout << "*******************************************************\n";
	character.setRace(option.getRaceList()[n], option.getRaceBonuses()[n].first, option.getRaceBonuses()[n].second);
}

void PlayerBuilder::chooseBackground(PlayerCharacter& character, const Options& option)
{
	int n;
	std::cout << "Background options : \n" << option.getBackgroundList();
	while (true)
	{
		std::cin >> n;
		try
		{
			if (n >= option.getBackgroundList().size())
				throw MyException("Index out of range! Try again!\n", 1001);
			else break;
		}
		catch (MyException exp)
		{
			exp.printErrorMessage();
		}
	}
	std::cout << "*******************************************************\n";
	character.setBackground(option.getBackgroundList()[n], option.getBackGroundBonuses()[n].first, option.getBackGroundBonuses()[n].second);
}

void PlayerBuilder::setAbilities(PlayerCharacter& character)
{
	int n;
	std::vector<int> values;
	std::cout << "Choose ability values(without bonuses) in range (1, 30) : \n";
	std::cout << "Strength : ";
	std::cin >> n;
	values.push_back(n);
	std::cout << "Dexterity : ";
	std::cin >> n;
	values.push_back(n);
	std::cout << "Constitution : ";
	std::cin >> n;
	values.push_back(n);
	std::cout << "Intelligence : ";
	std::cin >> n;
	values.push_back(n);
	std::cout << "Wisdom : ";
	std::cin >> n;
	values.push_back(n);
	std::cout << "Charisma : ";
	std::cin >> n;
	values.push_back(n);
	std::cout << "*******************************************************\n";
	character.setScoreAbilities(values);
}
