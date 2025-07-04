#include <iostream>
using namespace std;

void riskyFunction(int type)
{
    if (type == 1)
        throw 1.23; // double
    else if (type == 2)
        throw "Critical error!"; // C-string
    else
        throw 404; // int
}

int main()
{
    try
    {
        riskyFunction(2); // Try changing this to 1 or 3
    }
    catch (double d)
    {
        cout << "Caught a double: " << d << endl;
    }
    catch (const char *msg)
    {
        cout << "Caught a string: " << msg << endl;
    }
    catch (int code)
    {
        cout << "Caught an int: " << code << endl;
    }
    cout << "End of program!" << endl;
    return 0;
}