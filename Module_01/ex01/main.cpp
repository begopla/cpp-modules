#include "Zombie.hpp"

int main( void )
{
	std::string name;
	Zombie *horde;
	int n;

	std::cout << "Please enter the number of Zombies to be created " << std::endl;
	std::cin >> n;


	std::cout << "Name your Zombies: " << std::endl;
	std::cin >> name;

	horde = zombieHorde(n, name);
	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
