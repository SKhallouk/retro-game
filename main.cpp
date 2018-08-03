/*
  _________________       _____      _____
 |                 |     |     |    /    /
 |     ____________|     |     |   /    /
 |    |                  |     |  /    /
 |    |____________      |     | /    /
 |                 |     |     |/    /
 |____________     |     |           \
              |    |     |     |\     \
  ____________|    |     |     | \     \
 |                 |     |     |  \     \
 |_________________|     |_____|   \_____\

THIS CODE IS PRODUCED BY : "SOUFIANE KHALLOUK".
*/

#include <iostream>
#include <string>
#include <array>

void playGame();
void drawMap(int, std::array<std::array<char, 30>, 30>); // the integer determines the size of the map;

int main()
{
	bool ex = false;
	std::cout << "\t \tWelcome Player!" << '\n';
	while (!ex)
	{
		std::cout << "\t \n \n \n \tChoose an option to continue : \n \n \n" ;
		std::cout << "\t \t1.Start new Game \n \t \t2.Load Game \n \t \t3.Instructions \n \t \t4.Exit" << "\n \n \n \n";

		std::string option;
		std::cin >> option;

		if (option == "1")
		{
			playGame();
		}
		else if (option == "2")
		{
			std::cout << "This Feature Isn't available yet..." << '\n';
			std::cin.get();
			std::cin.ignore();
		}
		else if (option == "3")
		{
			std::cout << "'WASD' To move, 'Space' to attack" << '\n';
			std::cin.get();
			std::cin.ignore();
		}
		else if (option == "4")
		{
			ex = true;
		}
		else
		{
			std::cerr << "Invalid input ! Press Enter to retry" << '\n';
			std::cin.get();
			std::cin.ignore();
		}

	}
}

void playGame()
{
	std::array <std::array<char, 30>, 30> slot;

	for (int i = 0; i < 30 ; i++ )
	{
		for (int j = 0; j < 30; j++)
		{
				slot [i][j] = ' ';
		}
	}
	slot [15][0] = '.';

	struct entity
	{
		int xPos;
		int yPos;
		double health;
		std::string name;
	};

	entity player;
	std::cout << "\t \tEnter character's name :" << '\n';
	std::cin >> player.name;
	
	drawMap(30, slot);

}

void drawMap(int mapLength, std::array<std::array<char, 30>, 30> slot)
{
	std::cout << '\n';
	std::cout << "╔";
	for (int i = 0; i < mapLength; i++)
	{
			std::cout << "══" ;
	}
	std::cout << "═╗" << '\n';

	for (int i = 0; i < mapLength; i++)
	{
		std::cout << "║" << ' ';
		for (int j = 0; j < mapLength; j++)
		{
			std::cout << slot [i][j] << ' ';
		}
	std::cout << "║" << "\n";
	}

	std::cout << "╚";
	for (int i = 0; i < mapLength; i++)
	{
			std::cout << "══" ;
	}
	std::cout << "═╝" << "\n \n";
}
