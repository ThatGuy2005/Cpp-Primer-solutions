
#include <iostream>
#include <string>

class Screen
{
public:
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos h, pos w) : height(h), width(w) { };
    Screen(pos h, pos w, char con) : height(h), width(w), contents(h*w,con) { };

    Screen &display(std::ostream& os)
    {
        do_display(os); return *this;
    }
    const Screen display(std::ostream& os) const
    {
        do_display(os); return *this;
    }
    char get() const { return contents[cursor]; }
    inline char get(pos h, pos w) const;
    Screen &move(pos r, pos c);
    Screen &set(char);
    Screen &set(pos, pos, char);

private:

    static const char bkground = ' ';
    void do_display(std::ostream& os) const { os << contents; };
    pos cursor = 0;
    pos height = 0 , width = 0;
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
inline Screen &Screen::set(char c)
{
    contents[cursor] = c; 
    return *this;         
}
inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r * width + col] = ch;  
    return *this;                  
}
int main()
{
    Screen myscreen(5, 5, 'X');
    myscreen.move(4, 0).set('X').display(std::cout);
    std::cout << "\n";
    myscreen.display(std::cout);
    std::cout << "\n";
}