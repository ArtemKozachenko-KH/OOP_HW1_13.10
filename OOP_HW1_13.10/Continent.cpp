#include "Continent.h"
#include "Animals.h"

void Continent::CreateAnimals()
{
	CreateHerbivore();
	CreateCarnivore();
}

vector<Herbivore*>& Continent::GetHerblist()
{
	return herblist;
}

vector<Carnivore*>& Continent::GetCarnlist()
{
	return carnlist;
}

void Africa::CreateHerbivore()
{
	herblist.push_back(new Wildebeest());
}

void Africa::CreateCarnivore()
{
	carnlist.push_back(new Lion());
}

void NorthAmerica::CreateHerbivore()
{
	herblist.push_back(new Bison());
}

void NorthAmerica::CreateCarnivore()
{
	carnlist.push_back(new Wolf());
}

void Europe::CreateHerbivore()
{
	herblist.push_back(new Moose());
}

void Europe::CreateCarnivore()
{
	carnlist.push_back(new EuWolf());
}
