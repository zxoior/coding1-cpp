// Nate A coding 1
// class inheritance and header files if we can.

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

// can we build a vector of slimes?
// can we get the slimes to fight each other?
// can we build boss slime?

// global vector of names, any fuction can use this.
vector<string> slimeNames = {"Tombow", "Cherly", "Boss Baby", "Joe", "Bert"};

class baseSlime {
public:
    string name;
    int health;
    int damage;

    // default constructor
    baseSlime() {
        // get a random name between 0 and
        name = slimeNames[rand() % slimeNames.size()] + " Slime";
        health = rand() % 5 + 5;            // 5-9
        damage = rand() % 6 + 3;            // 3-8
        // rand() % (max-min) + min
    }

    void hello() {
        cout << "My name is " << name << "\nI have " << health;
        cout<< " health and " << damage << " damage.\n\n";
    }

    bool attack(baseSlime& opponent) {
        opponent.health -= damage;
        cout << name << " attacks " << opponent.name <<"!\n";

        // did this attack defeat the opponent?
        if(opponent.health <= 0) {
            return true;
        }
        else {
            return false;
        }
    }

    // step 1 = who attacks first
    // step 2 = fighter A attacks fighter B
    // step 3 = (if fighter B is still alive) fighter B attacks fighter A


};

int main() {
    srand(time(0));
    cout <<"\nLets make some slimes fight!\n\n";

    baseSlime ricky;
    ricky.name = "Richard Slime";
    ricky.health = 10;
    ricky.damage = 4;

    baseSlime beth;
    beth.name = "Elizabeth Slime";
    beth.health = 7;
    beth.damage = 6;

    ricky.hello();
    beth.hello();

    cout << "\n\nCreating out glob of slimes....\n\n";
    vector<baseSlime> glob(6);

    for(int i = 0; i < glob.size(); i++) {
        glob[i].hello();
        cout << "\n";
    }

    cout << "Lets have ricky and beth fight.\n";

    baseSlime temp, temp2;    
    baseSlime& fighterA = temp;
    baseSlime& fighterB = temp2;


    if(rand() % 2 == 0) {
        cout << "Ricky goes first!\n";
        fighterA = ricky;
        fighterB = beth;
    }
    else {
        cout << "Beth goes first!\n";
        fighterA = beth;
        fighterB = ricky;
    }

    while(fighterA.health > 0 && fighterB.health > 0) {
       // fighterA punches
        if(fighterA.attack(fighterB)) {
        cout << fighterB.name << " had been defeated!\n";
       }
       else {
            // fighterB punches
            if(fighterB.attack(fighterA)) {
                cout << fighterA.name << " has been defeated!\n";
            }
       }
        
    }

    return 0;
}