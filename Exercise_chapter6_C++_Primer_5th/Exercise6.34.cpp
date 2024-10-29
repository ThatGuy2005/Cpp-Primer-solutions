

#include <iostream>
int fact(int number)
{
    if (number != 0)
    {
        return fact(number - 1) * number;
    }
}
int main()
{
    int num = 0;
    std::cin >> num;
    std::cout << fact(num) << std::endl;
}
