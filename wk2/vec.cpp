// Coding 1 spring 2026
// Vectors iterators and algorithms

// cl /EHsc vec.cpp
// vec

// cl /EHsc vec.cpp && vec

#include <iostream>
#include <string>
#include <vector>       // for vectors!
#include <algorithm>

using namespace std;

int main() {
    cout << "Let learn about Vectors!\n";

    int chapter = 0;
    cout << "What program would you like to run?\n";
    cout << "Press 1 for Vectors.\n";
    cout << "Press 2 for push_back() and pop_back().\n";
    cout << "Press 3 for algorithms.\n";

    cin >> chapter;


    if(chapter == 1) {
        // collection initializer
        vector<string> names = {"Finn", "Jake", "Bubblegum", "Marceline", "BMO"};
        cout <<"There are " << names.size() << "in the vector.\n";
        cout << "Here are your names:\n";

        for(int i = 0; i < names.size(); i++) {
            cout << i + 1 << ". " << names[i] << "\n"; 
        }

        cout << "the first name in the vector is " << *(names.begin()) << ".\n";

        // creating first iterator. its a pointer to an element in a vector.
        vector<string>::iterator iter;

        iter = names.begin() + 2;

        // dereferenced the iter with an asterick at the beginning.
        // whats' with that word "dereference"? a pointer can be thought of as a nickname
        // a "referance" to something else. when we de-reference it, we get the value
        // that is at that point.
        cout << "iter is pointing at " << *iter << ".\n";


    } // end of chapter 1
    if (chapter == 2) {
        cout << "lets use push_back() and pop_back().\n";

        vector<string> favMovies;

        while(favMovies.size() < 3) {
            cout << "please add a favorite movie: ";
            string input;
            cin >> input;
            // cin.ignore(INT_MAX);

            favMovies.push_back(input);
        }

        // this time , use a for look with an iterator to move through the vector
        for(vector<string>::iterator iter = favMovies.begin(); iter != favMovies.end(); iter++) {
            cout << *iter << endl; 
        }


    } // end of chapter 2
    if(chapter == 3){
        vector<string> friends;

        friends.push_back("Joey");
        friends.push_back("Monica");
        friends.push_back("Phoebe");
        friends.push_back("Ross");
        friends.push_back("Chandler");
        friends.push_back("Rachael");

        cout << "here are your friends:\n";
        for(int i = 0; i < friends.size(); i++) {
            cout << friends[i] << ".\n";
        }

        cout << "Please choose a friend to go visit:\n";
        vector<string>::iterator chosenFriend;

        string input;
        cin >> input;

        chosenFriend = find(friends.begin(), friends.end(), input);

        if(chosenFriend != friends.end()) {
            // displays the name of the chosen friend.. if we found one
            cout << "Lets talk to " << *chosenFriend << " today!\n";
        }
        else {
            cout << "I couldnt find " << input << " in your friends.\n";
        }

        cout << "Lets give " << *chosenFriend << " a new name!\n";
        cin >> input;
        *chosenFriend = input;

        cout << "Their name is now " << *chosenFriend << ".\n";



        //use algorithm to find a friend
        // chosenFriend = find(friends.begin(), friends.end())
    } // end of chapter 3
    else {
        cout << chapter << " isnt one of the options.\n";
    }

}