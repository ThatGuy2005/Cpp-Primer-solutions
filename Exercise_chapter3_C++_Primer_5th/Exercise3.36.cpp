
#include <iostream>
#include <vector>
using std::cout; using std::cin; using std::endl; using std::vector;

int main()
{
    int arr1[] = { 1,2,3,4,5 };
    int arr2[] = { 1,2,3,4,6 };
    constexpr int s1 =  sizeof(arr1);
    constexpr int s2 = sizeof(arr2);
    bool t1 = 0;
    bool t2 = 0;
    if (s1 > s2)
    {
        t1 = 1;
    }
    else if (s2 > s1)
    {
        t2 = 1;
    }
    else
    {
        for (int i = 0; i <= s1; i++)
        {
            if (arr1[i] > arr2[i])
            {
                t1 = 1;
                break;
            }
            else if (arr1[i] < arr2[i])
            {
                t2 = 1;
                break;
            }
        }
    }
    if (t1 == true)
    {
        cout << "arr1" << endl;
    }
    else if (t2 == true)
    {
        cout << "arr2" << endl;
    }
    else
        cout << "They are equal " << endl;
}
