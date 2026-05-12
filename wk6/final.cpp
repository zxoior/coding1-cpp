// final.cpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> opponentNames = {"Tombow", "Cherly", "Boss Baby", "Joe", "Bert"};

class monster {
private:
    string name;
    int health;
    int damage;
    int hunger;

public:
    
    monster(string givenName, int givenHunger, int givenDamage, int givenHealth) {
        name = givenName;
        hunger = givenHunger;
        damage = givenDamage;
        health = givenHealth;
        // statusCheck();
    }

    // overload the constructor
    monster() {
        name = "Joe";
        hunger = 10;
        damage = 2;
        health = 8;
        statusCheck();
    }

    void heal() {
        health += rand() % 6 + 1;
    } // end of heal

    void tired() {
        hunger += 5;
    } // end of tired

    void feed() {
        hunger -= 2;
    } // end of feed

    void train() {
        damage += rand() % 3 + 1;
        health += rand() % 6 + 2;
        hunger += 1;
    } // end of train

    void statusCheck() {
        cout << "My name is " << name << "\nI have " << health;
        cout << " health\nI deal " << damage << " damage\nAnd my hunger is ";
        cout << hunger << " I am, ";

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
    } // end of status check

    // setters
    void setName(string givenName) {
        if(givenName.size() <= 5) {
            name = givenName;
        }
        else {
            cout << "error: name is too long.\n";
        }
    } // set name

    void setHunger(int givenHunger) {
        if(givenHunger < 0) {
            givenHunger = 0;
        }
        else if(givenHunger > 15) {
            givenHunger = 15;
        }
        else {
            hunger = givenHunger;
        }
    } // set Hunger

    void changeHunger(int amount) {
        setHunger(hunger += amount);
    } // changing hunger


    // fighting  
    bool attack(monster& opponent) {
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
    
    // Getters
    string getName() {
        return name;
    }
    int getHunger() {
        return hunger;
    }
    int getHealth() {
        return health;
    }
    int getDamage() {
        return damage;
    }


};




int main() {
    string input;

    monster robert("BOBERT", 10, 2, 8);
    // hunger = 10;
    // damage = 2;
    // health = 8;

    while(true) {
        cout << "\nWhat do you want to do?\n";
        cout << "You can 'feed', 'train', 'battle', 'status', and 'quit'.\n";
        
        getline(cin, input);

        if(input =="quit") {
            cout << "Thanks for playing.\n\n";
            break;
        } // end of quit

        // train the monster (chance to increase health and damage)
        else if(input == "train") {
            cout << "pump to failure, BROTHERRRRR\n";\
            robert.train();

        } // end of train

        // display health, damage, and hunger
        else if(input == "status") {
            cout << "Here are my stats\n";
            robert.statusCheck();
        } // end of status

        else if(input == "battle") {
            cout << "TIME TO FUCK SHIT UP!!!\n";
            monster carter("Carter Hogan", 1, 1, 15);
            while(true) {
                cout << "\nGet Ready!!!!!\n";
                cout << "Attack, Heal, and Flee.\n";

                getline(cin, input);

                if(input == "flee") {
                    cout << "You have ran away";
                    break;
                }
                else if(input == "attack") {
                    robert.attack(carter);
                    
                    monster temp, temp2;    
                    monster& fighterA = temp;
                    monster& fighterB = temp2;


                    if(rand() % 2 == 0) {
                        cout << "Robert goes first!\n";
                        fighterA = robert;
                        fighterB = carter;
                    }
                    else {
                        cout << "Carter goes first!\n";
                        fighterA = carter;
                        fighterB = robert;
                    }

                    while(fighterA.getHealth() > 0 && fighterB.getHealth() > 0) {
                            // fighterA punches
                            if(fighterA.attack(fighterB)) {
                            cout << fighterB.getName() << " had been defeated!\n";
                        }
                        else {
                            // fighterB punches
                            if(fighterB.attack(fighterA)) {
                                cout << fighterA.getName() << " has been defeated!\n";
                            }
                        }
                        
                    }
                }
                else if(input == "heal") {
                    cout << "Mending your wounds ";
                    robert.heal();
                }
                else {
                   cout << "I dont recongnize that input";
                }

            }
        } // edn of battle
        
        // feed the monster
        else if(input == "feed") {
            cout << "YUMMY\n";
            robert.feed();
        } // end of feed
        else {
            cout << "I didnt understand that command.\n";
        }
    }
}