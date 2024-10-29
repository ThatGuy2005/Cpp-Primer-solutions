#include <iostream>
#include <deque>
#include <list>

int main()
{
    std::list<int> to_sort;
    std::deque<int> even;
    std::deque<int> odd;
    int number;
    while (std::cin >> number)
    {
        to_sort.push_back(number);
    }
    std::list<int>::iterator begin = to_sort.begin();
    std::list<int>::iterator end = to_sort.end();
    while (begin != end)
    {
        if (*begin % 2 == 0)
        {
            even.push_back(*begin);
        }
        else
        {
            odd.push_back(*begin);
        }
        begin++;
    }
    std::deque<int>::iterator begin_even = even.begin();
    std::deque<int>::iterator end_even = even.end();
    std::deque<int>::iterator begin_odd = odd.begin();
    std::deque<int>::iterator end_odd = odd.end();
    while (begin_even != end_even)
    {
        std::cout << *begin_even << " ";
        begin_even++;
    }
    while (begin_odd != end_odd)
    {
        std::cout << *begin_odd << " ";
        begin_odd++;
    }
}
