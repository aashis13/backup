#include <iostream>
using namespace std;
class Distance
{
private:
    int feet, inches;

public:
    Distance() {}
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void addddistance(Distance d1, Distance d2)
    {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        feet = feet + inches / 12;
        inches = inches % 12;
    }
    void display()
    {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }
};
int main()
{
    Distance d1(10, 9), d2(7, 10), d3;
    cout<<"Distance 1: ";
    
}