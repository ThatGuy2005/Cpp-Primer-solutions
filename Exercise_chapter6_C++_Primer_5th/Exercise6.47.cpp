#include <iostream>
#include <vector>
using std::vector;
int print(vector<int>::iterator beg, vector<int>::iterator end, vector<int> v, int count = 1)
{
    if (beg != end)
    {
        std::cout << "Element : " << count << " of " << v.size() << " will be printed : ";
        std::cout << *beg << std::endl;
        return print(beg + 1, end, v, count+1);
    }
}
int main()
{
    vector<int> v1 = { 1,2,3,4,5,5,6,6,7,7,8,8,9 };
    print(v1.begin(), v1.end(), v1);
}