#ifndef WEAPON_HPP
# define WAPON_HPP

#include <string.h>
#include <iostream>
#include <cstddef>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string weaponType);
		~Weapon();

		std::string const	&getType ();
		void	setType(std::string weaponType);
};

#endif

