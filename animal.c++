#include <iostream>
using namespace std;
class animal
{
public:
    void eat();
    void sleep();
};
class Dog : public animal
{
public:
    void bark();
};
void animal::eat()
{
    cout << "Animal is eating" << endl;
}
void animal::sleep()
{
    cout << "Animal is sleeping" << endl;
}
void Dog::bark()
{
    cout << "Dog is barking" << endl;
}
int main()
{
    Dog d1;
    d1.bark();
    d1.eat();
    d1.sleep();
    return 0;
}