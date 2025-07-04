#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 42; // throw an int
    }
    catch (int e)
    {
        cout << "Caught an integer: " << e << endl;
    }

    try
    {
        throw "Oops, a string error!"; // throw a C-string
    }
    catch (const char *msg)
    {
        cout << "Caught a string: " << msg << endl;
    }

    cout << "Program still running after handling exceptions!" << endl;
    return 0;
}