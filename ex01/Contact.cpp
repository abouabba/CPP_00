# include "Contact.hpp"
# include "PhoneBook.hpp"

Pbook::Pbook() {
    contactCount = 0;
}

void Pbook::addcontact() {

	Contact& newContact = contacts[contactCount % 8];
	std::cout << "Enter first name: ";
	std::getline(std::cin, newContact.first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, newContact.last_name);
	std::cout << "Enter nick name: ";
	std::getline(std::cin, newContact.nick_name);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, newContact.phone_number);
	for (int i = 0; newContact.phone_number[i]; i++)
	{
		if (!isdigit(newContact.phone_number[i]))
		{
			std::cout << "Error: phone number must contain only digits." << std::endl;
			return;
		}
	}
	std::cout << "Enter darkest_secret: ";
	std::getline(std::cin, newContact.darkest_secret);
	if (contactCount < 8)
		contactCount++;
}
