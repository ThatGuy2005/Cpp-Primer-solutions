#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <utility>

void addFamili(std::string name, std::multimap<std::string, std::vector<std::pair<std::string, std::string> > >& fam)
{
    fam.insert({ name, std::vector<std::pair<std::string,std::string> >() });
}
void addChildren(std::string fam_n, std::string name, std::string birth_day, std::multimap<std::string, std::vector<std::pair<std::string, std::string> > >& fam)
{
    auto it = fam.find(fam_n);
    it->second.push_back({ name,birth_day });

}
int main()
{

}