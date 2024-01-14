#pragma once
#include "Object.h"
#include"DungeonMaster.h"
#include<iostream>

class ReadBook :
    public Object
{
public:
	ReadBook(std::string action, std::string obj, int points, std::string ab) : Object{ action, obj, points, ab } {};
	~ReadBook() {}

	bool doAction() override;
};

