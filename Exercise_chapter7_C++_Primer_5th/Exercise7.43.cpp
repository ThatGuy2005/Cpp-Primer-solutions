#include <iostream>


class No_default
{
public:

    No_default(int i){};
    int i = 0;
};

class C
{
public:
    C() = default;
    C(No_default i) : k(i) { };
    No_default k;
};
int main()
{
    C co(2);
}