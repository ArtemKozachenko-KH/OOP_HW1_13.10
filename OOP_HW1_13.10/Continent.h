#pragma once
#include <iostream>
#include "Animals.h"
#include <vector>
using namespace std;

class Continent
{
protected:
	vector<Herbivore*> herblist;
	vector<Carnivore*> carnlist;
public:
	virtual void CreateHerbivore()=0;
	virtual void CreateCarnivore()=0;
	void CreateAnimals();
	vector<Herbivore*>& GetHerblist();
	vector<Carnivore*>& GetCarnlist();
};


class Africa : public Continent
{
public:
	void CreateHerbivore();
	void CreateCarnivore();
};


class NorthAmerica : public Continent
{
public:
	void CreateHerbivore();
	void CreateCarnivore();
};

class Europe : public Continent
{
public:
	void CreateHerbivore();
	void CreateCarnivore();
};
