
#include "Zombie.hpp"

Zombie::Zombie( void) {}
Zombie::~Zombie()
{
	std::cout << "Zombie " << this->zombieName << " has been destroyed\n";
}

void Zombie::setName(std::string name)
{
	this->zombieName = name;
}

void Zombie::announce( void )
{
	std::cout << this->zombieName << " BraiiiiiiinnnzzzZ..\n";
}
