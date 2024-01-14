#pragma once
#include<vector>
#include"Room.h"

class Scene
{
private:
	int currentRoom;

public:
	Scene() { currentRoom = 0; };
	std::vector<Room> rooms;
	void goNextRoom();
	Room* getCurrentRoom();
};

