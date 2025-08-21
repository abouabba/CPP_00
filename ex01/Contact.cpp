# include "Contact.hpp"
# include "PhoneBook.hpp"

Pbook::Pbook() {
    contactCount = 0;
}

void Contact::SetFirstName(std::string& str) {
	first_name = str;
}

void Contact::SetLastName(std::string& str) {
	last_name = str;
}

void Contact::SetNickName(std::string& str) {
	nick_name = str;
}

void Contact::SetPhoneNumber(std::string& str) {
	phone_number = str;
}

void Contact::SetDarkestSecret(std::string& str) {
	darkest_secret = str;
}

bool Pbook::isAlldigit(std::string& str) {
	for(int i = 0; i < str.length(); i++) {
		if (std::isdigit(str[i]))
			return false;
	}
	return true;
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
	std::string input;
	while(1) {

		std::cout << "Enter first name: ";
		if (!std::getline(std::cin, input))
			return;
		if(input.empty() || !isAllprint(input))
			continue;
		newContact.SetFirstName(input);
		std::cout << "Enter last name: ";
		if (!std::getline(std::cin, input))
			return;
		if (input.empty() || !isAllprint(input))
			continue;
		newContact.SetLastName(input);
		std::cout << "Enter nick name: ";
		if (!std::getline(std::cin, input))
			return;
		if (input.empty() || !isAllprint(input))
			continue;
		newContact.SetNickName(input);
		std::cout << "Enter phone number: ";
		if(!std::getline(std::cin, input))
			return;
		if(input.empty() || isAllspace(input) || isAlldigit(input) || !isAllprint(input))
			continue;
		newContact.SetPhoneNumber(input);
		std::cout << "Enter darkest_secret: ";
		if (!std::getline(std::cin, input))
			return;
		if (input.empty() || !isAllprint(input))
			continue;
		newContact.SetDarkestSecret(input);
		break;
	}
		contactCount++;
}
