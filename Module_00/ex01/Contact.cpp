#include "Contact.hpp"

#include <iomanip>
#include <climits>

// The constructor and destructor are defined but are empty since
// no additional initialization or cleanup is required.

Contact::Contact() {}

Contact::~Contact() {}

//private helper function

bool stringIsAlnum(const std::string &str)
{
	int i = 0;
	while ( i < static_cast<int>(str.length()) && isalnum(str[i])) i++;
	return i ==  static_cast<int>(str.length());

}

int Contact::setInfo(int index)
{
	this->index = index;

	const std::string prompts[] = {
		"Name: ",
		"Last name: ",
		"Nickname: ",
		"Phone number: ",
		"Darkest secret: "
	};

	for(int i = 0; i < 5; i++)
	{
		std::cout << "Add contact: " << prompts[i];
		std::getline(std::cin, this->fieldsInfo[i]);

		if (std::cin.eof()){
			std::cin.clear();
			return (1);
		}
		if (this->fieldsInfo[i].empty()){
			std::cout << "\nError: info required\n";

			return (1);
		}
		if(!stringIsAlnum(this->fieldsInfo[i])){
			std::cout << "\nError: input must only contain alphanumeric characters\n";
			return (1);
		}
	}
	return (0);
}

void Contact::showTable(){
	std::cout << "|" << std::right << std::setw(10) << this->index;

	for (int i = 0; i < 3; i++) {
		std::cout << "|";
		if (this->fieldsInfo[i].length() > 10) {
			std::cout << this->fieldsInfo[i].substr(0, 9) << ".";
		} else {
			std::cout << std::right << std::setw(10) << this->fieldsInfo[i];
		}
	}
	std::cout << "|" << std::endl;
}

void Contact::fullTable() {
	int id;

	std::cout << "===== Information of contact #" << this->index << " =====\n\n";

	id = -1;
	std::cout << "# Name:           " << this->fieldsInfo[++id] << "\n";
	std::cout << "# Last name:      " << this->fieldsInfo[++id] << "\n";
	std::cout << "# Nickname:       " << this->fieldsInfo[++id] << "\n";
	std::cout << "# Phone number:   " << this->fieldsInfo[++id] << "\n";
	std::cout << "# Darkest secret: " << this->fieldsInfo[++id] << std::endl;
}
