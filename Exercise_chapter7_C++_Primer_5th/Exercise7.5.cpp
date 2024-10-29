
#include <iostream>
#include <string>

struct Person
{
	const std::string printname() { return name; };
	const std::string printaddress() { return address; };
	std::string name;
	std::string address;
};
int main()
{
	Person Person1;
	Person1.name = "Jhon";
	Person1.address = "New York, Glory str., nr5";
	std::cout << Person1.name << " lives in : " << Person1.address << " ." << std::endl;
	// The functions should be const because we don't want to change the given data.
}
