
#include <iostream>
#include <string>
int main()
{
    do
    {
        std::string str1, str2, answer;
        std::cin >> str1 >> str2;
        if (str1 < str2)
        {
            std::cout << str1 << std::endl;
        }
        else if (str2 < str1)
        {
            std::cout << str2 << std::endl;
        }
        else
        {
            std::cout << "They are equal" << std::endl;
        }
        std::cout << "Do you wish to continue : yes(y) or no(n)" << std::endl;
        std::cin >> answer;
        if (answer == "n")
        {
            return false;
        }
    } while (true);
}