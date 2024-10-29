#include <iostream>

int main()
{
    unsigned grade;
    std::cin >> grade;
    std::string finalgrade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade < 60) ? "fail" : "low pass";
    std::cout << finalgrade << std::endl;
    if (grade > 90)
    {
        std::cout << "high pass" << std::endl;
    }
    else if (grade > 75)
    {
        std::cout << "pass" << std::endl;
    }
    else if (grade > 60)
    {
        std::cout << "low pass" << std::endl;
    }
    else
        std::cout << "fail" << std::endl;
                     
}