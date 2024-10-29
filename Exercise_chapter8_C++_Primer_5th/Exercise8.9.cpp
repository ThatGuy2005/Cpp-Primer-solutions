#include <iostream>
#include <sstream>

std::istringstream& print(std::istringstream& is)
{
    std::string word;
    is.clear();
    while (getline(is, word))
    {
        std::cout << word << std::endl;
    }
    return is;
}

int main()
{
    std::string word = "Hello";
    std::istringstream record(word);
    print(record);
}
