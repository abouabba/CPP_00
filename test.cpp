# include <iostream>

using namespace std;

class Book
{
	public:
		string title;
		string author;
		int price;
		int pages;
};

int main()
{
	Book book1;
	book1.title = "c++ level 1";
	book1.author = "ahmad";
	book1.price = 10;
	book1.pages = 100;

	cout<< "book1"<<endl;
	cout<< "book1 title "<<book1.title<<endl;
	cout<< "book1 author "<<book1.author<<endl;
}

// class Car
// <%
// public:
// 	std::string brand;
// 	void drive() <%
// 	std::cout << "Driving a " << brand << std::endl;
// 	%>
// %>;

// int add(int a, int b) 
// <%
// 	return a * b;
// %>

// int main()
// <%
// 	Car myCar;
// 	myCar.brand = "Toyota";
// 	myCar.drive();
// %>