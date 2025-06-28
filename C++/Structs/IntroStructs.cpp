#include <iostream>
using namespace std;

// Define a struct called 'Player'
struct Player
{
    string name;
    int score;
    float health;
};

int main()
{
    Player p1; // Create a Player variable

    // Assign values
    p1.name = "Kuro";
    p1.score = 150;
    p1.health = 97.5f;

    // Access and print values
    cout << "Name: " << p1.name << endl;
    cout << "Score: " << p1.score << endl;
    cout << "Health: " << p1.health << endl;

    return 0;
}
