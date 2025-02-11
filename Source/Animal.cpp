#include "../Header/Animal.h"

Animal::Animal(std::string Species, std::string Name)
{
	this->Name = Name;
	this->Species = Species;
	this->Happiness = 0;
}

Animal::~Animal()
{
	std::cout << "The animal is gone!";
}

void Animal::getHappiness()
{
	std::cout << "This animal's happinesss level is :" << Happiness << std::endl;
}

void Animal::getName()
{
	std::cout << "The " << Species << "'s name is :" << Name << std::endl;
}

void Animal::setSpecies(std::string Species)
{
	this->Species = Species;
}

void Animal::setName(std::string Name)
{
	this->Name = Name;
}

void Animal::feed()
{
	Happiness += 2;
}

void Animal::pet()
{
	Happiness += 1;
}
