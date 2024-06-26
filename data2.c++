#include <iostream>
using namespace std;
class rectangle
{
private:
    int length, width;

public:
    rectangle(int length, int woidth)
    {
        this->length = length;
        this->width = width;
    }
    void getdata()
    {
        cout << "Enter length: " << endl;
        cin >> length;
        cout << "Enter width: " << endl;
        cin >> width;
    }
    int area()
    {
        return length * width;
    }
};
int main()
{
    
}