#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // Allocate memory for an array of size n
    int *arr = new int[n];

    // Assign values
    for (int i = 0; i < n; ++i)
    {
        arr[i] = i + 1;
    }

    // Print array
    cout << "Array elements: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] arr;

    return 0;
}
