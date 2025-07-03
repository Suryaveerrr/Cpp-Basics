#include <iostream>
using namespace std;

class Deep
{
public:
    int *data;
    Deep(int val)
    {
        data = new int(val);
    }
    // Custom copy constructor for deep copy
    Deep(const Deep &other)
    {
        data = new int(*(other.data));
    }
    ~Deep()
    {
        delete data;
    }
};

int main()
{
    Deep a(42);
    Deep b = a; // Deep copy now!

    cout << *(a.data) << " " << *(b.data) << endl;

    // a.data and b.data point to DIFFERENT memory locations.
    // No double free!
    return 0;
}