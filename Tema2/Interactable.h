#pragma once
#include<string>

class Interactable
{
protected:
	std::string objectName;
	int actionPoints;
	std::string ability;

public:
	Interactable(std::string obj, int act, std::string ability) : objectName{ obj }, actionPoints{ act }, ability{ ability } {}
	Interactable() = default;
	virtual ~Interactable() {}

	std::string getObject();
	int getActionPoints();
	std::string getAbility();
};

