#include "Options.h"

std::vector<std::string> Options::getRankList() const
{
	return rankList;
}

std::vector<std::string> Options::getRaceList() const
{
	return raceList;
}

std::vector<std::string> Options::getBackgroundList() const
{
	return backgroundList;
}

std::vector<std::pair<std::string, std::string>> Options::getBackGroundBonuses() const
{
	return backgroundBonuses;
}

std::vector<std::pair<std::string, std::string>> Options::getRankBonuses() const
{
	return rankBonuses;
}

std::vector<std::pair<int, std::string>> Options::getRaceBonuses() const
{
	return raceBonuses;
}

void Options::addRank(std::string rank, std::pair<std::string, std::string> val)
{
	rankList.push_back(rank);
	rankBonuses.push_back(val);
}

void Options::addRace(std::string race, std::pair<int, std::string> val)
{
	raceList.push_back(race);
	raceBonuses.push_back(val);
}

void Options::addBrackground(std::string backgr, std::pair<std::string, std::string> val)
{
	backgroundList.push_back(backgr);
	backgroundBonuses.push_back(val);
}

