#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "hello";
    string s2 = "world";
    string s3;

    // Concatenation
    s3 = s1 + " " + s2;
    cout << "Concatenation: " << s3 << endl;

    // Length
    cout << "Length of s3: " << s3.length() << endl;

    // Substring
    cout << "Substring: " << s3.substr(0, 5) << endl; // "hello"

    // Comparison
    cout << "Is s1 == s2? " << (s1 == s2) << endl; // 0 (false)

    // Finding
    size_t pos = s3.find("world");
    if (pos != string::npos)
        cout << "\"world\" found at: " << pos << endl;

    // Inserting
    s3.insert(5, " amazing");
    cout << "After insertion: " << s3 << endl;

    // Erasing
    s3.erase(5, 8); // removes " amazing"
    cout << "After erase: " << s3 << endl;

    // Replace
    s3.replace(0, 5, "hi");
    cout << "After replace: " << s3 << endl;

    // Iterating through characters
    cout << "Chars: ";
    for (char c : s3)
        cout << c << ' ';
    cout << endl;

    return 0;
}
