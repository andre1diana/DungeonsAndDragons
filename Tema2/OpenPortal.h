#pragma once
#include "Object.h"
#include"DungeonMaster.h"

class OpenPortal :
    public Object
{
public:
    OpenPortal(std::string action, std::string obj, int points, std::string ab) : Object{ action, obj, points, ab } {}
    ~OpenPortal() {}
    bool doAction() override;
};

