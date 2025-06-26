#include <iostream>
using namespace std;

int main()
{
    int x = 42;
    int *p = &x; // 'p' is a pointer to int, storing the address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer p stores: " << p << endl;              // Address of x
    cout << "Value at address stored in p: " << *p << endl; // Dereferencing

    // Changing value of x using pointer
    *p = 100;
    cout << "New value of x: " << x << endl;

    return 0;
}
