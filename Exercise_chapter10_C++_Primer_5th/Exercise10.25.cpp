#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

bool check_size(std::string word, std::string::size_type sz)
{
    if (word.size() >= sz)
    {
        return true;
    }
    else
    {
        return false;
    }
}
std::string make_plural(std::string::size_type s, const std::string& word, const std::string& m)
{
    return (s > 1) ? word + m : word;
}
void elim_dups(std::vector<std::string>& vec)
{
    std::sort(vec.begin(), vec.end());
    auto elim_dup = std::unique(vec.begin(), vec.end());
    vec.erase(elim_dup, vec.end());
}
void biggies(std::vector<std::string>& word, std::string::size_type sz)
{
    elim_dups(word);
    std::stable_partition(word.begin(), word.end(), [](const std::string& a, const std::string& b) {return a.size() < b.size(); });
    auto wc = std::find_if(word.begin(), word.end(), bind(check_size, std::placeholders::_1,sz));
    auto count = word.end() - wc;
    std::cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer " << std::endl;
    for_each(wc, word.end(), [](const std::string& s) {std::cout << s << std::endl; });
    std::cout << std::endl;
}
int main()
{

}