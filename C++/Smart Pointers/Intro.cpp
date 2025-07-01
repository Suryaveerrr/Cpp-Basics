#include <iostream>
#include <memory>
using namespace std;

int main()
{
    // Unique pointer (cannot be shared)
    unique_ptr<int> ptr1 = make_unique<int>(99);
    cout << "Unique pointer value: " << *ptr1 << endl;

    // Shared pointer (can be shared)
    shared_ptr<int> ptr2 = make_shared<int>(123);
    cout << "Shared pointer value: " << *ptr2 << endl;

    // No need to call delete! Gets freed automatically
    return 0;
}
