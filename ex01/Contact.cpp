# include "Contact.hpp"
# include "PhoneBook.hpp"

Pbook::Pbook() {
    contactCount = 0;
}

bool Pbook::isAlldigit(std::string& str) {
	for(int i = 0; i < str.length(); i++) {
		if (std::isdigit(str[i]))
			return true;
	}
	return false;
}

bool Pbook::isAllspace(std::string& str) {
	for(int i = 0; i < str.length(); i++) {
		if (std::isspace(str[i]))
			return true;
	}
	return false;
}

bool Pbook::isAllprint(std::string& str) {
	for(int i = 0; i < str.length(); i++) {
		if (!std::isprint(str[i]))
			return false;
	}
	return true;
}

void Pbook::addcontact() {

	Contact& newContact = contacts[contactCount % 8];
	while(1) {

		std::cout << "Enter first name: ";
		if (!std::getline(std::cin, newContact.first_name))
			return;
		if(newContact.first_name.empty() || !isAllprint(newContact.first_name))
			continue;
		std::cout << "Enter last name: ";
		if (!std::getline(std::cin, newContact.last_name))
			return;
		if (newContact.last_name.empty() || !isAllprint(newContact.last_name))
				continue;
		std::cout << "Enter nick name: ";
		if (!std::getline(std::cin, newContact.nick_name))
			return;
		if (newContact.nick_name.empty() || !isAllprint(newContact.nick_name))
			continue;
		std::cout << "Enter phone number: ";
		if(!std::getline(std::cin, newContact.phone_number))
			return;
		if(newContact.phone_number.empty() || isAllspace(newContact.phone_number) || !isAlldigit(newContact.phone_number) || !isAllprint(newContact.phone_number))
			continue;
		std::cout << "Enter darkest_secret: ";
		if (!std::getline(std::cin, newContact.darkest_secret))
			return;
		if (newContact.darkest_secret.empty() || !isAllprint(newContact.darkest_secret))
			continue;
		break;
	}
		contactCount++;
}
