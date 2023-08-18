#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int				rawBits;
		static const	int	fractBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed	&operator=(const Fixed &copy2);
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
	};



#endif
