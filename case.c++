#include <iostream>
using namespace std;

// Function prototypes
void choose();
double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);

int main()
{
    int choice;
    double num1, num2, result;

    do
    {
        choose();
        cin >> choice;

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        if (choice == 1)
        {
            result = Add(num1, num2);
            cout << "Sum: " << result << endl;
        }
        else if (choice == 2)
        {
            result = Sub(num1, num2);
            cout << "Difference: " << result << endl;
        }
        else if (choice == 3)
        {
            result = Mul(num1, num2);
            cout << "Product: " << result << endl;
        }
        else if (choice == 4)
        {
            if (num2 != 0)
            {
                result = Div(num1, num2);
                cout << "Quotient: " << result << endl;
            }
            else
            {
                cout << "Error: Division by zero!" << endl;
            }
        }
        else if (choice == 5)
        {
            cout << "Exiting program." << endl;
        }
        else
        {
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

// Function to display menu
void choose()
{
    cout << "Menu:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter any number for operation: ";
}

// Function to add two numbers
double Add(double a, double b)
{
    return a + b;
}

// Function to subtract two numbers
double Sub(double a, double b)
{
    return a - b;
}

// Function to multiply two numbers
double Mul(double a, double b)
{
    return a * b;
}

// Function to divide two numbers
double Div(double a, double b)
{
    return a / b;
}