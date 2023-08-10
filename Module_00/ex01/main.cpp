
#include "PhoneBook.hpp"


#include <csignal>
#include <climits>

void showMenu(){
	std::cout << "Type your option: \n" << std::endl;
	std::cout << "ADD to add a contact" << std::endl;
	std::cout << "SEARCH to search a contact" << std::endl;
	std::cout << "EXIT to exit" << std::endl;
}

int main() {
	PhoneBook phoneList;
	std::string line;

	showMenu();
	while (std::cout << "$> ", std::getline(std::cin, line)){
		if (line == "SEARCH")
			phoneList.searchContact();
		else if (line == "ADD")
			phoneList.addContact();
		else if (line == "EXIT")
		{
			std::cout << "exit" << std::endl;
			break;
		}
		else if (std::cin.eof())
		{
			break;
		}
		else
		{
			std::cin.clear();
			std::cout << "\nPlease enter a valid option\n";
		}
	}
	std::cin.clear();
	return (0);
}
