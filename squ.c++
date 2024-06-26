#include <iostream>
#include <cmath>
using namespace std;

inline double squareRoot(int num)
{
    return sqrt(num);
}

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    double result = squareRoot(num);
    cout << "Square root of " << num << " is " << result << endl;

    return 0;
}
