#include <iostream>
#include <cstdlib>
#include <ctime>

#include "../Header/Car.h"
#include "../Header/Animal.h"
#include "../Header/Character.h"



int main()
{
	Car MyCar("Renault Kangoo","Blue");
	MyCar.accelerate();
	MyCar.getSpeed();
	MyCar.brake();
	MyCar.getSpeed();
	MyCar.displayInfo();

	Animal MyCat("Cat","Felix");
	MyCat.getHappiness();
	MyCat.feed();
	MyCat.pet();
	MyCat.getHappiness();
	MyCat.getName();

	Character MyCharacter("Iseult", 23, "Raven");
	MyCharacter.getAge();
	MyCharacter.getName();
	MyCharacter.getPseudo();
	MyCharacter.setPseudo("Blue");
	MyCharacter.getHealth();
	MyCharacter.isAttacked();
	MyCharacter.getHealth();
	
	return 0;
}