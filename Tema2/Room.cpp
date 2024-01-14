#include "Room.h"

Room::Room(const Room& obj)
{
	roomName = obj.roomName;
	objects = obj.objects;
	enemies = obj.enemies;
}

void Room::addObjects(Object* obj)
{
	objects.push_back(obj);
}

void Room::addNPC(NPC* npc)
{
	enemies.push_back(npc);
}

void Room::addEnemy(NPC* enemy)
{
	enemies.push_back(enemy);
}

void Room::setRoomName(std::string n)
{
	roomName = n;
}

void Room::displayRoom()
{
	std::cout << roomName << std::endl;
	int i = 0;
	for (auto obj : objects)
	{
		std::cout << i << ". " << obj->getAction() << " <" << obj->getObject() << "> -> roll ";
		std::cout << obj->getActionPoints() << " " << obj->getAbility() << std::endl;
		i++;
	}
	for (auto enemy : enemies)
	{
		std::cout << i << ". " << "Fight <" << enemy->getObject() << "> -> roll ";
		std::cout << enemy->getActionPoints() << " " << enemy->getAbility() << std::endl;
		i++;
	}
}

void Room::doAction(int decision)
{
	if (decision < objects.size())
	{
		if(objects[decision]->doAction())
			objects.erase(objects.begin() + decision);
	}
	else
	{
		int position = decision - objects.size();
		if(enemies[position]->fight())
			enemies.erase(enemies.begin() + position);
	}
}
