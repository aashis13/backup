#include <iostream>
#include <string>
using namespace std;

class Manager
{
public:
    string name;
    int age;

    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    const int numManagers = 3;
    Manager managers[numManagers];

    // Initialize the array of managers
    managers[0].name = "John Cena";
    managers[0].age = 35;

    managers[1].name = "Adem Smith";
    managers[1].age = 42;

    managers[2].name = "Mike Johnson";
    managers[2].age = 28;

    // Display details of all managers
    for (int i = 0; i < numManagers; i++)
    {
        cout << "Manager " << i + 1 << ":\n";
        managers[i].displayDetails();
        cout << endl;
    }

    return 0;
}