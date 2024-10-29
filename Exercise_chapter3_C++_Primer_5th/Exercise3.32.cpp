
#include <iostream>
#include <vector>
#include <string>
using std::cout; using std::cin; using std::endl; using std::string; using std::vector;

int main()
{
    int arr[10]{ 0,1,2,3,4,5,6,7,8,9 };
    int arr1[10];
    for (int i = 0; i != 10; i++)
    {
        arr1[i] = arr[i];
    }
    vector<int> b {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
    vector<int> c(10, 0);
    auto v = c.begin();
    for (auto i = b.begin(); i != b.end(); i++)
    {
        *v = *i;
        v++;
    }
}
