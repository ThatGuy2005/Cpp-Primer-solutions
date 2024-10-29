#include <iostream>
#include <memory>
#include <vector>

void print_vec(std::shared_ptr<std::vector<int>> pv)
{
    auto i = pv->begin();
    while (i != pv->end())
    {
        std::cout << *i++ << std::endl;
    }
}

void read_vec(std::shared_ptr<std::vector<int>> pv)
{
    int i;
    while (std::cin >> i)
    {
        pv->push_back(i);
    }
    std::cin.clear();
    print_vec(pv);
}

void make_vec()
{
   read_vec(std::make_shared<std::vector<int> >());
}

int main()
{
    make_vec();
}