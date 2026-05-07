// final.cpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> monsterNames = {"Tombow", "Cherly", "Boss Baby", "Joe", "Bert"};

class baseMonster {
private:
    string name;
    int health;
    int damage;
    int hunger;

public:
    
    // default constructor
    baseMonster() {
        // get a random name between 0 and
        name = monsterNames[rand() % monsterNames.size()] + " Monster";
        health = rand() % 5 + 5;
        damage = rand() % 6 + 3;
        hunger = 0;
    }

    void setHunger() {
        cout << "My name is " << name << ", my hunger is " << hunger << ".\n";
        cout << "I am ";

        if(hunger < 5) {
            cout << "Full";
        }
        else if(hunger < 10) {
            cout << "Hungry";
        }
        else if(hunger < 15) {
            cout << "Starving";
        }
        else {
            cout << "GOING TO DIE!!!";
        }

        cout << ".\n";
    }

    void newDay() {
        hunger += 2;
    }

    void feed() {
        hunger -= 1;
    }

    void hello() {
        cout << "My name is " << name << "\nI have " << health;
        cout<< " health and " << damage << " damage.\n\n";
    }

    bool attack(baseMonster& opponent) {
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
    string input;

    while(true) {
        cout << "\nWhat do you want to do?\n";
        cout << "You can 'feed', 'train', 'battle', 'status', and 'quit'.\n";
        
        getline(cin, input);

        // feed the monster
        if(input =="quit") {
            cout << "Thanks for playing.\n\n";
            break;
        }
        // train the monster (chance to increase health and damage)
        else if(input == "train") {
            cout << "pump to failure, BROTHERRRRR\n";
        }
        // listen to their critter (display health, damage, and hunger)
        else if(input == "status") {
            cout << "Here are my stats\n";
            
        }
        // battle other critters, with options to
            // attack
            // heal
            // run away
        else if(input == "battle") {
            cout << "TIME TO FUCK SHIT UP!!!\n";
        }
        else if(input == "feed") {
            cout << "YUMMY\n";
            
        }
        else {
            cout << "I didnt understand that command.\n";
        }


    }


    // Create a .cpp program that allows the player to 

    // feed their critter
    // train their critter (chance to increase health or damage)
    // listen to their critter (display health, damage, and hunger)
    // battle other critters, with options to
    // attack
    // heal
    // run away
}