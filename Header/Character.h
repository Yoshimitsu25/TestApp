#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

class Character
{
public:

	Character(std::string Name, int age, std::string Pseudo);

	~Character();

	void setPseudo(std::string Pseudo);
	void getPseudo();
	void getName();
	void getAge();
	void getHealth();
	void isAttacked();



	std::string Pseudo;
	int Health;
private:
	std::string Name;
	int Age;
protected:

};

#endif //CHARACTER_H
