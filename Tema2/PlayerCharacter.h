#pragma once
#include "Character.h"
#include<string>
#include<vector>
#include"D20.h"

class PlayerCharacter :
    public Character
{
private:
    std::string race;
    std::string rank;
    std::string background;
    Abilities scoreAbilities;
    std::vector<std::string> inventoryObjects;

public:
    PlayerCharacter() { scoreAbilities.initiateAbilities(); }
    bool isDefeated() const override;
    void setRank(std::string, std::string ab1, std::string ab2);
    void setRace(std::string, int val, std::string ab);
    void setBackground(std::string, std::string, std::string);
    void setScoreAbilities(std::vector<int> values);
    void print() override;
    int calculateHitPoints();
    int getAbilityModifier(std::string ability);
    void addInventoryObject(std::string);
    //todo metoda care sa salveze caracterul intr-un fisier pe care sa-l pot folosi dupa
};

