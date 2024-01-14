#pragma once
#include"Object.h"
#include"NPC.h"
#include<vector>
#include<iostream>

class Room
{
private:
	std::string roomName;
	std::vector<Object*> objects;
	std::vector<NPC*> enemies;

public:
	Room() = default;
	~Room() {}
	Room(const Room& obj);
	
	void addObjects(Object* obj);
	void addNPC(NPC* npc);
	void addEnemy(NPC* enemy);
	void setRoomName(std::string);
	void displayRoom();
	void doAction(int decision);
};

