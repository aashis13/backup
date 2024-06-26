// WAP in c++ that takes number of elements in an array,
// print the array and to swap the first and last element of the array.

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n;
    cout << "Enter number elements in an array:\n";
    cin >> n;
    int arr[n];
    cout << "Enter a series of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The number are:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    swap(&arr[0], &arr[n - 1]);
    cout << "After swapping:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}