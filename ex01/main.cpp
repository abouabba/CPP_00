# include "PhoneBook.hpp"

int main() {

	std::string	name;
	Pbook		PhoneBook;

	std::cout << "🤖 Welcome To My Awesome PhoneBook 🤖" << std::endl;
	while (std::getline(std::cin, name)) {
		if (name =="ADD")
			PhoneBook.addcontact();
		else if (name == "SEARCH")
			PhoneBook.searchcontact();
		else if (name == "EXIT")
		{
			std::cout << "Goodbye!" << std::endl;
			break;
		}
		if (std::cin.eof())
			break;
		std::cout << "enter a command(ADD, SEARCH, EXIT): " << std::endl;
	}
	std::cout << std::endl;
}
