/*Create a gameStory() function and call it inside main() function.
Inside gameStory() function, create an awesome game story of your game using cout statements.
Create a Player class. Inside the Player class:
Create a public property called health
Create a public property called attack_power
Create a constructor for Player class which takes 2 integer parameters to assign health and attack_power properties
Create an object of Player inside main() function. (After gameStory() is called)*/
#include <iostream>
using namespace std;

void gamestory()
{
    cout << "======================================================" << endl;
    cout << "               S U R V I V E  -  D A Y  Z E R O        " << endl;
    cout << "======================================================" << endl;
    cout << endl;

    cout << "Year 2087. The sky is no longer blue, and silence has become louder than gunfire." << endl;
    cout << "Cities are ash. Governments collapsed. Nature took back what man abandoned." << endl;
    cout << endl;

    cout << "A virus named 'Red Dust' didn't just kill — it erased." << endl;
    cout << "Only a few survived... not by luck, but by turning ruthless." << endl;
    cout << endl;

    cout << "You are one of the few. No memory of how you got here. Just the weight of survival on your back." << endl;
    cout << "A broken wristwatch. A blood-stained map. A flickering flashlight." << endl;
    cout << endl;

    cout << "You open your eyes in a collapsed shelter. Dust chokes the air. Something growls in the distance." << endl;
    cout << "Footsteps echo... not yours." << endl;
    cout << endl;

    cout << "Welcome to Day Zero, survivor." << endl;
    cout << "No more rules. No more second chances. Only one goal: STAY ALIVE." << endl;
    cout << endl;
}

class Player
{
public:
    int playerHealth = 100; // Member Variables
    int attack_power = 10;  // Member Variables
    // Constructor
    Player(int a, int b)
    {
        playerHealth = a;
        attack_power = b;
    }
};

int main()
{
    gamestory();
    Player playerObj(100, 20);

    cout << "Player Created!" << endl;
    cout << "Health: " << playerObj.playerHealth << endl;
    cout << "Attack Power: " << playerObj.attack_power << endl;
    cout << sizeof(Player);
}