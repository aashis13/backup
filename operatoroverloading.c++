#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    void operator++(int);
    void display();
};
int main()
{
    int l, b;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> l >> b;
    Rectangle r1(l, b), r2(l, b);
    r1++;
    r1.display();
    r2++;
    r2.display();
    return 0;
}

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
void Rectangle ::operator++(int)
{
    length++;
    breadth++;
}
void Rectangle ::display()
{
    cout << "Length: " << length << " Breadth: " << breadth << endl;
}
