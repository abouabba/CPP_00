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
		if(newContact.first_name.empty())
		{
			std::cout << std::endl;
			continue;
		}
		std::cout << "Enter last name: ";
		if (!std::getline(std::cin, newContact.last_name))
			return;
		if (newContact.last_name.empty())
		{
				std::cout << std::endl;
				continue;
		}
		std::cout << "Enter nick name: ";
		if (!std::getline(std::cin, newContact.nick_name))
			return;
		if (newContact.nick_name.empty())
		{
			std::cout << std::endl;
			continue;
		}
		std::cout << "Enter phone number: ";
		if(!std::getline(std::cin, newContact.phone_number))
			return;
		if(newContact.phone_number.empty())
		{
			std::cout << std::endl;
			continue;
		}
		for (int i = 0; newContact.phone_number[i]; i++)
		{
			if (!isdigit(newContact.phone_number[i]))
			{
				newContact.phone_number = "    -     ";
				continue;
			}
		}
		std::cout << "Enter darkest_secret: ";
		if (!std::getline(std::cin, newContact.darkest_secret))
			return;
		if (newContact.darkest_secret.empty())
		{
			std::cout << std::endl;
			continue;
		}
		break;
	}
	if (contactCount < 8)
		contactCount++;
}
