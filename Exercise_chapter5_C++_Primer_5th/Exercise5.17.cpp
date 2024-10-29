#include <iostream>
#include <vector>
using std::cin;
int main()
{
    std::vector <int> v1 = {0, 1, 1, 2, 9};
    std::vector <int> v2 = {0, 1, 1, 2};
    std::vector<int>::size_type sizev1 = v1.size();
    std::vector<int>::size_type sizev2 = v2.size();
    unsigned prefix = 0;
    if (sizev1 > sizev2)
    {

        for (unsigned count = 0; count != sizev2;count++)
        {
            if (v1[count] == v2[count])
            {
                prefix++;
            }
        }
        if (prefix == sizev2)
        {
            std::cout << "Prefix" << std::endl;
        }
    }
    else if (sizev2 > sizev1)
    {
        for (unsigned count = 0; count != sizev1; count++)
        {
            if (v2[count] == v1[count])
            {
                prefix++;
            }
        }
        if (prefix == sizev1)
        {
            std::cout << "Prefix" << std::endl;
        }
    }
    else
    {
        std::cerr << "The two vectors are the same ." << std::endl;
    }
}