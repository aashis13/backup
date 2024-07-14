#include <iostream>
using namespace std;

class Time
{
private:
    int hrs, minu;

public:
    Time() : hrs(0), minu(0) {}
    Time(int t)
    {
        hrs = t / 60;
        minu = t % 60;
    }
    void display()
    {
        cout << "Basic Type to ==> Class Type Conversion..." << endl;
        cout << hrs << ": Hour(s)" << endl;
        cout << minu << ": Minutes" << endl;
    }
};

int main()
{
    int duration;
    cout << "Enter time duration in integer value!\n";
    cin >> duration;

    Time t = duration;
    t.display();

    return 0;
}