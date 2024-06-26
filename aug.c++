#include <iostream>
using namespace std;
int sum(int x, int y, int z = 1, int a = 1);
int sum(int x, int y, int z, int a)
{
    return (x + y + z + a);
}
int main()
{
    int a, b, c, d;
    cout << "Enter 4 numbers: ";
    cin >> a >> b;

    // cout << "Sum of 4 numbers is:\n " << sum(5, 6, 7, 8);
    cout << "Sum of 4 numbers is: " << sum(a, b);
    return 0;
}