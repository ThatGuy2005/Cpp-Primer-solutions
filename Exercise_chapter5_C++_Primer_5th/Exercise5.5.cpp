
#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> note{ "Fail","Low Pass", "Pass", "Good", "Decent", "Very good", "Excelent"};
	unsigned int grade;
	std::string lettergrade;
	std::cin >> grade;
	if (grade < 50)
	{
		lettergrade = note[0];
	}
	else
	{
		lettergrade = note[(grade - 40) / 10];
	}
	std::cout << lettergrade << std::endl;
	lettergrade = ((grade > 99) ? "Excelent" : (grade >= 90) ? "Very good" : (grade >= 80) ? "Decent" : (grade >= 70) ? "Good" : (grade >= 60) ? "Pass" : (grade >= 50) ? "Low pass" : "Fail");
	std::cout << lettergrade << std::endl;
}