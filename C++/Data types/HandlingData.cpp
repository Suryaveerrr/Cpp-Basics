#include <iostream>
using namespace std;

int main()
{

    int playerHealth;
    int livesCount;
    long long playerID;
    float winPercentage;
    bool hasgameWon;
    char playerType;

    cin >> playerHealth;
    cin >> livesCount;
    cin >> playerID;
    cin >> winPercentage;
    cin >> hasgameWon;
    cin >> playerType;

    cout << "[PLAYER STATS]:\n";
    cout << "PLAYER HEALTH:" << playerHealth << endl;
    cout << "LIFE COUNT:" << livesCount << endl;
    cout << "PLAYER ID:" << playerID << endl;
    cout << "WIN%:" << winPercentage << endl;
    cout << "HAS GAME BEEN WON?:" << hasgameWon << endl;
    cout << "PLAYER TYPE:" << playerType << endl;

    return 0;
}