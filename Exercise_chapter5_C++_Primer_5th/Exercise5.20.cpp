
#include <iostream>
#include <string>

int main()
{
    std::string text, word1, word2;
    std::cin >> text;
    word1 = text;
    word2 = word1;
    while (std::cin >> text)
    {
        if (word2 == text)
        {
            std::cout << "The same word occured twice " << std::endl;
            break;
        }
        else if (text == "|")
        {
            break;
        }
        word1 = text;
        word2 = word1;
    }
}
