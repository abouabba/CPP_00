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
		getline(cin, name);
		cout << name << endl;
		if (name =="ADD")
		{
			PhoneBook.
		}
		else if (name == "SEARCH")
		{
			//...
		}
		else if (name == "EXIT")
		{
			//...
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