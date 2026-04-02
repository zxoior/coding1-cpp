// Brian Foster Coding 1 Spring 2026
// using VS Codium and it's integrated terminal
// to learn about variables and logic

// compile in the Developer Command Prompt with
// 'cl Ehsc main.cpp'

#include <iostream>
using namespace std;

int main() {
    // '\n' or 'backslash n' makes a new line.
    cout << "\n\n\nAll about variables and logic!\n\n\n";

    // 40 minutes!

    //declaring a variable means it exists!
    // defining a variable means giving it a value.
    int playerAge = -1;             // intergers are whole numbers
    string playerName = "Sally";    // strings are for words/letters
    float playerHeight = 1.8f;      // height in meters
    bool playAgain = true;          // booleans are true or false.

    // an if statement is a branch in unreal engine.
    // if(test is true) do this thing. otherwise... skip it!
    if(playerAge == -1) {
        cout << "How old are you?\n";
        cin >> playerAge;

        if(playerAge < 13) {
            cout << "I'm sorry, this game is too grown up for you.\n";
        }
        else {
            cout << "wow! That's old!\n";
        }
    } // end of if(playerAge)

    // can you test to see if the palyer name is "sally" and if it is, 
    // ask the player what their name is, and assign their response
    // to playerName.

    if (playerName == "Sally") {
        cout << "Is your name Sally?\n(yes/no) ";
        string input;
        cin >> input;

        if(input == "yes") {
            cout << "Well, that's convenient!\n";
        }
        else {
            cout << "What is your name?\n";
            cin >> playerName;
        }

        cout << "Hello " << playerName << ".\n";

    } // end of if(true)

    // if their name and age matches the programmer of this program
    // unlock god mode.

    bool godMode = false;

    if(playerAge == 37 && playerName == "Brian") {
        cout << "Hello professor. God mode is enabled.\n";
        godMode = true;
    }

    if(playAgain) {
        cout << "Let's play a game!\n";

        // next class we'll build a "guess the number" game.
    }

    return 0;

} // end of main()