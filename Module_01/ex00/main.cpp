#include "Zombie.hpp"

int main( void )
{
	std::string name;

	std::cout << "Please add a name of the new zombie to be created on the stack: " << std::endl;
	std::cin >> name;

	Zombie ZombiTestA(name);

	std::cout << "Please add a name of the new zombie to be created on the heap: " << std::endl;
	std::cin >> name;

	Zombie *ZombieTestB = newZombie(name);
	ZombieTestB->announce();
	delete ZombieTestB;

	std::cout << "Calling Ramdom Chump:" << std::endl;
	randomChump("testRandom");
	return 0;
}
