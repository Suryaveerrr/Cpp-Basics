/*Check different combinations of player health and enemy health using if-else statements:
Create a chained if-else statement and check
whether the player health is full?
whether the player's health in half?
whether the player's health is zero(death condition)
If player health is greater than 0, check the enemy health whether it's full/half/zero.
If player health or enemy health is zero, then print the message game over and display player won or lost depending upon who died.
If player and enemy health both are zero, print the message of the game over and display a draw statement.


NOTE:
Variables Required → Player Health, Enemy Health
Take all the values of variables from the console input
You are just printing the statements for now to understand the logic behind it, so you can experiment with different values on input.*/
#include <iostream>
using namespace std;

int main()
{
    int playerHealth;
    int enemyHealth;

    cin >> playerHealth;
    cin >> enemyHealth;

    // Player health status
    if (playerHealth == 100)
    {
        cout << "Player Health is Full" << endl;
    }
    else if (playerHealth == 50)
    {
        cout << "Player Health is Half" << endl;
    }
    else if (playerHealth <= 0)
    {
        cout << "Player is Dead" << endl;
    }

    // Enemy health status (only if player is alive)
    if (playerHealth > 0)
    {
        if (enemyHealth == 100)
        {
            cout << "Enemy Health is Full" << endl;
        }
        else if (enemyHealth == 50)
        {
            cout << "Enemy Health is Half" << endl;
        }
        else if (enemyHealth <= 0)
        {
            cout << "Enemy is Dead" << endl;
        }
    }

    // Game over conditions
    if (playerHealth <= 0 && enemyHealth <= 0)
    {
        cout << "Game Over\nDRAW" << endl;
    }
    else if (playerHealth <= 0)
    {
        cout << "Game Over\nYOU LOST" << endl;
    }
    else if (enemyHealth <= 0)
    {
        cout << "Game Over\nYOU WON" << endl;
    }

    return 0;
}
