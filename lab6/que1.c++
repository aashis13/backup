#include <iostream>
using namespace std;

class polygon
{
protected:
    int width, height;

public:
    void set_values(int a, int b)
    {
        width = a;
        height = b;
    }
};

class rectangle : public polygon
{
public:
    int area()
    {
        return (width * height);
    }
};

class triangle : public polygon
{
public:
    int area()
    {
        return (width * height / 2);
    }
};

int main()
{
    rectangle rect;
    triangle tri;
    rect.set_values(2, 10);
    tri.set_values(2, 10);
    cout << "Rectangle Area: " << rect.area() << endl;
    cout << "Triangle Area: " << tri.area() << endl;
    return 0;
}