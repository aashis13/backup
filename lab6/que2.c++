#include <iostream>
using namespace std;

class Base
{
public:
    virtual void testFunction(); // Declare the function as virtual
};

class Derived : public Base
{
public:
    void testFunction() override; // Override the base class function
};

void Base::testFunction()
{
    cout << "Base class" << endl;
}

void Derived::testFunction()
{
    cout << "Derived class" << endl;
}

int main()
{
    Base *basePtr;      // Declare a pointer of base class type
    Derived derivedObj; // Create an object of derived class

    basePtr = &derivedObj; // Assign the address of derived object to base pointer

    basePtr->testFunction(); // Call the function using base pointer

    return 0;
}