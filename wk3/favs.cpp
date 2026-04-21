// Nate Ayala
// lets create a list fo favorites

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> favs;
    // create list

    vector<string>::iterator chosenFavs;
    
    string input;

    chosenFavs = find(favs.begin(), favs.end(), input);

    while(true) {
        cout << "\nWhat could you lke to do?\n";
        cout << "You can 'add', 'edit', 'remove', 'show', or 'quit'.\n\n";

        string input;
        getline(cin, input);
         
        if(input == "quit") {
            cout << "\nThanks for playing.\n\n";
            break;
        }   // end of 
        else if(input == "add") {
            cout << "\nPlease add a favorite game;\n\n";
            // ask the player to type game.
            getline(cin, input);
            // get input
            favs.push_back(input);
            // add input to list
        }   // end of add
        else if(input == "show") {
            cout << "\nHere are your favorite games:\n";
            for(vector<string>::iterator iter = favs.begin(); iter != favs.end(); iter++) {
                cout << *iter << endl; 
            }
        }   // end of show
        else if(input == "remove") {
            cout << "\nWhat name should we remove from your Favs?\n";
            string input;
            cin >> input;

            auto iter = find(favs.begin(), favs.end(), input);

            if(iter != favs.end()) {
                cout << "Found it!\n";
                favs.erase(iter);
            }
            else {
                cout << "I could not find that name in favs.\n";
            }
        }   // end of remove
        else if(input == "edit"){
            cout << "Lets give " << *chosenFavs << " a new name!\n";
            cin >> input;
            *chosenFavs = input;

            cout << "Their name is now " << *chosenFavs << ".\n";
        }   // end of edit
        else {
            cout << "I dont recognize that input.\n";
        }   // end of else


    }
        
}