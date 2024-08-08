#include <iostream>
using namespace std;

class shape
{
protected:
    int height, width;

public:
    shape(int h, int w)
    {
        height = h;
        width = w;
    }
};

class triangle : public shape
{
public:
    triangle(int h, int w) : shape(h, w) {}
    float area()
    {
        return 0.5 * height * width;
    }
};

class rectangle : public shape
{
public:
    rectangle(int h, int w) : shape(h, w) {}
    float area()
    {
        return height * width;
    }
};

int main()
{
    triangle t(5, 3);
    rectangle r(4, 6);

    cout << "Area of triangle: " << t.area() << endl;
    cout << "Area of rectangle: " << r.area() << endl;

    return 0;
}
