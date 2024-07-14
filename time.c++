#include <iostream>
using namespace std;
class Time
{
private:
    int hrs, minus;

public:
    Time();
    Time(int, int);
    operator int();
};
Time::Time()
{

}
Time::Time(int h,int m)
{
    hrs=h;
    minus=m;
}
Time::operator int()
{
    return (hrs*60+minus);
}
int main()
{
    
}
