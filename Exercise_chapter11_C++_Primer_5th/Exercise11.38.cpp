#include <iostream>
#include <unordered_map>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

unordered_map<string, string> build_map(ifstream& map_file)
{
    unordered_map<string, string> trans_map;
    string key, value;
    while (map_file >> key && getline(map_file, value))
    {
        if (value.size() > 1)
        {
            trans_map[key] = value.substr(1);
        }
        else
        {
            throw runtime_error("no rule for : " + key);
        }
    }
}

const string& transform(const string& s, unordered_map<string, string>& m)
{
    auto map_it = m.find(s);
    if (map_it != m.cend())
    {
        return map_it->second;
    }
    else
    {
        return s;
    }
}

void word_transform(ifstream& map_file, ifstream& input)
{
    auto trans_map = build_map(map_file);
    string text;
    while (getline(input, text))
    {
        istringstream stream(text);
        string word;
        bool firstword = true;
        while (stream >> word)
        {
            if (firstword)
            {
                firstword = false;
            }
            else
            {
                cout << " ";
                cout << transform(word, trans_map);
            }
            cout << endl;
        }
    }
}

int main()
{
    std::unordered_map<std::string, std::size_t> word_count;
    std::string word;
    while (std::cin >> word)
    {
        ++word_count[word];
    }
    for (const auto& w : word_count)
    {
        std::cout << w.first << " occurs " << ((w.second > 1) ? "times" : "time") << std::endl;
    }
}