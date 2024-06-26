//  C++ that demonostrate Inline function
#include <iostream>
using namespace std;
// Inline function definition
inline int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 3, y = 3;
    int sum = add(x, y); // Calling the inline function

    cout << "Sum= " << sum << endl;

    return 0;
}