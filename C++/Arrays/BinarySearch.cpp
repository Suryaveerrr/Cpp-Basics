#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5, key = 30;
    int left = 0, right = n - 1, found = -1;

    // Binary search
    while (left <= right)
    {
        int mid = left + (right - left) / 2; // to avoid overflow
        if (arr[mid] == key)
        {
            found = mid;
            break;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (found != -1)
        cout << "Element " << key << " found at index " << found << endl;
    else
        cout << "Element " << key << " not found" << endl;

    return 0;
}