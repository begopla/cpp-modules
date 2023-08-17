
#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

		struct _data
		{
			std::string	level;
			void(Karen::*ptr)(void);
		};
		struct _data	data[4];

	public:
		Karen();
		void	complain( std::string level );
};

#endif
