#include <iostream>
#include <map>
#include <vector>
#include <string>

int main()
{
    std::multimap<std::string, std::vector<std::string> > authors;
    authors.insert({ "William Shakespeare",{"Hamlet","Othello","King Lear and Macbeth"} });
    std::string word;
    std::getline(std::cin, word);
    auto i = authors.find(word);
    std::cout << i->first << std::endl;
    if (i != authors.end())
    {
        authors.erase(i);
    }
    else
    {
        std::cout << "Author not found !" << std::endl;
    }
}