// Coding 1
// Switch, random numbers, and while loops

// your task... create the rest of the code to say "Random Numbers!"
// the run the program.

#include <iostream>
#include <random>       //for random numbers
#include <ctime>        // for seeding the random numbers.

using namespace std;

int main() {
    srand(time(0));         // seed thr random number generator with the current time.
    cout << "\n\nRandom Numbers!\n\n";

    cout << "Our first random number is \n" << rand() << ".\n";

    cout << "Here are ten random numbers:\n";

    int counter = 0;
    while(counter++ <10) {
        cout << (rand() % 10) + 1 << endl;
    }

    // guess the number game 
    // the computer picks a random number between 1 and 10 (inclusive)
    int theNumber = (rnad() % 10) + 1;
    // the computer ask the player to guess that random number.
    int guess = -1;
    // the player guesses
    cin >> guess;
    // the computer evaluates whether the guess is
        // correct!
        if(theNumber == guess) {
            // congratulates the player, end the game
            cout << "You guessed it!\n";
            return 0;
        } 
        // too high
        else if(guess > theNumber) {
            // tell the player too high
            cout << "that guess is too high!\n";
        }
        // too low 
        else if (guess < theNumber) {
            // tell the player too low
            cout << "that guess is too low!\n";
        }
            
        //Let the player guess again, it was incorrect
        

    return 0;
}