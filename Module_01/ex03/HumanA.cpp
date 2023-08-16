
#include "HumanA.hpp"

HumanA::HumanA(std::string currentName, Weapon &currentWeapon): name(currentName), weapon(currentWeapon){}

HumanA::~HumanA(){}

// // std::string HumanA::getName()
// // {
// // 	return (this->name);
// // }

// // void	HumanA::setName(std::string currentName)
// // {
// // 	this->name = currentName;
// // }

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
