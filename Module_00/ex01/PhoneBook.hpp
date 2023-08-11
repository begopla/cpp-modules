#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP

#include "Contact.hpp"

class PhoneBook
{
	public:
			PhoneBook();
			~PhoneBook();
			void setContact(void);
			void getContact();
	private:
		static const int MAX_CONTACTS = 8;
		int newContactIndex;
		int contactNum;
		Contact contacts[MAX_CONTACTS]; //array of contact for automatic storage
};

#endif
