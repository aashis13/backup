#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle();
};

class Car : public Vehicle
{
public:
    Car();
};

// Default constructor for the Vehicle class.

Vehicle::Vehicle()
{
    cout << "This is a Vehicle" << endl;
}

Car::Car()
{
    cout << "This is a Car" << endl;
}

int main()
{
    Car c;
    return 0;
}