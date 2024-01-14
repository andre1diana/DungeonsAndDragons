#pragma once
#include"Action.h"
#include"Interactable.h"

class Object :
	public Action, public Interactable
{
public:
	Object(std::string action, std::string obj, int points, std::string ab) :
		Action{ action }, Interactable{ obj, points, ab } {}
	Object(const Object& obj);
	virtual ~Object() {}
};

