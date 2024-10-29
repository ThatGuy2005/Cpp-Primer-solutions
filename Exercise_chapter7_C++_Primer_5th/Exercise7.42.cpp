#include <iostream>
#include <string>

class Book
{
public:

	Book(std::string i, std::string t, std::string a, double p = 0.0) : isbn(i), title(t), author(a), price(p) { };
	Book() : Book("", "", "", 0.0) {};
private:

	std::string isbn;
	std::string title;
	std::string author;
	double price;
};