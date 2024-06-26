// C++ program to demonstrate function overloading
#include <iostream>
using namespace std;

void display(int);
void display(float);
void display(int, float);

int main()
{
    int a = 5;
    float b = 5.5;
    display(a);
    display(b);
    display(a, b);
    return 0;
}

void display(int num)
{
    cout << " Integer number: " << num << endl;
}

void display(float num)
{
    cout << " Float number: " << num << endl;
}

void display(int num1, float num2)
{
    cout << " Integer number: "<< num1 << " and Float number: " << num2 << endl;
}