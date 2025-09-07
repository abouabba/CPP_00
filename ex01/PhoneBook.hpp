# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>
# include <cctype>
#include <cstdlib>

class Pbook {

	private:
		Contact contacts[8];
		int contactCount;
		int maxContacts;
	public:
		Pbook();
		void addcontact();
		void searchcontact();
		bool isAlldigit(std::string& str);
		bool thereIsSpace(std::string& str);
		bool isAllprint(std::string& str);
};

# endif
