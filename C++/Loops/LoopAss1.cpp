/*These are some very simple tasks just to get you accustomed to using loops:
Write a for loop which will run 10 times and call the shooting() function inside it.
Write a while loop that will run 5 times and call the healing() function inside it.
Write a do-while loop that will run 7 times and call the attacking() function inside it.
The shooting(), healing(), attacking() functions should only have a debug statement inside them which should print:
"player is shooting"
"player is healing"
"player is attacking"
*/
#include <iostream>
using namespace std;

void shooting()
{

    cout << "Player is Shooting" << endl;
}

void healing()
{
    cout << "Player is Healing" << endl;
}

void attacking()
{
    cout << "Player is Attacking" << endl;
}

int main()
{

    int k = 0;
    int j = 0;

    for (int i = 0; i < 10; i++)
    {
        shooting();
    }

    while (k < 5)
    {
        healing();
        k++;
    }

    do
    {
        attacking();
        j++;

    } while (j < 7);
}