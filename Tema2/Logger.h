#pragma once
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"Options.h"
#include"DungeonMaster.h"
#include"OpenDoor.h"
#include"ReadBook.h"
#include"OpenChest.h"
#include"ObjectsFactory.h"
#include"NPC.h"

class Logger
{
public:
	Logger() = default;
	~Logger() {}

	void readRanksFromFile(std::string filename,  Options* option);
	void readBackgroundsFromFile(std::string filename,  Options* option);
	void readRacesFromFile(std::string filename,  Options* option);

	void readScenesFromFile(std::string filename, DungeonMaster* scene);
	void readEnemiesFromFIle(std::string filename);

	void printMessage(std::string message);
	void PrintErrorCode(int errorCode);
};

