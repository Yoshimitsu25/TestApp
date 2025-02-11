#include "../Header/Car.h"

//Constructor definition


Car::Car(std::string Model, std::string Color)
{
	this->Model = Model;
	this->Speed = 0;
	this->Wheels = 4;
	this->Color = Color;
}

void Car::accelerate()
{
	if (Speed <= 200)
	{
		this->Speed += 20;
	}
	
}

void Car::brake()
{
	this->Speed = 0;
	std::cout << "The car is now stopped." << std::endl;
}

void Car::displayInfo() const
{
	std::cout << "Model :" << Model << ", Speed: " << Speed << ", Color" << Color << std::endl;
}

void Car::getSpeed()
{
	std::cout << "Speed :" << Speed << std::endl;
}

void Car::setColor(std::string newColor)
{
	this->Color = newColor;
}
