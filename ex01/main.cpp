# include "PhoneBook.hpp"

using namespace std;



int main() {

	string	name;
	Pbook	PhoneBook;

	cout << "Welcome to the 80s and their unbelievable technology!" << endl;
	cout << "enter a command(ADD, SEARCH, EXIT): " << std::endl;
	while (getline(cin, name)) {

		// if ()
		// {
		// 	cerr << "Error reading input." << endl;
		// 	exit(1);
		// }
		if (name =="ADD")
		{
			PhoneBook.addcontact();
		}
		else if (name == "SEARCH")
		{
			PhoneBook.searchcontact();
		}
		else if (name == "EXIT")
		{
			cout << "Goodbye!" << endl;
			exit(0);
		}
		cout << "enter a command(ADD, SEARCH, EXIT): " << std::endl;
	}
	std::cout << std::endl;
}
