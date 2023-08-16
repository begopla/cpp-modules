#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
			std::string	name;
			Weapon	&weapon;

	public:
		HumanA(std::string curentName, Weapon &currentWeapon);
		~HumanA(void);
		// std::string	getName();
		// void	setName( std::string currentName);
		void	attack();
};




#endif
