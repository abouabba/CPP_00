# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>


class Pbook {

	private:
		Contact contacts[8];
		int contactCount;
	public:
		Pbook();
		void addcontact();
		void searchcontact();
};

# endif