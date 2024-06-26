// // pointer : stores the affress of any other variable.
// // pass by value
// // pass by reference
// // pass by pointer

// // WAP in c++ that demonstrates pass by value by pointer.

// #include <iostream>
// using namespace std;
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {
//     int x = 10, y = 20;
//     cout << "Before swapping: " << x << " " << y << endl;
//     swap(&x, &y);
//     cout << "After swapping: " << x << " " << y << endl;
//     // cout << "x:" << x << "y:" << y << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

// Function prototype
void modify(int *);

int main()
{
    int num = 5;
    cout << "Before modify function: " << num << endl;
    modify(&num);
    cout << "After modify function: " << num << endl;
    return 0;
}

// Function to modify the value
void modify(int *valuePtr)
{
    *valuePtr = 15;
    cout << "Inside modify function: " << *valuePtr << endl;
}