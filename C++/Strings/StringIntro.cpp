#include <iostream>
#include <cstring>

class MyString
{
    char *str;
    int len;

public:
    // Constructor
    MyString(const char *s = "")
    {
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }

    // Copy Constructor
    MyString(const MyString &other)
    {
        len = other.len;
        str = new char[len + 1];
        strcpy(str, other.str);
    }

    // Destructor
    ~MyString()
    {
        delete[] str;
    }

    // Display string
    void display() const
    {
        std::cout << str << std::endl;
    }

    // Get length
    int length() const
    {
        return len;
    }

    // Concatenate
    void concat(const MyString &s2)
    {
        char *temp = new char[len + s2.len + 1];
        strcpy(temp, str);
        strcat(temp, s2.str);
        delete[] str;
        str = temp;
        len += s2.len;
    }

    // Compare
    int compare(const MyString &s2) const
    {
        return strcmp(str, s2.str);
    }
};

int main()
{
    MyString s1("Hello, ");
    MyString s2("World!");
    s1.display(); // Hello,
    s2.display(); // World!

    s1.concat(s2);
    s1.display(); // Hello, World!

    std::cout << "Length: " << s1.length() << std::endl; // Length: 13

    std::cout << "Comparison: " << s1.compare(s2) << std::endl; // >0, <0 or 0
    return 0;
}