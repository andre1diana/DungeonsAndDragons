#pragma once
#include "Object.h"
#include"DungeonMaster.h"
#include<iostream>

class InteractPerson :
    public Object
{
public:
    InteractPerson(std::string action, std::string obj, int points, std::string ab) : Object{ action, obj, points, ab } {}
    ~InteractPerson() {}
    bool doAction() override;
};

