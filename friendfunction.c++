#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    friend int calculateArea(Rectangle);
};
int calculateArea(Rectangle r)
{
    return r.length * r.width;
}
int main()
{
    Rectangle r1(10,6);
    cout << "Area of rectangle is: " << calculateArea(r1);
}