#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    rectangle(int l, int b) : length(l), breadth(b) {}

    ~rectangle() {}

    void operator++()
    {
        ++length;
        ++breadth;
    }

    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
    }
};

int main()
{
    rectangle r1(5, 6);
    cout << "Rectangle r1\n" << endl;
    r1.display();
    ++r1;
    r1.display();
    cout << "----------------------" << endl;
    rectangle r2(0, 0);
    cout << "Rectangle r2\n" << endl;
    r2.display();
    ++r2;
    r2.display();
    ++r2;
    r2.display();
    return 0;
}
