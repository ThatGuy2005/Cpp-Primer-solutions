
#include <iostream>

int argumnent(int arg)
{
    if (arg < 0)
    {
        arg *= -1;
    }
    return arg;
}
int main()
{
    int number;
    std::cin >> number;
    std::cout << argumnent(number) << std::endl;
}