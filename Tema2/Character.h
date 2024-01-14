#pragma once
#include<string>
#include<vector>
#include<iostream>
#include"Abilities.h"

class Character
{
protected:
	std::string name;
	int hitPoints;

public:
	Character() {};
	Character(std::string n) : name { n } {}
	Character(std::string n, int h) : name{ n }, hitPoints{ h } {}
	~Character() {}

	void setName(std::string);
	virtual void setHitPoints(int);
	virtual void print();
	virtual bool isDefeated() const = 0;
	int getHitPoints();
};