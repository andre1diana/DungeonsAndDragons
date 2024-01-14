#include "Logger.h"

void Logger::readRanksFromFile(std::string filename, Options* option)
{
	std::ifstream f(filename);
	if (!f.is_open())
	{
		std::cerr << "Error opening the file\n";
	}
	std::string rank;
	std::string ab1;
	std::string ab2;

	while (!f.eof())
	{
		f >> rank >> ab1 >> ab2;
		option->addRank(rank, std::make_pair(ab1, ab2));
	}
	f.close();
}

void Logger::readBackgroundsFromFile(std::string filename, Options* option)
{
	std::ifstream f(filename);
	if (!f.is_open())
	{
		std::cerr << "Error opening the file\n";
	}
	std::string background;
	std::string ab1;
	std::string ab2;

	while (!f.eof())
	{
		f >> background >> ab1 >> ab2;
		option->addBrackground(background, std::make_pair(ab1, ab2));
	}
	f.close();
}

void Logger::readRacesFromFile(std::string filename, Options* option)
{
	std::ifstream f(filename);
	if (!f.is_open())
	{
		std::cerr << "Error opening the file\n";
	}
	std::string race;
	int val;
	std::string ab2;

	while (!f.eof())
	{
		f >> race >> val >> ab2;
		option->addRace(race, std::make_pair(val, ab2));
	}
	f.close();
}

void Logger::readScenesFromFile(std::string filename, DungeonMaster* dm)
{
	std::ifstream f(filename);
	if (!f.is_open())
	{
		std::cerr << "Error opening the file\n";
	}
	std::string nume;
	std::string obj;
	std::string action;
	int actionPoints;
	std::string ability;
	int nr;
	while (!f.eof())
	{
		f >> nume >> nr;
		Room* room = new Room;
		room->setRoomName(nume);
		while (nr--)
		{
			f >> obj >> action >> actionPoints >> ability;
			ObjectsFactory factory;
			if (action == "fight")
			{
				NPC* npc = factory.makeNPC(obj, actionPoints, ability, NPC::EnemiesList[obj]);
				room->addNPC(npc);
			}
			else
			{
				Object* object = factory.makeObject(obj, action, actionPoints, ability);
				room->addObjects(object);
			}
		}
		dm->scene.rooms.push_back(*room);
	}
}

std::map<std::string, int> NPC::EnemiesList;
void Logger::readEnemiesFromFIle(std::string filename)
{
	std::ifstream f(filename);
	if (!f.is_open())
	{
		std::cerr << "Error opening the file\n";
	}
	std::string name;
	int hp;
	while (!f.eof())
	{
		f >> name >> hp;
		NPC::EnemiesList.insert_or_assign(name, hp);
	}
}

void Logger::printMessage(std::string message)
{
	std::cout << message << std::endl;
}

void Logger::PrintErrorCode(int errorCode)
{
	std::cout << errorCode << " : ";
}

