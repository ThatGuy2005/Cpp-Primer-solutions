#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::multimap<std::string, std::vector<std::string> > authors;
    authors.insert({ "William Shakespeare",{"Hamlet","Othello","King Lear and Macbeth"} });
    authors.insert({ "William Shakespeare",{"Hamlet","Othello","King Lear and Macbeth"} });
    authors.insert({ "William Shakespeare",{"Hamlet","Othello","King Lear and Macbeth"} });
    authors.insert({ "William Shakespeare",{"Hamlet","Othello","King Lear and Macbeth"} });
    for (auto i : authors)
    {
        std::cout << i.first << std::endl;
        std::sort(i.second.begin(), i.second.end());
        for (auto k : i.second)
        {
            std::cout << k << std::endl;
        }
    }
}