# include "PhoneBook.hpp"
# include "Contact.hpp"
# include <string>
# include <iomanip>



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
             << formatField("NICK NAME") << "|"
             << formatField("PHONE NUMBER") << "|"
             << formatField("DARKEST SECRET") << "|" << std::endl;

	for (int i = 0; contactCount > i; i++) {
		Contact& contact = contacts[i];
    	std::cout	<< std::setw(10) << i << "|" 
					<< std::setw(10) << formatField(contact.first_name) << "|"
    				<< std::setw(10) << formatField(contact.last_name) << "|"
    				<< std::setw(10) << formatField(contact.nick_name) << "|"
    				<< std::setw(10) << formatField(contact.phone_number) << "|"
					<< std::setw(10) << formatField(contact.darkest_secret) << "|" << std::endl;
					}
}
