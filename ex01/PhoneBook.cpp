# include "PhoneBook.hpp"
# include "Contact.hpp"
# include <string>
# include <iomanip>




void Pbook::searchcontact() {
    if (contactCount == 0) {
        std::cout << "No contacts to display." << std::endl;
        return ;
    }

    std::cout << std::setw(10) << "INDEX" << "|"
              << std::setw(10) << "FIRST NAME" << "|"
              << std::setw(10) << "LAST NAME" << "|"
              << std::setw(10) << "NICK NAME" << "|"
              << std::setw(10) << "PHONE NUMBER" << "|"
              << std::setw(10) << "DARKEST SECRET" << "|" << std::endl;

	for (int i = 0; contactCount > i; i++) {
		Contact& contact = contacts[i];
    	std::cout	<< std::setw(10) << i << "|" 
					<< std::setw(10) << contact.first_name << "|"
    				<< std::setw(10) << contact.last_name << "|"
    				<< std::setw(10) << contact.nick_name << "|"
    				<< std::setw(10) << contact.phone_number << "|"
					<< std::setw(10) << contact.darkest_secret << "|" << std::endl;
					}
}

