#include <iostream>
using namespace std;
class rectangle
{
private:
    int length, width;

public:
    rectangle(int length, int woidth)
    {
        this->length = length;
        this->width = width;
    }
    void getdata()
    {
        cout << "Enter length: " << endl;
        cin >> length;
        cout << "Enter width: " << endl;
        cin >> width;
    }
    int area()
    {
        return length * width;
    }
};
int main()
{
    rectangle r1(10, 5);
    rectangle r2(20, 10);
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    return 0;
}
