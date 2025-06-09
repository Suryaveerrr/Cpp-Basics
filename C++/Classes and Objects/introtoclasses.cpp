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
}

class Player
{
    // Constructor - Special Function inside a class
    // 1. IT SHOULD BE PUBLIC
    // 2.EXACT SAME NAME AS CLASS
    // 3.NO RETURN TYPE

public:
    int playerHealth = 100; // Member Variable
    Player()                // CONSTRUCTOR
    {
        cout << "Constructor of a player class" << endl;
    }

private:
    void playerAttack() // Member Function
    {
        cout << "I am Attacking" << endl;
    }
};

int main()
{
    gamestory();

    Player PlayerObj; // Implementation of the blueprint (OBJECT)
}