#pragma once
#include<string>

class Action
{
protected:
	std::string action;
public:
	Action(std::string act) : action{ act } {}
	Action() = default;
	virtual ~Action() {}

	virtual bool doAction() = 0;
	std::string getAction();
};

