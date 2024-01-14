#pragma once
#include"PlayerCharacter.h"
#include<iostream>
#include"Options.h"
#include"MyException.h"

class PlayerBuilder
{
public:
	PlayerBuilder() = default;
	~PlayerBuilder() {}

	friend std::ostream& operator<<(std::ostream&, const std::vector<std::string>&);

	void buildCharacter(PlayerCharacter& character, const Options& option);

	void chooseName(PlayerCharacter& character);
	void chooseRank(PlayerCharacter& character, const Options& option);
	void chooseRace(PlayerCharacter& character, const Options& option);
	void chooseBackground(PlayerCharacter& character, const Options& option);
	void setAbilities(PlayerCharacter& character);
};
