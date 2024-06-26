#include <iostream>
using namespace std;
// Inline function to calculate the cube of a number
inline int cube(int num)
{
    return num * num * num;
}

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int result = cube(number);
    cout << "Cube of " << number << " is: " << result << endl;

    return 0;
}
