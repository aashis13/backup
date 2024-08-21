#include <iostream>
using namespace std;

class base_class
{
public:
    virtual void display() = 0; // Pure virtual function
};

class derived_class : public base_class
{
public:
    void display()
    {
        cout << "This is simple illustration of abstract class and pure virtual function" << endl;
    }
};

int main()
{
    derived_class obj;
    obj.display();
    return 0;
}