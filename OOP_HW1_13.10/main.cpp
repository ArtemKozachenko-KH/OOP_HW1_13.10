#include <iostream>
#include <vector>
#include "Continent.h"
#include "Animals.h"
#include "AnimalWorld.h"

using namespace std;

int main()
{
	Africa afric;
	NorthAmerica americ;
	Europe europ;
	AnimalWorld anworld;

	

	for (int i = 0; i < 3; i++)
	{
		afric.CreateAnimals();
		americ.CreateAnimals();
		europ.CreateAnimals();
	}
	cout << "\n\n\t|----------Meal Herbivore----------|";
	anworld.MealsHerb(afric.GetHerblist());
	anworld.MealsHerb(americ.GetHerblist());
	anworld.MealsHerb(europ.GetHerblist());

	cout << "\n\n\t|----------Meal Carnivore----------|";
	anworld.MealsCarn(afric.GetHerblist(),afric.GetCarnlist());
	anworld.MealsCarn(americ.GetHerblist(),americ.GetCarnlist());
	anworld.MealsCarn(europ.GetHerblist(),europ.GetCarnlist());
}