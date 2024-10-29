
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using std::string; using std::vector; using std::istringstream;

struct PersonInfo
{
    string name;
    vector<std::string> phone;
};
int main()
{
    string line ,word;
    vector<PersonInfo> people;
    istringstream record;
    while (std::getline(std::cin, line))
    {
        record.clear();
        PersonInfo info;
        record >> info.name;
        while (record >> word)
        {
            info.phone.push_back(word);
        }
        people.push_back(info);
    }
    std::cout << &people[0] << std::endl;
}