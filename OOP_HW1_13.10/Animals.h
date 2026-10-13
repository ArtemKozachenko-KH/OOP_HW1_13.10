#pragma once
#include <iostream>
using namespace std;
class Herbivore
{
protected:
	double weight;
	bool life;
public:
	Herbivore(double w, bool l);
	virtual void EatGrass() = 0;
	double GetWeight();
	void SetWeight(double w);
	bool GetLife();
	void SetLife(bool l);
	virtual string GetName() = 0;
};


class Wildebeest : public Herbivore
{

public:
	Wildebeest();
	Wildebeest(double w, bool l);
	void EatGrass();
	string GetName();
};

class Bison : public Herbivore
{

public:
	Bison();
	Bison(double w, bool l);
	void EatGrass();
	string GetName();
};

class Moose : public Herbivore
{

public:
	Moose();
	Moose(double w, bool l);
	void EatGrass();
	string GetName();
};




class Carnivore
{
protected:
	double power;
public:
	Carnivore(double p);
	virtual void Eat(Herbivore* animal) = 0;
};


class Lion : public Carnivore
{

public:
	Lion();
	Lion(double p);
	void Eat(Herbivore* animal);
};

class Wolf : public Carnivore
{

public:
	Wolf();
	Wolf(double p);
	void Eat(Herbivore* animal);
};

class EuWolf : public Carnivore
{

public:
	EuWolf();
	EuWolf(double p);
	void Eat(Herbivore* animal);
};