
#include <iostream>
using namespace std;

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (size_t j = 0; av[i][j]; j++)
				std::cout << (char) toupper(av[i][j]);
		}
	}
	std::cout << std::endl; //this puts the command in the next line
	return (0);
}
