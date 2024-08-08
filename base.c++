#include <iostream>
using namespace std;
class Base
{
private:
    int x;

protected:
    int y;

public:
    int z;
};
class Derived : public Base
{
public:
    void getdata()
    {
        cout << "enter the value of x, y and z" << endl;
        cin >> x;
        cin >> y;
        cin >> z;
    }
}; 
int main()
{
    Derived d;
    d.getdata();
    cout << "the value of x=" << d.x << endl;
    cout << "the value of y=" << d.y << endl;
    cout << "the value of z=" << d.z << endl;
    return 0;
}
