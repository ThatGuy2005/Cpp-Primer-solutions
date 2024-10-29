
#include <iostream>
#include<string>
using std::string;
string make_plular(size_t ctr, const string& word, const string& ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}
int main()
{
    std::cout << make_plular(2, "failure");
}
