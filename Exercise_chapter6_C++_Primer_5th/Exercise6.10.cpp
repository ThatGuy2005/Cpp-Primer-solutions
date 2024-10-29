#include <iostream>

void swap(int* number1, int* number2)
{
    int i = *number2;
    *number2 = *number1;
    *number1 = i;
}
int main()
{
    int a = 0, b = 0;
    std::cin >> a >> b;
    swap(&a, &b);
    std::cout << a << " " << b << std::endl;
}