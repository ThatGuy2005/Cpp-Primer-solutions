
#include <iostream>

int main()
{
    std::cout <<  "/*" ; // legal
    std::cout << " */ "; // legal
    //std::cout << /* "*/" */; //ilegal
    std::cout << /* "*/" /* "/*" */; //legal
}

