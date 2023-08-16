
#include "HumanB.hpp"


HumanB::HumanB(std::string currentName): name(currentName)
{
	return ;
}

HumanB::~HumanB(){}


void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << (this->weapon).getType() << std::endl;
}

void HumanB::setWeapon (Weapon &currentWeapon)
{
	this->weapon = currentWeapon;
}
