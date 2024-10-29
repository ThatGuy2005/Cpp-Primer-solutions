#include <iostream>
#include <string>

class Book
{
public:

	Book(std::string i, std::string t, std::string a, double p = 0.0) : isbn(i), title(t), author(a), price(p){ };
private:

	std::string isbn;
	std::string title;
	std::string author;
	double price;
};

class Date
{
public:

	Date(int s, int m, int h, int y, int max = 60) : sec(s), minute(m), hour(h), year(y), max(max) { };

private:

	int sec;
	int minute;
	int hour;
	int year;
	int max ;
};
	
class Employee
{
public:

	Employee(std::string n, std::string r, double s) : name(n), rank(r), salary(s){ };

private:

	std::string name;
	std::string rank;
	double salary;
};