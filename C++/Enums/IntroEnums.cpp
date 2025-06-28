#include <iostream>
using namespace std;

// Define an enum for game difficulty
enum Difficulty
{
    EASY,
    MEDIUM,
    HARD
};

int main()
{
    Difficulty gameMode = MEDIUM;

    // Use in a switch-case
    switch (gameMode)
    {
    case EASY:
        cout << "You chose EASY mode!" << endl;
        break;
    case MEDIUM:
        cout << "You chose MEDIUM mode!" << endl;
        break;
    case HARD:
        cout << "You chose HARD mode!" << endl;
        break;
    }

    // You can also print its integer value
    cout << "Numeric value of gameMode: " << gameMode << endl; // Will print 1 for MEDIUM

    return 0;
}
