#pragma once
#include<vector>
#include<string>

class Options
{
	std::vector<std::string> raceList;
	std::vector<std::pair<int, std::string>> raceBonuses;

	std::vector<std::string> rankList;
	std::vector<std::pair<std::string, std::string>> rankBonuses;

	std::vector<std::string> backgroundList;
	std::vector<std::pair<std::string, std::string>> backgroundBonuses;

public:
	Options() = default;

	std::vector<std::string> getRankList() const;
	std::vector<std::string> getRaceList() const;
	std::vector<std::string> getBackgroundList() const;

	std::vector<std::pair<std::string, std::string>> getBackGroundBonuses() const;
	std::vector<std::pair<std::string, std::string>> getRankBonuses() const;
	std::vector<std::pair<int, std::string>> getRaceBonuses() const;

	void addRace(std::string rank, std::pair<int, std::string> val);
	void addRank(std::string race, std::pair<std::string, std::string> val);
	void addBrackground(std::string backgr, std::pair<std::string, std::string> val);
	
};
