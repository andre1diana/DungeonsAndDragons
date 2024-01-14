#pragma once
#include"Object.h"
#include"DungeonMaster.h"

class OpenDoor :
	public Object
{
public:
	OpenDoor(std::string action, std::string obj, int points, std::string ab) : Object{ action, obj, points, ab } {};
	~OpenDoor() {}

	bool doAction() override;
};

