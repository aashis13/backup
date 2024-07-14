#include <iostream>
using namespace std;

class Item
{
private:
    int code, price;

public:
    Item();
    Item(int c, int p);
    Item(const Item &x);
    ~Item();
    void display();
};

Item::Item()
{
    code = 0;
    price = 0;
    cout << "Default Constructor" << endl;
}

Item::Item(int c, int p)
{
    code = c;
    price = p;
    cout << "Parameterized Constructor" << endl;
}

Item::Item(const Item &x)
{
    code = x.code;
    price = x.price;
    cout << "Copy Constructor" << endl;
}

Item::~Item()
{
    cout << "Function is executed automatically just before the lifetime of an object finishes" << endl;
    cout << "memory is deallocated!!" << endl;
}

void Item::display()
{
    cout << "Code = " << code << endl;
    cout << "Price = " << price << endl
         << endl;
}

int main()
{
    Item item1;
    item1.display();

    Item item2(102, 300);
    item2.display();

    Item item3 = item2;
    item3.display();

    return 0;
}