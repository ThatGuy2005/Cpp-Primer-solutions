
#include <iostream>
#include <string>

class Screen
{
public:
    using pos = std::string::size_type;
    Screen() = default;
    Screen(pos h, pos w) : height(h), width(w) { };
    Screen( pos h, pos w, std::string con) : height(h), width(w), contents(con){ };
    char get() const { return contents[cursor]; }
    inline char get(pos h, pos w) const;
    Screen& move(pos r, pos c);
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};
Screen& Screen::move(pos r, pos c) 
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}
char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}