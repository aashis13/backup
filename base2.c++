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
class Dericed : private Base // private is visibility
{
   // x is not accessible
    //y is private
    //z is private
};
class Derived : protected Base
{
    // x is not accessible
    // y is protected
    // z is protected
};
class Derived : public Base
{
    // x is not accessible
    // y is protected
    // z is public
};