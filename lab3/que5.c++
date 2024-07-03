#include <iostream>
using namespace std;

class Item
{
    int code, price;

public:
    Item() // Default Constructor
    {
        code = 0;
        price = 0;
    }

    Item(int c, int p) // Parameterized Constructor
    {
        code = c;
        price = p;
    }

    Item(const Item &x) // Copy Constructor
    {
        code = x.code;
        price = x.price;
    }

    ~Item()
    {
        cout << "Function is executed automatically just before the lifetime of an object finishes" << endl;
        cout << "Memory is deallocated!" << endl;
    }

    void display()
    {
        cout << "Code = " << code << endl;
        cout << "Price = " << price << endl
             << endl;
    }
};

int main()
{
    Item item1; // Default Constructor
    item1.display();

    Item item2(102, 300); // Parameterized Constructor
    item2.display();

    Item item3 = item2; // Copy Constructor
    item3.display();

    return 0;
}