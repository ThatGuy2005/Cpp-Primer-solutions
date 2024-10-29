
#include <iostream>

int main()
{
    int currValue = 0, val = 0;
    if (std::cin >> currValue)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (val == currValue)
            {
                cnt++;
            }
            else
            {
                std::cout << currValue << " occures " 
                    << cnt << " times " << std::endl;
                currValue = val;
                cnt = 1;
            }
        }
        std::cout << currValue << " occures "
            << cnt << " times " << std::endl;

    }
    return 0;
}

