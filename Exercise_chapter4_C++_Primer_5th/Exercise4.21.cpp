
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    int x;
    int answer;
    while (std::cin >> x)
    {
        v.push_back(x);
    }
    for (auto s = v.begin(); s != v.end(); s++)
    {
        answer = ((*s % 2 == 1) ? *s * 2 : *s);
        std::cout << answer<< std::endl;
    }
}