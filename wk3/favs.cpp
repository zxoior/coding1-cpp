// Nate Ayala
// lets create a list fo favorites

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // create list
    vector<string> favs;

    string input;

    while(true) {
        cout << "what could you lke to do?\n";
        cout << "You can 'add', 'edit', 'remove', 'show', or 'quit'.\n";

        string input;
        getline(cin, input);
         
        if(input == "quit") {
            cout << "Thanks for playing.\n\n";
            break;
        }
        else if(input == "add") {
            cout << "Please add a favorite game; ";
            // ask the player to type game.
            getline(cin, input);
            // get input
            favs.push_back(input);
            // add input to list
        }
        else if(input == "show") {
            cout << "\nHere are your favorite games:\n";
            for(vector<string>::iterator iter = favs.begin(); iter != favs.end(); iter++) {
                cout << *iter << endl; 
            }
        }
        else {
            cout << "I dont recognize that input.\n";
        }
    }
        
}