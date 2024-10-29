#include <iostream>
#include <string>
using std::string;

string change_name(string name,string prefix, string suffix)
{
    string new_name;
    name.insert(0, prefix);
    name.append(suffix);
    string::iterator name_begin = name.begin();
    new_name = name;
    return new_name;
}

int main()
{
    string full_name;
    full_name = change_name("Josh", "Mr ", " Jr");
    std::cout << full_name << std::endl;
}
