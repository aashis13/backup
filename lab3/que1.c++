#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, width;

public:
    void setData(int l, int w)
    {
        length = l;
        width = w;
    }
    void showData()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
    int Area()
    {
        return (length * width);
    }
    int Perimeter()
    {
        return 2 * (length + width);
    }
};
int main()
{
    Rectangle book, laptop, desk;
    // setter function
    book.setData(2, 1);
    laptop.setData(3, 2);
    desk.setData(5, 2);

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
