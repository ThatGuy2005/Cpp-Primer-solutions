
#include <iostream>

void return_bigger_value(const int& value1, const int* value2)
{
    if (value1 > *value2)
    {
        return value1;
    }
    else
    {
        return *value2;
    }
}
int main()
{
    int value1, value2;
    std::cin >> value1 >> value2;
    std::cout << return_bigger_value(value1, &value2) << std::endl;
}
