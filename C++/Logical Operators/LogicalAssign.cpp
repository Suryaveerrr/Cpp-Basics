/*Write a code with the following conditions, this is a simple version of enemy and player AI.
If a player is in range and the player is not attacking then print out → the enemy should attack
If a player is in range and the player is defending then print out → Enemy should hold
If a player is in range and If player health is less than 20 and the player is attacking → player should deliver a rage attack.
If a player is in range and the player is not defending and the player health is full or the player's health is less than 10 → enemy should do a special ability attack.


NOTE:
Variables Required → isPlayerInRange, isPlayerAttacking , isPlayerDefending, player health
Take all the values of variables from the console input
You are just printing the statements for now to understand the logic behind it, so you can experiment with different values on input.*/
#include <iostream>
using namespace std;

int main()
{

    bool isPlayerInRange;
    bool isPlayerAttacking;
    bool isPlayerDefending;
    int playerHealth;

    cin >> playerHealth;
    cin >> isPlayerInRange;
    cin >> isPlayerAttacking;
    cin >> isPlayerDefending;

    if (isPlayerInRange && !isPlayerAttacking)
    {
        cout << "The Enemy Should Attack" << endl;
    }
    if (isPlayerInRange && isPlayerDefending)
    {
        cout << "Enemy Should Hold" << endl;
    }
    if (isPlayerInRange && playerHealth < 20 && isPlayerAttacking)
    {
        cout << "Special Attack by Player" << endl;
    }
    if (isPlayerInRange && !isPlayerDefending && (playerHealth == 100 || playerHealth <= 10))
    {
        cout << "Special Attack by Enemy" << endl;
    }
}
