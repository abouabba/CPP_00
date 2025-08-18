# include "Contact.hpp"
# include "PhoneBook.hpp"

Pbook::Pbook() {
    contactCount = 0;
}

void Pbook::addcontact() {

	Contact& newContact = contacts[contactCount % 8];
	while(1) {

		std::cout << "Enter first name: ";
		if (!std::getline(std::cin, newContact.first_name))
			return;
		if(newContact.first_name.empty() || std::all_of(newContact.first_name.begin(), newContact.first_name.end(), ::isspace))
		{
			continue;
		}
		std::cout << "Enter last name: ";
		if (!std::getline(std::cin, newContact.last_name))
			return;
		if (newContact.last_name.empty() || std::all_of(newContact.last_name.begin(), newContact.last_name.end(), ::isspace))
		{
				continue;
		}
		std::cout << "Enter nick name: ";
		if (!std::getline(std::cin, newContact.nick_name))
			return;
		if (newContact.nick_name.empty() || std::all_of(newContact.nick_name.begin(), newContact.nick_name.end(), ::isspace))
		{
			continue;
		}
		std::cout << "Enter phone number: ";
		if(!std::getline(std::cin, newContact.phone_number))
			return;
		if(newContact.phone_number.empty() || std::all_of(newContact.phone_number.begin(), newContact.phone_number.end(), ::isspace) || !std::all_of(newContact.phone_number.begin(), newContact.phone_number.end(), ::isdigit))
		{
			continue;
		}
		std::cout << "Enter darkest_secret: ";
		if (!std::getline(std::cin, newContact.darkest_secret))
			return;
		if (newContact.darkest_secret.empty() || std::all_of(newContact.darkest_secret.begin(), newContact.darkest_secret.end(), ::isspace))
		{
			continue;
		}
		break;
	}
	if (contactCount < 8)
		contactCount++;
}
