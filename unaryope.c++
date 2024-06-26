#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breath;

public:
    Rectangle() {}
    Rectangle(int l, int b)
    {
        length = l;
        breath = b;
    }
    void operator++()
    {
        ++length;
        ++breath;
    }
    void display()
    {
        cout << "Length: " << length << " Breath: " << breath << endl;
    }
};
int main()
{
    Rectangle r1(2, 3);
    cout << "Before increment: ";
    r1.display();
    ++r1;
    cout << "After increment: ";
    r1.display();
    return 0;
}