
#include "Karen.hpp"

int main( int ac, char **av )
{
	Karen karen;
	std::string	level;

	if(ac == 2)
	{
		level = av[1];
		switch (level[0])
		{
			case 'D':
			case 'd':
				karen.complain("debug");
				break;
			case 'I':
			case 'i':
				karen.complain("info");
				break;
			case 'W':
			case 'w':
				karen.complain("warning");
				break;
			case 'E':
			case 'e':
				karen.complain("error");
				break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
		}
		return (0);
	}
	else
		std::cerr << "Error: correct usage:" << " <level>" << std::endl;

}
