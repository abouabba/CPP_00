# include "PhoneBook.hpp"
# include "Contact.hpp"


std::string formatField(std::string str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return std::string(10 - str.length(), ' ') + str;
}

void Pbook::searchcontact() {
    if (contactCount == 0) {
        std::cout << "No contacts to display." << std::endl;
        return ;
    }

    std::cout << formatField("INDEX") << "|"
             << formatField("FIRST NAME") << "|"
             << formatField("LAST NAME") << "|"
             << formatField("NICK NAME") << std::endl;

    int maxContacts = (contactCount < 8) ? contactCount : 8;
	for (int i = 0; maxContacts > i; i++) {
		Contact& contact = contacts[i];
    	std::cout	<< std::setw(10) << i << "|" 
					<< std::setw(10) << formatField(contact.first_name) << "|"
    				<< std::setw(10) << formatField(contact.last_name) << "|"
    				<< std::setw(10) << formatField(contact.nick_name) << std::endl;
					}
    int index;
    std::cout << "Enter index: ";
    std::cin >> index;

    if (index >= 0 && index < maxContacts) {
        Contact& c = contacts[index];
        std::cout << "First name: "     << c.first_name     << std::endl;
        std::cout << "Last name: "      << c.last_name      << std::endl;
        std::cout << "Nick name: "      << c.nick_name      << std::endl;
        std::cout << "Phone number: "   << c.phone_number   << std::endl;
        std::cout << "Darkest secret: " << c.darkest_secret << std::endl;
    } else {
        std::cout << "Invalid index!" << std::endl;
    }
}
