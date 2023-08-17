
#include <iostream>
#include <string>
#include <fstream>

static void	replace(std::string fileName, std::string s1, std::string s2)
{
	std::fstream	file1;
	std::fstream	file2;
	std::string		line;

	file1.open(fileName.c_str(), std::ios::in);
	file2.open(std::string(fileName + ".replace").c_str(), std::ios::out);
	if(!file1)
		std::cout << "Error: Input file" << std::endl;
	else if(!file2)
		std::cout << "Error: output file" << std::endl;
	else
	{
		while (getline(file1, line))
		{
			int start = line.find(s1);
			if (start != -1 )
			{
				line.erase(start, s1.size());
				line.insert(start, s2);
			}
			file2 << line; //writing line into file2
			if (!file1.eof())
				file2 << std::endl; //writting end of line
		}
	}
	file1.close();
	file2.close();
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		if (!av[2][0] || !av[3][0])
			std::cout << "Error: String s1 and s2 can not be empty" << std::endl;
		else
			replace(av[1], av[2], av[3]);
	}
	else
		std::cout << "Error: Wrong amount of arguments inserted" << std::endl;
	return 0;
}
