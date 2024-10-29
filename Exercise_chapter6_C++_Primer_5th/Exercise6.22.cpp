
#include <iostream>
void swap(int *&pointer_1,int*&pointer_2)
{
    int* pointer_3;
    pointer_3 = pointer_1;
    pointer_1 = pointer_2;
    pointer_2 = pointer_3;
}
int main()
{
    int a, b;
    std::cin >> a >> b;
    int* pointer_a = &a, * pointer_b = &b;
    swap(pointer_a, pointer_b);
    std::cout << *pointer_a << *pointer_b << std::endl;
}
