#include <iostream>
using namespace std;
class Base
{
public:
    void show()
    {
        cout << "This is Base" << endl;
    }
};
class Derived : public Base
{
public:
    void show()
    {
        cout << "This is Derived" << endl;
    }
};
int main()
{
    Derived d;
    d.Base::show();
    d.show();
    return 0;
}