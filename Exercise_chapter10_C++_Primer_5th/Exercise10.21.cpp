#include <iostream>

int main()
{
    int i = 10;
    auto k = [&i] {return i > 0 ? --i, false : true;};
    while (!k())
    {
        std::cout << i << std::endl;
    }
}