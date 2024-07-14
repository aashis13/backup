#include <iostream>
using namespace std;

class Time
{
    int hrs, minu;

public:
    Time(int h, int m) : hrs(h), minu(m) {}

    // Casting operator to convert Time to int
    operator int()
    {
        return (hrs * 60) + minu;
    }
};

int main()
{
    int hours, minutes;
    cout << "Enter hours and minutes: ";
    cin >> hours >> minutes;

    Time t(hours, minutes);

    int totalMinutes = t; // Implicitly calls the casting operator
    cout << "Class Type to Basic Type Conversion..." << endl;
    cout << "TOTAL MINUTES: " << totalMinutes << endl;

    return 0;
}
