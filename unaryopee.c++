#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    void display();
    void operator++();
};

Rectangle::Rectangle()
{
    length = 0;
    breadth = 0;
}

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

void Rectangle::operator++()
{
    ++length;
    ++breadth;
}

void Rectangle::display()
{
    cout << "Length: " << length << " Breadth: " << breadth << std::endl;
}

int main()
{
    Rectangle r1(10, 5);
    ++r1;
    r1.display();
    return 0;
}