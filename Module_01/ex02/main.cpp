
#include <iostream>
#include <string.h>

int main ( void )
{
	std::string myStr = "HI THIS IS BRAIN";
	std::string	*strPtr = &myStr;
	std::string &strRef = myStr;

	std::cout << "The address in memory of the string: " << &myStr << std::endl;
	std::cout << "The address, using the pointer to it: " << strPtr << std::endl;
	std::cout << "The address of the reference: " << &strRef << std::endl;
	std::cout << "The string, using the pointer: " << *strPtr << std::endl;
	std::cout << "The string, using the reference: " << strRef << std::endl;
	return (0);
}
