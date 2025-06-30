#include <iostream>
using namespace std;

int main()
{
    // Allocate memory for an int on the heap
    int *p = new int;

    // Assign a value
    *p = 42;

    cout << "Dynamically allocated int value: " << *p << endl;

    // Free the allocated memory
    delete p;

    return 0;
}
