#include <iostream>
using namespace std;

int main()
{

    int playerHealth = 75;
    string healthStatus;

    healthStatus = (playerHealth > 50) ? "Good" : "Low";
    cout << "Player's Health Status: " << healthStatus << endl;
}
