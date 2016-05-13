#include <iostream>

using namespace std;

void playGame()
{
    cout<<"Play game called";
}
void loadGame()
{
    cout<<"Load game called";
}
void playMultiplayer()
{
    cout << "Play multiplayer called";
}

int main()
{
    int input;

    cout<<"1. Play game\n";
    cout<<"2. Load game\n";
    cout<<"3. Play multiplayer\n";
    cout<<"4. Exit\n";
    cout<<"Selection: ";
    cin>>input;
    switch (input) {
        case 1: //Note the colon, not a semicolon
            playGame();
            break;
        case 2:
            loadGame();
            break;
        case 3:
            playMultiplayer();
            break;
        case 4:
            cout<<"Thank you for playing!\n";
            break;
        default:
            cout<<"Error, bad input, quitting\n";
            break;
    }
    cin.get();
}

