#pragma once
#include<vector>
#include"Scene.h"
#include"D20.h"
#include"PlayerCharacter.h"

class DungeonMaster
{
private:
	DungeonMaster() {}
	~DungeonMaster() {}
	static DungeonMaster* instance;

public:
	Scene scene;
	PlayerCharacter player;
	D20 dice;

	static DungeonMaster& getInstance();
	static void destroyInstance();

	void changeScene(Scene newScene);
	PlayerCharacter getPlayer();
};

