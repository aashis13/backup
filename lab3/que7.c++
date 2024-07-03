#include <iostream>
#include <string>

using namespace std;

class Item
{
private:
    string name;
    int code;
    double price;

public:
    Item(string n, int c, double p) : name(n), code(c), price(p) {}

    // ~Item()
    // {
    //     cout << "Item " << name << " with code " << code << " is being destroyed" << endl;
    // }

    void display() const
    {
        cout << "Item Name: " << name << endl;
        cout << "Item Code: " << code << endl;
        cout << "Item Price: " << price << endl;
    }
};

int main()
{
    Item *items[3];
    string name;
    int code;
    double price;

    for (int i = 0; i < 3; ++i)
    {
        cout << "Get the information" << endl;
        cout << "item no. " << (i + 1) << endl;
        cout << "enter item name!!:\n";
        cin >> name;
        cout << "enter item code!!:\n";
        cin >> code;
        cout << "enter item price!!:\n";
        cin >> price;
        items[i] = new Item(name, code, price);
    }

    cout << "\nItem details are:" << endl;
    for (int i = 0; i < 3; ++i)
    {
        items[i]->display();
    }

    // for (int i = 0; i < 3; ++i)
    // {
    //     delete items[i];
    // }

    return 0;
}
