#include <iostream>
using namespace std;

int playerHealth = 100;

int GetPlayerHealth()
{

    return 100; // No lines get executed after return
}

int main()
{

    cout << "PLAYER HEALTH: " << GetPlayerHealth() << endl;
    return 0; // optional in main function
}