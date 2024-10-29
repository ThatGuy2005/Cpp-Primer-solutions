
/*The original program was written in this matter :
std::cout << "The sum of " << v1;
          << "and" << v2;
          <<"is" << v1 + v2 << std::endl;
The program is not legal because the ; operator tells the compiler that this line of code ends here, so we are going to use std::cout everytime when we are using ; because we are using the << operators without a standard output .It doesn't use iostream library and doesn't declare the variables v1 and v2 and there is no function where is the code.Not only that but it doesn't cin values for v1 and v2.And the main function it does not return an integer.
So the right code is this one :*/

#include <iostream>

int main()
{
    int v1=0, v2=0;
    std::cout << "Enter two numbers : " << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    return 0;
}


