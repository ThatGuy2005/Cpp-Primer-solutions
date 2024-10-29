#include <iostream>
#include <vector>

void print_vec(std::vector<int>* pv)
{
    auto i = pv->begin();
    while (i != pv->end())
    {
        std::cout << *i++ << std::endl;
    }
    delete pv;
}

std::vector<int>* read_vec(std::vector<int>* pv)
{
    int i;
    while (std::cin >> i)
    {
        pv->push_back(i);
    }
    std::cin.clear();
    return pv;
}

std::vector<int>* make_vec()
{
    std::vector<int>* pv = new std::vector<int>;
    return pv;
}

int main()
{
    print_vec(read_vec(make_vec()));
}