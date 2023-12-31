
#include "PhoneBook.hpp"

#include <sstream>

PhoneBook::PhoneBook()
{
	this->newContactIndex = 0;
	this->contactNum = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::setContact(){
	if (this->newContactIndex >= this->MAX_CONTACTS)
		this->newContactIndex = 0;
	std::cout << std::endl;
	Contact temp;
	if (temp.setInfo(this->newContactIndex + 1) == 0)
	{
		this->contacts[this->newContactIndex] = temp;
		std::cout << "\nNew contact has been added\n";
		this->newContactIndex++;
		if (this->contactNum < 8)
			this->contactNum++;
	}
	std::cout << std::endl;
	return ;
}

bool isAlnum(const std::string &str)
{
	for (std::string::const_iterator i = str.begin(); i != str.end(); i++){
		if (std::isalnum(*i))
			return true;
	}
	return false;
}

bool isNumeric(const std::string& str) {
    if (str.empty()) {
        return false;
    }

    size_t i = 0;
    if (str[0] == '-' || str[0] == '+') {
        if (str.length() == 1) {
            return false; // Only the sign symbol without any digits
        }
        i = 1;
    }

    for (; i < str.length(); i++) {
        if (!std::isdigit(str[i])) {
            return false;
        }
    }

    return true;
}


void PhoneBook::getContact(){
	if (this->contactNum == 0){
		std::cout << "\nError: no contacts\n" << std::endl;
		return;
	}

		std::cout << "\n"
	<< "|-------------------------------------------|\n"
	<< "|     Index|First Name| Last Name|  Nickname|\n"
	<< "|-------------------------------------------|\n";
	for (int i = 0; i < this->contactNum; i++)
		this->contacts[i].getTable();
	std::cout << "|-------------------------------------------|" << std::endl;

	bool range = true;
	int id;
	std::cout << "\nEnter index of a contact to display all information, or type \"EXIT\" to return\n";
	do {
		std::string str;
		std::cout << "Index: ";
		std::getline(std::cin, str);

		if(std:: cin.eof())
		{
			std::cout << "\nExiting...\n";
            return;
		}
		if (str == "EXIT") {
			std::cout << std::endl;
			return;
		} else if (!isNumeric(str)) {
			std::cout << "\nInvalid index: value is not a number" << std::endl;
		} else {
			std::istringstream(str) >> id;
			if (id <= 0 || id > this->contactNum) {
				std::cout << "\nInvalid index: out of range" << std::endl;
				range = true;
			} else {
				range = false;
			}
		}
	} while (range);

	std::cout << std::endl;
	this->contacts[id - 1].getFullTable();
	std::cout << std::endl;
}
