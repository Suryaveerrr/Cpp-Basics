#include <iostream>
using namespace std;

int main()
{
    int playerHealth;
    int playerLives;

    bool playerWon = true;
    bool playerLost = true;

    playerHealth = 100;
    playerLives = 3;

    if (playerHealth <= 0 && playerLives <= 0) // AND (&&) OPERATOR = BOTH CONDITIONS SHOULD BE TRUE
    {
        cout << "Game Over";
    }
    if (playerWon == true || playerLost == true) // OR (||) OPERATOR = ONE OF THE CONDITIONS SHOULD BE TRUE
    {
        cout << "Game Over";
    }

    /*if (playerHealth != 100) //NOT (!) OPERATOR
    {
        cout << "Allow to Heal" << endl;
    } */
}