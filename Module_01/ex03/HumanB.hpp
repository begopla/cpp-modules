#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon	&weapon;

	public:
		HumanB(std::string currentName);
		~HumanB();
		void	attack();
		void	setWeapon (Weapon &currentWeapon);
};

#endif
