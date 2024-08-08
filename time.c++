#include <iostream>
using namespace std;
class Time
{
private:
    int hrs, mins;

public:
    Time();
    Time(int, int);
    operator int();
};
Time::Time()
{
}
Time::Time(int h, int m)
{
    hrs = h;
    mins = m;
}
Time::operator int()
{
    return (hrs * 60 + mins);
}
int main()
{
    int hours, minutes, duration;
    cout << "Enter hours and minutes: " << endl;
    cin >> hours >> minutes;
    Time t1(hours, minutes);
    duration = t1;
    cout << "Duration is " << duration << " mins" << endl;
}
