#include <iostream>
#include <string>
#include <list>

int main()
{
    std::string word;
    std::list<std::string> line;
    while (getline(std::cin, word))
    {
        if (word == "|")
        {
            break;
        }
        line.push_back(word);
    }
    std::list<std::string>::iterator begin = line.begin();
    std::list<std::string>::const_iterator end = line.end();
    while (begin != end)
    {
        std::cout << *begin ;
        begin++;
    }
}