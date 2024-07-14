#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    rectangle(int l, int b) : length(l), breadth(b) {}

    ~rectangle() {}

    // Postfix increment operator overloading
    rectangle operator++(int)
    {
        rectangle temp = *this; // Save current state
        length++;
        breadth++;
        return temp; // Return old value
    }

    void display()
    {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

int main()
{
    rectangle r1(5, 6);
    cout << "Before incrementing r1:" << endl;
    r1.display();

    cout << "Using postfix increment on r1:" << endl;
    r1++; // Postfix increment
    r1.display();

    return 0;
}
