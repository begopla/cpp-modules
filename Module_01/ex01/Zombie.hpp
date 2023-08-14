#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie( void );
		~Zombie();

		void	setName( std:: string name);
		void	announce( void );

	private:
		std::string zombieName;

};

Zombie* zombieHorde( int N, std::string name);

#endif
