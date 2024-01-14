#pragma once
#include "NPC.h"
#include"DungeonMaster.h"
#include<time.h>
#include<iostream>

class FightEnemy :
    public NPC
{
public:
    FightEnemy(std::string obj, int points, std::string ab, int hp) : NPC(obj, points, ab, hp) {}
    bool fight() override;
};

