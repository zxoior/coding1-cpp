// Brian Foster Coding 1 Spring 2026
// Our first C++ program

// to compile, open the Developer Command Prompt for VS 2022
// navigate to this folder with 'cd' for 'changed directory'
// use the command 'cl /EHsc filename.cpp' (in this case, it's 'main.cpp')
// and then type 'filename' to run the .exe (in this case, it's 'main')

#include <iostream>         // in-out stream, for sending text to the console.
#include <string>           // for player name

using namespace std;        // so we don't have to type "std::" all the time.

// this is where our program starts running code.
int main() {
    // variables at the top is best practice.
    string playerName;          // variable names use camelCase

    // ask the player what their name is
    cout << "what is you name, player? ";

    // get input from the player using C in
    cin >> playerName;

    cout << "Hello " << playerName << "." << endl;

    // cout << "Hello world!" << endl;       // C out for "console out"
                                        // end L for "end line"

    return 0;                         // the program finished successfully.
}