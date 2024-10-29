#include <iostream>
#include <string>

int main()
{
    std::string alphabet = { "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz" };
    std::string number = { "0123456789" };
    std::string word = {"ab2c3d7R4E6"};
    std::string::size_type pos_alphabetic = 0;
    std::string::size_type pos_number = 0;
    for (auto a : alphabet)
    {
        pos_alphabetic = word.find_first_of(a);
        if (pos_alphabetic == -1)
        {
            std::cout << "Not found : " << a << "   ";
        }
        else
        {
            std::cout << "Found at position : " << pos_alphabetic << " Element : " << a << "   ";
        }
    }
    std::cout << std::endl;
    for (auto n : number)
    {
        pos_number = word.find_first_of(n);
        if (pos_number == -1)
        {
            std::cout << "Not found : " << n << "   ";
        }
        else
        {
            std::cout << "Found at position : " << pos_number << " Element : " << n << "   ";
        }
    }
    std::cout << std::endl;
    pos_alphabetic = 0;
    pos_number = 0;
    std::string::size_type pos_word = 0;
    for (auto a : alphabet)
    {
        pos_alphabetic = word.find_first_not_of(a);
        pos_word++;
        if (pos_alphabetic != pos_word )
        {
            std::cout << "Found element : " << a << "   ";
        }
        else
        {
            std::cout << "Not found : " << a << "   ";
        }
    }
    std::cout << std::endl;
    pos_word = 0;
    for (auto n : number)
    {
        pos_number = word.find_first_not_of(n);
        pos_word++;
        if (pos_number != pos_word)
        {
            std::cout << "Found element : " << n << "   ";
        }
        else
        {
            std::cout << "Not found : " << n << "   ";
        }
    }
}