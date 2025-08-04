# include "PhoneBook.hpp"

using std::string;
using std::cout;
using std::cin;
using std::endl;
// using namespace std;

int main() {

	string	name;
	Pbook	PhoneBook;

	cout << "Welcome to the 80s and their unbelievable technology!" << endl;
	while (true) {

		cout << "enter a command(ADD, SEARCH, EXIT): ";
		if (!getline(cin, name))
		{
			std::cerr << "Error reading input." << endl;
			exit(1);
		}
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
			break;
			cout << "Goodbye!" << endl;
			exit(0);
		}
		else
			cout << "PLEASE INTER(ADD, SEARCH, EXIT)";
	}
}









// }
// if (ac != 2)
// 		cout << "PLEASE WRITE JUST THIS: [ADD] or [SEARCH] or [EXIT]";
// 	else
// 	{
// 		if (!strcmp(av[1], "ADD"))
// 		{
// 			cout << "ADD";
// 		}
// 		else if (!strcmp(av[1], "SEARCH"))
// 		{
// 			cout << "SEARCH";
// 		}
// 		else if (!strcmp(av[1], "EXIT"))
// 		{
// 			cout << "EXIT";
// 			exit(0);
// 		}
// 		else
// 			cout << "PLEASE WRITE JUST THIS: [ADD] or [SEARCH] or [EXIT]";