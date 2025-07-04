#include <iostream>
using namespace std;

void throwAnything(int x)
{
    if (x == 1)
        throw 1;
    else if (x == 2)
        throw 2.2;
    else
        throw "Some weird error!";
}

int main()
{
    try
    {
        throwAnything(3);
    }
    catch (const char *s)
    {
        cout << "Caught a string: " << s << endl;
    }
    catch (...)
    {
        cout << "Caught something, but I don’t know what it was!" << endl;
    }
    return 0;
}