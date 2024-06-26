#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, width;

public:
    Rectangle();            // Non-parameterized constructor
    Rectangle(int, int);    // Parameterized constructor
    Rectangle(Rectangle &); // Copy constructor
    int area()
    {
        return length * width;
    }
    int perimeter()
    {
        return 2 * (length + width);
    }
};
int main()
{
    Rectangle book, laptop(10, 5), notebook(laptop);
    cout << "Area of book: " << book.area() << endl;
    cout << "Area of laptop: " << laptop.area() << endl;
    cout << "Area of notebook: " << notebook.area() << endl;
    return 0;
}
Rectangle::Rectangle(Rectangle &a)
{
    length = a.length;
    width = a.width;
}
Rectangle::Rectangle(int l, int w)
{
    length = l;
    width = w;
}
Rectangle::Rectangle()
{
    length = 5;
    width = 5;
}
