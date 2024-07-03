#include <iostream>
using namespace std;

class student
{
private:
    char name[30];
    int rollNo;
    int total;
    float perc;

public:
    // member function to get student's details
    void getDetails()
    {
        cout << "Enter name: ";
        cin.getline(name, 30);

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter total marks out of 500: ";
        cin >> total;

        perc = (float)total / 500 * 100;
    }

    // member function to print student's details
    void showDetails()
    {
        cout << "----------------------------" << endl;
        cout << "Student details:" << endl;
        cout << "Name: " << name << ",";
        cout << "Roll Number: " << rollNo << ",";
        cout << "Total marks: " << total << ",";
        cout << "Percentage: " << perc << "%" << endl;
    }
};
int main()
{
    student std;
    std.getDetails();
    std.showDetails();
    return 0;
}