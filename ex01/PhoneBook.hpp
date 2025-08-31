# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <iomanip>
# include <cctype>


class Pbook {

	private:
		Contact contacts[8];
		int contactCount;
	public:
		Pbook();
		void addcontact();
		void searchcontact();
		bool isAlldigit(std::string& str);
		bool isAllspace(std::string& str);
		bool isAllprint(std::string& str);
};

# endif
