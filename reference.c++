// // WAP in c++ that demonstrates pass by reference.
// #include <iostream>
// using namespace std;
// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int x = 10, y = 20;
//     cout << "Before swapping: " << x << " " << y << endl;
//     swap(x, y);
//     cout << "After swapping: " << x << " " << y << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

// Function prototype
void modify(int &);

int main()
{
    int num = 5;
    cout << "Before modify function: " << num << endl;
    modify(num);
    cout << "After modify function: " << num << endl;
    return 0;
}

// Function to modify the value
void modify(int &value)
{
    value = 10;
    cout << "Inside modify function: " << value << endl;
}