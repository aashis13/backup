#include <iostream>
using namespace std;
class Shape
{
protected:
    double length;
    double width;

public:
    virtual void setData(double l, double w) = 0;
    virtual void area() = 0;
};

class Triangle : public Shape
{
public:
    void setData(double l, double w)
    {
        length = l;
        width = w;
    }

    void area()
    {
        double area = 0.5 * length * width;
        cout << "Area of the triangle: " << area << endl;
    }
};

class Rectangle : public Shape
{
public:
    void setData(double l, double w)
    {
        length = l;
        width = w;
    }

    void area()
    {
        double area = length * width;
        cout << "Area of the rectangle: " << area << endl;
    }
};

int main()
{
    Shape *shape;

    // Create a triangle object
    Triangle triangle;
    shape = &triangle;
    shape->setData(5.0, 3.0);
    shape->area();

    // Create a rectangle object
    Rectangle rectangle;
    shape = &rectangle;
    shape->setData(4.0, 6.0);
    shape->area();

    return 0;
}