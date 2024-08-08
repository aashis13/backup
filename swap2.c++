#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapFirstAndLast(int arr[], int size)
{
    if (size > 1)
    {
        int temp = arr[0];
        arr[0] = arr[size - 1];
        arr[size - 1] = temp;
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Array size must be greater than 0." << endl;
        return 1;
    }

    int *arr = new int[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    cout << "Original array:\n";
    printArray(arr, n);

    swapFirstAndLast(arr, n);

    cout << "Array after swapping first and last elements:\n";
    printArray(arr, n);

    delete[] arr; // Clean up dynamically allocated memory
    return 0;
}