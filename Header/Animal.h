#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
public:

	Animal(std::string Species, std::string Name);

	~Animal();

	void getHappiness();
	void getName();
	void setSpecies(std::string Species);
	void setName(std::string Name);

	void feed();
	void pet();


	//variables
	std::string Species;
	std::string Name;
	int Happiness;

private:
	

protected:

};

#endif //ANIMAL_H