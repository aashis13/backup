#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inches;

public:
    Distance() : feet(0), inches(0) {}

    ~Distance() {}

    void getdata()
    {
        cout << "Enter feet and inches: ";
        cin >> feet >> inches;
    }

    Distance operator+(Distance d)
    {
        Distance temp;
        temp.inches = inches + d.inches;
        temp.feet = feet + d.feet;
        if (temp.inches >= 12)
        {
            temp.feet++;
            temp.inches >= 12;
        }
        return temp;
    }

    void display()
    {
        cout << "<" << feet << "" << "." << inches << "" << ">" << endl;
    }
};

int main()
{
    Distance d1, d2, d3;
    d1.getdata();
    d2.getdata();
    d3 = d1 + d2;

    cout << "d1 = ";
    d1.display();
    cout << "d2 = ";
    d2.display();
    cout << "d3 = ";
    d3.display();

    return 0;
}
