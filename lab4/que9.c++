#include <iostream>
using namespace std;

class Distance
{
    float meters;
    float centimeters;

public:
    Distance() : meters(0), centimeters(0) {}
    Distance(float m, float cm) : meters(m), centimeters(cm) {}

    // Conversion operator to convert Distance to feet and inch
    operator float() const
    {
        float totalCentimeters = meters * 100 + centimeters;
        float totalInches = totalCentimeters * 0.4; // 1 cm = 0.4 inch
        return totalInches;
    }

    void getData()
    {
        cout << "Enter values of meters and centimeters: ";
        cin >> meters >> centimeters;
    }

    void display() const
    {
        float totalInches = *this;   // Use conversion operator
        int feet = totalInches / 12; // 1 foot = 12 inch
        float inch = totalInches - (feet * 12);

        cout << "" << feet << " :feet" << endl;
        cout << "" << inch << " :inch" << endl;
    }
};

int main()
{
    Distance dist;
    dist.getData();
    dist.display();
    return 0;
}
