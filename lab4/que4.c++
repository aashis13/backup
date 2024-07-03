#include <iostream>
using namespace std;
class time
{
private:
    int hrs, minu;

public:
    time();
    ~time();
    void getdata();
    int operator<(time);
};
int main()
{
    time t1, t2;
    cout << "we are here" << endl;
    t1.getdata();
    t2.getdata();
    if (t1 < t2)
    {
        cout << "t1 is small" << endl;
    }
    else
    {
        cout << "t2 is small" << endl;
    }
    return 0;
}
time::~time()
{
    cout << "------------" << endl;
}
int time::operator<(time t)
{
    int first, second;
    first = hrs * 60 + minu;
    second = t.hrs * 60 + minu;
    if (first < second)
    {
        cout << "t1 is small" << first << endl;
    }
    else
    {
        cout << "t2 is small" << second << endl;
    }
    return 0;
}
void time::getdata()
{
    cout << "enter hrs and minu" << endl;
    cin >> hrs >> minu;
}
time::time()
{
    hrs = 1;
    minu = 24;
}
