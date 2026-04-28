// Nathaniel Ayala coding 1 week 15
// Classes


#include <iostream>
#include <string>

using namespace std;

// classes are custom variable types that have their own
// variables and functions

// constructors 
// getters and setters (privacy)
// instances
// inheritance (not today though)

// this is my new vairable type
class robot {
private:
    // data members
    string name;
    int charge;
    int boredom;

public:

    // a constructor accepts variiables and sets up the robot when it's created
    // a constructor function needs no return type, and mut be named same as class
    robot(string givenName, int givenCharge, int givenBoredom) {
        name = givenName;
        charge = givenCharge;
        boredom = givenBoredom;
        status();
    }

    // overload the constructor
    robot() {
        name = "bot";
        charge = 10;
        boredom = 0;
        status();
    }
    // member functions
    void status() {
        cout << "My name is " << name << ", my charge is " << charge << ".\n";
        cout << "I am ";

        if(boredom < 5) {
            cout << "Happy";
        }
        else if(boredom < 10) {
            cout << "Bored";
        }
        else if(boredom < 15) {
            cout << "Frustrated";
        }
        else {
            cout << "ENRAGED";
        }

        cout << ".\n";
    }

    void newDay() {
        boredom += 2;
    }

    void play() {
        boredom -= 1;
    }

    // setter
    void setName(string givenName) {
        if(givenName.size() <= 5) {
            name = givenName;
        }
        else {
            cout << "error: name is too long.\n";
        }
    }

    void setCharge(in givenCharge) {
        if(givenCharge < 0) {
            Charge = 0;
        }
        else if(givenCharge > 100) {
            Charge = 100;
        }
        else {
            charge = givenCharge;
        }
    }

    string getName() {
        return name;
    }
    int getCharge() {
        return charge;
    }
    int getBoredom() {
        return boredom;
    }
};

int main() {
    cout <<"Hi\n";

    // creating two new variables of the type 'robot'
    robot artoo("R2-D2", 45, 10);                       // using the constructor
    // artoo.name = "R2-D2";
    // artoo.charge = 45;
    // artoo.boredom = 10;

    robot threepio;
    threepio.setName("C-3P0");                          // using the setter now
    threepio.setcharge(2);

    cout << "Heres artoo: " << artoo.getName() << ".\n";

    cout << artoo.name << " Notices that " << threepio.name;
    cout << " doesnt have much battery left. Lets fix that.\n";

    while(threepio.charge < 15) {
        artoo.charge -= 1;
        threepio.charge += 1;
    }

    cout << "threepio's charge is now " << threepio.charge << ".\n";
    cout << "artoo's charge is now " << artoo.charge << ".\n"; 

    // using member functions
    artoo.status();
    threepio.status();

    string input = "";
    int turns = 0;

    while(true) {
        while(turns < 3) {
            cout << "what would you like to do?\n";
            getline(cin, input);

            if (input == "play") {
                cout << "Lets play with" << artoo.name << "!\n";
                artoo.play();
            }

            else if(input == "status") {
                artoo.status();
            }
            turns++;
        }
        turns = 0;
        cout << "Do you want to keep playing?\n";
        getline(cin, input);

        if(input == "no") {
            break;
        }
        artoo.newDay();
    }

    return 0;
}