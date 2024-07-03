#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, width;

public:
    Rectangle(int, int);
    int Area();
    void showData();
    int Perimeter();
};

int main()
{
    Rectangle book(2, 1), laptop(3, 2), desk(5, 2);

    // print data
    cout << "Data of book" << endl;
    book.showData();

    cout << "Data of laptop" << endl;
    laptop.showData();

    cout << "Data of desk" << endl;
    desk.showData();

    cout << "Area of book: " << book.Area() << endl;
    cout << "Area of laptop: " << laptop.Area() << endl;
    cout << "Area of desk: " << desk.Area() << endl;

    cout << "Perimeter of book: " << book.Perimeter() << endl;
    cout << "Perimeter of laptop: " << laptop.Perimeter() << endl;
    cout << "Perimeter of desk: " << desk.Perimeter() << endl;

    return 0;
}
Rectangle::Rectangle(int l, int w)
{
    length = l;
    width = w;
}

void Rectangle ::showData()
{
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
}

int Rectangle::Area()
{
    return (length * width);
}
int Rectangle::Perimeter()
{
    return 2 * (length + width);
}