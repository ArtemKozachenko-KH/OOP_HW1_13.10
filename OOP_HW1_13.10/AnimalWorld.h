#pragma once
#include "Continent.h"
#include "Animals.h"

class AnimalWorld
{
public:
	void MealsHerb(const vector<Herbivore*>& herbl);
	void MealsCarn(const vector<Herbivore*>& herbl,const vector<Carnivore*>& carnl);
};


void AnimalWorld::MealsHerb(const vector<Herbivore*>& herbl)
{
	for (auto ptr = herbl.begin(); ptr != herbl.end(); ptr++)
	{
		(*ptr)->EatGrass();
	}
}

void AnimalWorld::MealsCarn(const vector<Herbivore*>& herbl, const vector<Carnivore*>& carnl)
{
	auto herbptr = herbl.begin();
	for (auto ptr = carnl.begin(); ptr != carnl.end(); ptr++)
	{
		(*ptr)->Eat(*herbptr);
		herbptr++;
	}
}