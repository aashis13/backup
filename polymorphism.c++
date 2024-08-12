#include <iostream>
using namespace std;
class polygon
{
protected:
    int width, height;

public:
    void setdata(int a, int b)
    {
        width = a;
        height = b;
    }
};
class Rectangle : public polygon
{
public:
    int area()
    {
        return width * height;
    }
};
class Triangle : public polygon
{
public:
    int area()
    {
        return width * height / 2;
        // return width * height * 0.5;
    }
};
int main()
{
    polygon *p1, *p2;
    Rectangle react;
    Triangle tri;
    p1 = &react; // up casting
    p2 = &tri;   // up casting
    p1->setdata(4, 5);
    p2->setdata(8, 10);
    cout << "Area of Rectangle is: " << react.area() << endl;
    cout << "Area of Triangle is: " << tri.area() << endl;
    return 0;
}