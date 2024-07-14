#include <iostream>
using namespace std;
class time
{
private:
    int hrs, minus;

public:
    time() {}
    time(int t)
    {
        hrs = t / 60;
        minus = t % 60;
    }
    void display()
    {
        cout << hrs << "" << minus << "" << endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the duration of the time: ";
    
    return 0;
}