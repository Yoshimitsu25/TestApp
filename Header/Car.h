#ifndef CAR_H
#define CAR_H

#include <iostream>

class Car
{
public:
	//constructor
	Car(std::string Model, std::string Color);

	//destructor
	~Car()
	{
		std::cout << "The car has been detroyed!" ;
	};

	//methods

	void accelerate();
	void brake();
	void displayInfo() const;
	void getSpeed();
	void setColor(std::string newColor);


	//variables

	std::string Color;

private:
	std::string Model;
	int Wheels;
	float Speed;
protected:

};


#endif //CAR_H