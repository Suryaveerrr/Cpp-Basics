#include <iostream>
using namespace std;

int main()
{
    int playerHealth;
    int lifeCount;
    lifeCount = 0;

    if (lifeCount > 0)
    {
        if (lifeCount >= 1)
        {

            if (lifeCount == 0)
            {
                cout << "Game Over";
            }
            else
            {
                cout << "You Have" << lifeCount << "Lives Left" << endl;
            }
        }
    }
    else
    {
        cout << "Game Over";
    }
}