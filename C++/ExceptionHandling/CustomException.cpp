#include <iostream>
#include <exception>
using namespace std;

// Custom exception class
class MyException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Custom Exception Thrown!";
    }
};

int main()
{
    try
    {
        throw MyException();
    }
    catch (const MyException &ex)
    {
        cout << "Caught my custom exception: " << ex.what() << endl;
    }
    catch (...)
    {
        cout << "Caught something else!" << endl;
    }
    return 0;
}
