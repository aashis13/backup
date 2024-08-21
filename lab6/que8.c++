#include <iostream>

class Distance
{
private:
    int meter;

public:
    Distance() : meter(0) {}

    // Friend function declaration
    friend int addFive(Distance);
};

// Friend function definition
int addFive(Distance d)
{
    // Accessing private data from a non-member function
    d.meter += 5;
    return d.meter;
}

int main()
{
    Distance D;
    std::cout << "Distance: " << addFive(D);
    return 0;
}