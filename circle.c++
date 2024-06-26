// wap to calculate area of cricle. make a use of #define pi 3.14 and #include<math.h> in the different program.
#include <iostream>
#include <math.h>
using namespace std;
#define pi 3.14
int main()
{
    float r, area;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    area = pi * pow(r, 2);
    cout << "Area of the circle is: " << area << endl;
    return 0;
}

