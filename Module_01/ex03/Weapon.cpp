
#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
	this->setType(weaponType);
}

Weapon::~Weapon(){}

std::string const	&Weapon::getType ()
{
	return (this->type);
}
void	Weapon::setType(std::string weaponType)
{
	this->type = weaponType;
}
