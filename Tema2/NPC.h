#pragma once
#include "Character.h"
#include"Interactable.h"
#include<map>
#include<string>

class NPC :
    public Character, public Interactable
{
private:

public:
    //all possible enemies list with afferent hitPoints
    static std::map<std::string, int> EnemiesList;

    NPC() = default;
    NPC(std::string obj, int points, std::string ab, int hp) : Character(obj, hp), Interactable(obj, points, ab) {
    }
    ~NPC() {}

    bool isDefeated() const override;

    void setHitPointsByType();
    virtual bool fight() = 0;
    int getActionPoints();
};

