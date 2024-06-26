#include <iostream>
using namespace std;
class rectangle
{
private:
    int length, width;

public:
    rectangle(int, int);

    int area()
    {
        return length * width;
    }
};
int main()
{
    rectangle *r1 = new rectangle(5, 4);
    rectangle r2(5, 3);
    cout << "Area of r1: " << r1->area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    return 0;
}
rectangle::rectangle(int l, int w)
{
    length = l;
    width = w;
}
