#pragma once
#include"IDice.h"
#include<iostream>
#include"PlayerCharacter.h"
#include"Object.h"
#include<time.h>

class D20 :
	public IDice
{
	
public:
	int rollDice() override;

	template<typename T>
	bool outcome(int abilityModifier, T* object);
};

template<typename T>
inline bool D20::outcome(int abilityModifier, T* object)
{
	std::cout << "Press ENTER to roll the dice!\n";
	std::cin.get();
	std::cin.get();
	int value = rollDice();
	std::cout << "Player rolled " << value;
	std::cout << " -> +modifier => " << value + abilityModifier;
	if (value + abilityModifier >= object->getActionPoints())
	{
		std::cout << " Action result : HIT\n";
		return true;
	}
	std::cout << " Action result : MISS\n";
	return false;
}
