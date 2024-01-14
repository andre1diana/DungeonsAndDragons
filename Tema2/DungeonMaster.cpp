#include "DungeonMaster.h"

DungeonMaster* DungeonMaster::instance = nullptr;

DungeonMaster& DungeonMaster::getInstance()
{
	if (DungeonMaster::instance == nullptr)
	{
		DungeonMaster::instance = new DungeonMaster();
	}
	return *DungeonMaster::instance;
}

void DungeonMaster::destroyInstance()
{
	if (DungeonMaster::instance != nullptr)
	{
		delete DungeonMaster::instance;
		DungeonMaster::instance = nullptr;
	}
}

void DungeonMaster::changeScene(Scene newScene)
{
	scene = newScene;
}

PlayerCharacter DungeonMaster::getPlayer()
{
	return player;
}
