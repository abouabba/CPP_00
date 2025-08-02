# include "phonebook.hpp"
# include "contact.hpp"


void Pbook::addcontact() {

    Contact newContact;
    std::cout << "enter first name: ";
    std::getline(std::cin, newContact.first_name);
    std::cout << "enter last name: ";
    std::getline(std::cin, newContact.last_name);
    std::cout << "enter nick name: ";
    std::getline(std::cin, newContact.nick_name);
    std::cout << "enter phone number: ";
    std::getline(std::cin, newContact.phoneNumber);
	std::cout << "enter darkest_secret: ";
    std::getline(std::cin, newContact.darkest_secret);
}

void Pbook::searchcontact() {
	std::cout << "Searching for a contact..." << std::endl;
}
