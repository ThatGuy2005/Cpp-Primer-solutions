
#include <iostream>
#include <vector>
int num(int, int)
{
	return 1;
}
int main()
{
   typedef int (*pf) (int, int);
   std::vector<pf> k = { num };
   std::cout << k[0](1,2) << std::endl;
}