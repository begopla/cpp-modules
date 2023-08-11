#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	public:
		Contact();
		~Contact();

		int setInfo(int index);
		void getTable();
		void getFullTable();
	private:
		static const int NUM_FIELDS = 5;
		enum fields {
			firsName = 0,
			lastName,
			nickName,
			phoneNumber,
			darkestSecret
		};
		int index;
		std::string fieldsInfo[NUM_FIELDS];
};



#endif
