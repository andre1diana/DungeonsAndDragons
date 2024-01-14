#pragma once
#include<map>
#include<string>

class Abilities
{
private:
	std::map < std::string, std::pair<int, int>> scoreAbilities; //1 - value, 2 - modifier

public:
	Abilities() {};
	~Abilities() {}

	void initiateAbilities();
	void setAbility(std::string ability, int value);
	void increaseAbility(std::string, int value);
	std::map < std::string, std::pair<int, int>> getAbilities();

};

