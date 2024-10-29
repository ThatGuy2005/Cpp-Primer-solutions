
#include <iostream>
#include <vector>
using std::vector;
int print(vector<int>::iterator beg, vector<int>::iterator end)
{
    if (beg != end)
    {
        std::cout << *beg << std::endl;
        return print(beg+1, end);
    }
}
int main()
{
    vector<int> v1 = { 1,2,3,4,5,5,6,6,7,7,8,8,9};
    print(v1.begin(), v1.end());
}