#pragma once
#include<iostream>
#include"PlayerBuilder.h"
#include"DungeonMaster.h"
#include"PlayerCharacter.h"
#include"Options.h"
#include"Logger.h"


class DnDGame
{
private:
	static DnDGame* instance;
	DnDGame() {}
	~DnDGame() {}


public:
	static DnDGame& getInstance();
	static void destoryInstance();

	void initGame();
	void play();
};

