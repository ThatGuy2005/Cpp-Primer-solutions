
#include <iostream>

std::istream& endf(std::istream& is)
{
    int i;
    while (is.eofbit)
    {
        is >> i;
    }
    is.clear();
    return is;
}

int main()
{
    endf(std::cin);
}
