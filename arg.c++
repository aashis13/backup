// c++ program that demostrates defult arguments.
#include <iostream>
using namespace std;
int sum(int x, int y, int z = 1, int w = 1);
int sum(int x, int y, int z, int w)
{
    return (x + y + z + w);
}
int main()
{
    int a, b, c, d, e, f;
    cout << "Enter 4 numbers: ";
    cin >> a >> b >> c >> d >> e >> f;

    cout << "The sum is: " << sum(a, b);
    cout << "\nThe sum is: " << sum(c, d);
    cout << "\nThe sum is: " << sum(e, f);

    return 0;
}
