# include "PhoneBook.hpp"
# include "Contact.hpp"
# include <string>
# include <iomanip>
// Pbook::Pbook() {
// 	contactCount = 0;
// }

void Pbook::addcontact() {

	if (contactCount >= 8)
		contactCount = 0;

	Contact& newContact = contacts[contactCount];
	std::cout << "Enter first name: ";
	std::getline(std::cin, newContact.first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, newContact.last_name);
	std::cout << "Enter nick name: ";
	std::getline(std::cin, newContact.nick_name);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, newContact.phone_number);
	std::cout << "Enter darkest_secret: ";
	std::getline(std::cin, newContact.darkest_secret);
	contactCount++;
}

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

	Contact& contact = contacts[contactCount - 1];
    std::cout	<< std::setw(10) << contactCount - 1 << "|" 
				<< std::setw(10) << contact.first_name << "|"
    			<< std::setw(10) << contact.last_name << "|"
    			<< std::setw(10) << contact.nick_name << "|"
    			<< std::setw(10) << contact.phone_number << "|"
				<< std::setw(10) << contact.darkest_secret << "|" << std::endl;

}

