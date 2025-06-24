#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5, key = 30, found = -1;

    // Linear search
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = i; // store index if found
            break;
        }
    }

    if (found != -1)
        cout << "Element " << key << " found at index " << found << endl;
    else
        cout << "Element " << key << " not found" << endl;

    return 0;
}