#include <iostream>
using namespace std;

int main()
{
    int playerHealth = 0;
    int lifeCount = 5;

    if (playerHealth == 50)
    {
        cout << "Player Health is Half";
    }
    else if (playerHealth == 100)
    {
        cout << "Player Heath is full.\n Life Count:" << lifeCount << endl;
    }
    else if (playerHealth == 0)
    {
        lifeCount -= 1;
        cout << "Player is Dead.\n Life Count:" << lifeCount << endl;
    }
}