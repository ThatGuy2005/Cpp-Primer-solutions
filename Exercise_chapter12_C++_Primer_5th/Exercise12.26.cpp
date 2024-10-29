#include <iostream>
#include <memory>
#include <string>

int main()
{
    std::allocator<std::string> alloc;
    unsigned n;
    std::cin >> n;
    auto p = alloc.allocate(n);
    std::string s;
    auto q = p;
    while (std::cin >> s && q != p + n)
    {
        *q++ = s;
    }
    const size_t size = q - p;
    alloc.deallocate(p,size);
}