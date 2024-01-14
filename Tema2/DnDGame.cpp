#include "DnDGame.h"

DnDGame*  DnDGame::instance = nullptr;

DnDGame& DnDGame::getInstance()
{
	if (DnDGame::instance == nullptr)
	{
		DnDGame::instance = new DnDGame;
	}
	return *DnDGame::instance;
}

void DnDGame::destoryInstance()
{
	if (DnDGame::instance != nullptr)
	{
		delete DnDGame::instance;
		DnDGame::instance = nullptr;
	}
}

void DnDGame::initGame()
{
	Options* options = new Options{};
	Logger* log{};
	log->readRacesFromFile("Race.txt", options);
	log->readRanksFromFile("Rank.txt", options);
	log->readBackgroundsFromFile("Background.txt", options);
	log->readScenesFromFile("Rooms.txt", &DungeonMaster::getInstance());
	log->readEnemiesFromFIle("EnemiesList.txt");
	PlayerCharacter Aria{};
	PlayerBuilder CharacterBuilder;
	CharacterBuilder.buildCharacter(Aria, *options);
	system("pause");
	system("cls");
	Aria.print();
	std::cout << "\n\nThe game just started! Enjoy :)\n";
	DungeonMaster::getInstance().player = Aria;

}

void DnDGame::play()
{
	initGame();
	DungeonMaster& dm = DungeonMaster::getInstance();
	while (dm.player.getHitPoints() && dm.scene.getCurrentRoom())
	{
		dm.scene.getCurrentRoom()->displayRoom();
		int decision;
		std::cin >> decision;
		dm.scene.getCurrentRoom()->doAction(decision);
	}
}
