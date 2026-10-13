#include "Animals.h"

Herbivore::Herbivore(double w, bool l) : weight(w), life(l) {}

double Herbivore::GetWeight()
{
	return weight;
}

void Herbivore::SetWeight(double w)
{
	weight = w;
}

bool Herbivore::GetLife()
{
	return life;
}

void Herbivore::SetLife(bool l)
{
	life = l;
}

Wildebeest::Wildebeest() :Herbivore(100, true) {}

Wildebeest::Wildebeest(double w, bool l) : Herbivore(w, l) {}

void Wildebeest::EatGrass()
{
	if (life == true)
	{
		cout << "\n\tWildebeest eat grass.....""\t|Weight + 10|";
		weight += 10;
		return;
	}
	cout << "\n\t|X-x-X-x-X-x-X- The Wildebeest Dead -X-x-X-x-X-x-X|";
}

string Wildebeest::GetName()
{
	return "Wildebeest";
}

Bison::Bison() :Herbivore(500, true) {}

Bison::Bison(double w, bool l) : Herbivore(w, l) {}

void Bison::EatGrass()
{
	if (life == true)
	{
		cout << "\n\tBison eat grass.....""\t|Weight + 10|";
		weight += 10;
		return;
	}
	cout << "\n\t|X-x-X-x-X-x-X- The Bison Dead -X-x-X-x-X-x-X|";
}

string Bison::GetName()
{
	return "Bison";
}

Moose::Moose() :Herbivore(400, true) {}

Moose::Moose(double w, bool l) : Herbivore(w, l) {}

void Moose::EatGrass()
{
	if (life == true)
	{
		cout << "\n\tMoose eat grass....." "\t|Weight + 10|";
		weight += 10;
		return;
	}
	cout << "\n\t|X-x-X-x-X-x-X- The Moose Dead -X-x-X-x-X-x-X|";
}

string Moose::GetName()
{
	return "Moose";
}




Carnivore::Carnivore(double p) :power(p) {}

Lion::Lion() :Carnivore(300) {}

Lion::Lion(double p) : Carnivore(p) {};

void Lion::Eat(Herbivore* animal)
{
	if (animal->GetName() != "Wildebeest")
	{
		cout << "\n\tLion can't find " << animal->GetName();
		return;
	}
	if (animal->GetLife() == false)
	{
		cout << "\n\tLion can't eat dead " << animal->GetName();
		return;
	}
	cout << "\n\t|X-x-X-x-X-x-X- The Lion kills the " << animal->GetName() << " -X-x-X-x-X-x-X|";
	if (power >= animal->GetWeight())
	{
		power += 10;
		cout << "\t|Power + 10|";
	}
	else
	{
		power -= 10;
		cout << "\t|Power - 10|";
	}
	animal->SetLife(false);
}

Wolf::Wolf() :Carnivore(200) {}

Wolf::Wolf(double p) : Carnivore(p) {};

void Wolf::Eat(Herbivore* animal)
{
	if (animal->GetName() != "Bison")
	{
		cout << "\n\tWolf can't find " << animal->GetName();
		return;
	}
	if (animal->GetLife() == false)
	{
		cout << "\n\tWolf can't eat dead " << animal->GetName();
		return;
	}
	cout << "\n\t|X-x-X-x-X-x-X- The Wolf kills the " << animal->GetName() << " -X-x-X-x-X-x-X|";
	if (power >= animal->GetWeight())
	{
		power += 10;
		cout << "\t|Power + 10|";
	}
	else
	{
		power -= 10;
		cout << "\t|Power - 10|";
	}
	animal->SetLife(false);
}

EuWolf::EuWolf() :Carnivore(250) {}

EuWolf::EuWolf(double p) : Carnivore(p) {};

void EuWolf::Eat(Herbivore* animal)
{
	if (animal->GetName() != "Moose")
	{
		cout << "\n\tEuropean Wolf can't find " << animal->GetName();
		return;
	}
	if (animal->GetLife() == false)
	{
		cout << "\n\tEuropean Wolf can't eat dead " << animal->GetName();
		return;
	}
	cout << "\n\t|X-x-X-x-X-x-X- The European Wolf kills the " << animal->GetName() << " -X-x-X-x-X-x-X|";
	if (power >= animal->GetWeight())
	{
		power += 10;
		cout << "\t|Power + 10|";
	}
	else
	{
		power -= 10;
		cout << "\t|Power - 10|";
	}
	animal->SetLife(false);
}
