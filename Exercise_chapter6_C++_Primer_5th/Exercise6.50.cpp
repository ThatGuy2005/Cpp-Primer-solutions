
#include <iostream>
void f()
{
    int a = 0;
    std::cout << a;
}
void f(int a)
{
    std::cout << a ;
}
void f(int a, int b)
{
    std::cout << a << " " << b;
}
void f(double a, double b = 3.14)
{
    std::cout << a << " " << b;
}
int main()
{
    // error : this is an ambigouus call f(2.56, 42);
    f(42); // ok: it call the secound function with the best match.
    f(42, 0); // ok: it call the third function with the best match. 
    f(2.56, 3.14); // ok: it call the fourth function with the best match.
}
