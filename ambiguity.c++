#include <iostream>
using namespace std;
class Base1
{
public:
    void show()
    {
        cout << "This is Base1" << endl;
    }
};
class Base2
{
public:
    void show()
    {
        cout << "This is Base2" << endl;
    }
};
class Derived : public Base1, public Base2
{
};
int main()
{
    Derived d;
   // d.show(); // it shows error because of ambiguity
    d.Base1::show();
    d.Base2::show();
    return 0;
}