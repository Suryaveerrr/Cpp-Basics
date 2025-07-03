#include <iostream>
using namespace std;

class Shallow
{
public:
    int *data;
    Shallow(int val)
    {
        data = new int(val);
    }
    ~Shallow()
    {
        delete data;
    }
};

int main()
{
    Shallow a(42);
    Shallow b = a; // Default copy constructor (shallow copy)

    // Both a.data and b.data point to the same memory!
    cout << *(a.data) << " " << *(b.data) << endl;

    // When main() ends, both will call their destructors and delete the same pointer twice!
    // This leads to undefined behavior (usually a crash)
    return 0;
}