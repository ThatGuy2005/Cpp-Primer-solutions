#include <iostream>
#include <string>
#include <vector>
#include <map>

void addFamili(std::string name, std::map<std::string, std::vector<std::string> >& fam)
{
    fam.insert({name,std::vector<std::string>()});
}
void addChildren(std::string fam_n,std::string name, std::map<std::string, std::vector<std::string> >& fam)
{
    auto it = fam.find(fam_n);
    it->second.push_back(name);

}
int main()
{

}