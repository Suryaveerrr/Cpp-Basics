/*Define variables like health, attack, defense, healingPower for your player and display their values initially in your program using cout statements.
Create a method named TakeDamage() which takes an argument called damageToInflict and reduces the health of the player by damageToInflict once this function is called. Print the player health left after this function is called. The player health should not go below 0 (In negative).
Create a method named Heal() which takes an argument called healthToRecover and increase the health of the player once this function is called by the amount healthToRecover. Print the player health left after this function is called.
Create a method named DamageMultiplier() which takes an argument called multiplier and multiplies the damage that player can inflict when attacking enemies in future. Print the player attack after this function is called.
For example, Suppose the current attack value is 20, and you are passing 2 as a parameter in this function then-new attack value should become 20 * 2 = 40.
(The multiplier value can be a fractional value as well like 0.5)
Create and Call all these above functions and communicate effectively using cout statements what is happening in each step.*/
#include <iostream>
using namespace std;

int playerHealth = 100;
int playerAttack = 20;
int playerDefence;
int healingPower;

void takeDamage(int damagetoInflict)
{
    playerHealth = playerHealth - damagetoInflict;
    cout << "Player Health After Damage: " << playerHealth << endl;
}

void heal(int healthtoRecover)
{
    playerHealth = playerHealth + healthtoRecover;
    cout << "Player Health After Healing: " << playerHealth << endl;
}

void damageMultiplier(float multiplier)
{
    playerAttack = playerAttack * multiplier;
    cout << "Player Attack After Multiplier: " << playerAttack << endl;
}

int main()
{
    cout << "Player Health:" << playerHealth << endl;
    cout << "Player Attack:" << playerAttack << endl;
    cout << "Player Defence:" << playerDefence << endl;
    cout << "Healing Power:" << healingPower << endl;

    takeDamage(20);
    heal(40);
    damageMultiplier(2);
}