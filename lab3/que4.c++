#include <iostream>
using namespace std;
class Test
{
private:
    int x;

public:
    int y;
    void getdata()
    {
        cout << "Enter x and y" << endl;
        cin >> x >> y;
    }
};
int main()
{
    Test t;
    t.getdata();
    cout << "Enter the value of x" << endl;
    //cin >> t.x; // generates error
    cout << "Enter the value of y" << endl;
    cin >> t.y; // No error
}
// correct program
#include <iostream>
using namespace std;
class Test
{
private:
    int x;

public:
    int y;
    void getdata()
    {
        cout << "Enter x and y" << endl;
        cin >> x >> y;
    }
    void setX(int value)
    {
        x = value;
    }
};
int main()
{
    Test t;
    t.getdata();
    cout << "Enter the value of x" << endl;
    int xValue;
    cin >> xValue;
    t.setX(xValue); // No error
    cout << "Enter the value of y" << endl;
    cin >> t.y; // No error
    return 0;
}