#include <iostream>
using namespace std;

class Box
{
    double width;

public:
    // Friend function to access private members
    friend void printWidth(Box box);

    // Member function to set the width
    void setWidth(double wid)
    {
        width = wid;
    }
};

// Definition of the friend function
void printWidth(Box box)
{
    cout << "Width of box : " << box.width << endl;
}

int main()
{
    Box box;

    // Set box width using member function
    box.setWidth(10.0);

    // Use friend function to print the width
    printWidth(box);

    return 0;
}