#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec1;
    std::vector<int> vec2 = {0,1,2,3,4,5,6,7,8,9};
    std::vector<int> vec3 (10);
    std::vector<int>::size_type vec3_s = vec3.size();
    std::vector<int> vec4 (10,1);
    std::vector<int> vec5 = vec2 ;
    std::vector<int> vec6 (vec1);
}
