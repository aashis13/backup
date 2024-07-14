#include <iostream>
using namespace std;

class Distance
{
    int feet, inch;

public:
    Distance(int, int) {}
    Distance(float f);
    void display();
};
Distance::Distance(float f)
{
    feet = int(f);
    inch = 12 * (f - feet);
}
void Distance::display()
{
    {
        cout << feet << ": Feet(s)" << endl;
        cout << inch << ": inches" << endl;
    }
}

int main()
{
    float distance;
    cout << "Enter distances \n";
    cin >> distance;

    Distance d = distance;
    d.display();

    return 0;
}