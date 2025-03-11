#include <iostream>
using str = std::string;

int LaunchApp()
{
	MyApp AppInstance;


	AppInstance.launch();
	AppInstance.mainMenu();

	return 0;
}

class MyApp
{
public:

	str Name;

	struct Player {
		str Pseudo;
		int Level;
		int Difficulty;

	};

	union Stats {
		int Strenght;
		float Health;

	};

	enum Arme {
		Epee,
		Couteau,
		Machette,
		Mains,
	};

	enum Niveau {
		Appartement,
		Rue,
		Labo
	};

	MyApp()
	{

	}

	void launch()
	{

	}

	void mainMenu()
	{

	}

private:

protected:

};