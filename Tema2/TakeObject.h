#pragma once
#include "Object.h"
#include"DungeonMaster.h"
#include<iostream>

class TakeObject :
    public Object
{
public:
    TakeObject(std::string action, std::string obj, int points, std::string ab) : Object{ action, obj, points, ab } {};
    ~TakeObject() {}
    bool doAction() override;
};

