#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

map<string, string> build_map(ifstream& map_file)
{
    map<string, string> trans_map;
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

const string& transform(const string& s, map<string, string>& m)
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
    
}