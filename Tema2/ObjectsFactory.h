#pragma once
#include<string>
#include"Object.h"
#include"OpenChest.h"
#include"OpenDoor.h"
#include"ReadBook.h"
#include"TakeObject.h"
#include"FightEnemy.h"
#include"InteractPerson.h"
#include"OpenPortal.h"

class ObjectsFactory
{
public:
	Object* makeObject(std::string obj, std::string action, int points, std::string ab)
	{
		if (obj == "Door" && action == "open")
			return new OpenDoor(action, obj, points, ab);
		if (obj == "Book" && action == "read")
			return new ReadBook(action, obj, points, ab);
		if (obj == "Chest" && action == "open")
			return new OpenChest(action, obj, points, ab);
		if (obj == "Portal" && action == "open")
			return new OpenPortal(action, obj, points, ab);
		if (action == "take")
			return new TakeObject(action, obj, points, ab);
		if (action == "interact")
			return new InteractPerson(action, obj, points, ab);			
	}

	NPC* makeNPC(std::string obj, int points, std::string ab, int n)
	{
		return new FightEnemy(obj, points, ab, n);
	}
};

