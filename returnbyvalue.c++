// WAP in c++ that demonstrates return by value.
#include <iostream>
using namespace std;
float calculate_amount(float, float, float);
int main()
{
    float p, t, r, amount;
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "Enter the time period: ";
    cin >> t;
    cout << "Enter the rate of interest: ";
    cin >> r;
    cout << "The amount is: " << calculate_amount(p, t, r) << endl;
    return 0;
}
float calculate_amount(float p, float t, float r)
{
    return p * (1 + r * t);
}