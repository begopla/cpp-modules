
#include <iostream>
#include <string>
#include <fstream>

static void	replace(std::string fileName, std::string s1, std::string s2)
{
	std::fstream	file1;
	std::fstream	file2;
	std::string		line;
	std::string		tmp;
	size_t			value;

	file1.open(fileName.c_str(), std::ios::in);
	file2.open(std::string(fileName + ".replace").c_str(), std::ios::out);
	if(!file1)
		std::cout << "Input file error" << std::endl;
	else if(!file2)
		std::cout << "Output file error" << std::endl;
	else
	{
		while (getline(file1, line))
		{
			int end = 0;
			while ((value = line.find(s1, end)) != std::string::npos)
			{
				tmp = line.substr(value + s1.size());
				line.erase(value);
				line = line + s2 + tmp;
				end = value + s2.size();
			}
			file2 << line; //writing line into file2
			if (!file1.eof())
				file2 << std::endl;
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
