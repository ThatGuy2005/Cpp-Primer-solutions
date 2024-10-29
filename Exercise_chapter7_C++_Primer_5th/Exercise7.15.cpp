
#include <iostream>
#include <string>

struct Person
{
	Person() = default;
	Person(const std::string& n) : name(n) {}
	Person(const std::string& n, const std::string& a)
		: name(n), address(a) {}
	Person(std::istream&);

	const std::string printname() { return name; };
	const std::string printaddress() { return address; };

	std::string name;
	std::string address;
};
std::istream& read(std::istream& is, Person& pers)
{
	is >> pers.name >> pers.address;
	return is;
}
std::ostream& print(std::ostream& os, const Person& pers)
{
	os << pers.name << " lives in : " << pers.address << " ." << std::endl;
	return os;
}
Person::Person(std::istream& is) {
	read(is, *this);
}
int main()
{
	Person Person1;
	read(std::cin, Person1);
	print(std::cout, Person1);
}