#include <iostream>

class MyClass
{
private:
    static int count; // static member variable to keep track of object count

public:
    MyClass()
    {
        count++; // increment count when an object is created
    }

    static void showcount()
    {
        std::cout << "Number of objects created: " << count << std::endl;
    }
};

int MyClass::count = 0; // initialize the static member variable

int main()
{
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    MyClass::showcount(); // call the static member function to display the count

    return 0;
}