#pragma once
#include "Object.h"
#include"DungeonMaster.h"
#include<iostream>

class OpenChest :
	public Object
{
public:
	OpenChest(std::string action, std::string obj, int points, std::string ab) : Object{action, obj, points, ab} {};
	~OpenChest() {}

	bool doAction() override;
};

