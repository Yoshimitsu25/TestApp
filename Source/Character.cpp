#include "../Header/Character.h"

Character::Character(std::string Name, int age, std::string Pseudo)
{
	this->Name = Name;
	this->Age = age;
	this->Health = 100;
	this->Pseudo = Pseudo;
}

Character::~Character()
{
	std::cout << Pseudo << " is gone." << std::endl;
}

void Character::setPseudo(std::string Pseudo)
{
	this->Pseudo = Pseudo;
	std::cout << "This character's new pseudo is :" << Pseudo << std::endl;
}

void Character::getPseudo()
{
	std::cout << "This character's pseudo is :" << Pseudo << std::endl;
}

void Character::getName()
{
	std::cout << "This character's name is :" << Name << std::endl;
}

void Character::getAge()
{
	std::cout << "This character's age is :" << Age << std::endl;
}

void Character::getHealth()
{
	std::cout << "This character's health is :" << Health << "/100" << std::endl;
}

void Character::isAttacked()
{
	std::cout << Pseudo << " is attacked !!" << std::endl;
	Health -= 10;
}







