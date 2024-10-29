
#include <iostream>
#include <string>
#include <vector>
using std::string; using std::vector;
double calc(double);
int count(const string&, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
int main()
{
    // (a)
    //calc(23.4 , 55.1) error: clac shall only receive one argument of type double, because it has one double parameter.
    // (b)
    //count("abcd", 'a') ok:count received a string and a char as argument.
    // (c)
    //calc(66) ok: converted to double.
    //(d)
    //sum (vec.begine(), vec.end(), 3.8) ok:if vec is a vector of ints , 3.8 gets converted to int.
}