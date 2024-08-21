#include <iostream>
using namespace std;

// Abstract class
class Shape
{
protected:
    float l; // This will hold the length for square and radius for circle
public:
    // Pure virtual function making this class abstract
    virtual float calculateArea() = 0;

    // Function to get data for the shape
    void getData(float length)
    {
        l = length;
    }
};

class Square : public Shape
{
public:
    // Override the pure virtual function
    float calculateArea() override
    {
        return l * l;
    }
};

class Circle : public Shape
{
public:
    // Override the pure virtual function
    float calculateArea() override
    {
        return 3.14 * l * l; // πr²
    }
};

int main()
{
    Square s;
    Circle c;

    // Input for square
    float length;
    cout << "Enter length to calculate the area of a square: ";
    cin >> length;
    s.getData(length);
    cout << "Area of square: " << s.calculateArea() << endl;

    // Input for circle
    float radius;
    cout << "Enter radius to calculate the area of a circle: ";
    cin >> radius;
    c.getData(radius);
    cout << "Area of circle: " << c.calculateArea() << endl;

    return 0;
}
