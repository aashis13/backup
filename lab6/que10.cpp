#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    char name[20];
    static int Count; // Static member to keep track of the count of students

public:
    void getdata()
    {
        cout << "Enter roll and name: ";
        cin >> roll >> name;
        Count++;
    }

    void displaycount()
    {
        cout << "Count: " << Count << endl;
    }
};

// Initialize static member of class student
int student::Count = 0;

int main()
{
    student s1, s2, s3;

    // Display initial count
    s1.displaycount();
    s2.displaycount();
    s3.displaycount();

    // Get data for each student
    s1.getdata();
    s2.getdata();
    s3.getdata();

    // Display final count
    s1.displaycount();
    s2.displaycount();
    s3.displaycount();

    return 0;
}
