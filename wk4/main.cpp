// Nate Ayala Coding 1 week 14
// Writing to and reading from files

#include <iostream>
#include <fstream>      // file stream, includes istream and ostream
#include <string>       // for get line()
#include <vector>

using namespace std;


// build a new function
// return type = void, name  = writeFile(input, path)
void writeFile(string input, string path = "save.txt") {
    ofstream file(path);                        // open the file at the specified path
    file << input;
    file.close();
}

// for vectors
void writeFile(vector<string>& vec, string path = "vector.txt") {
    ofstream file(path);
    for(int i= 0; i < vec.size(); i++) {
        file << vec[i] << endl;
    }
    file.close();
}

void readFile(string path = "save.txt") {
    string line;                                // Will store each line of text
    ifstream file(path);                        // open the file at the path
    if(file.is_open()) {                        // check to see of the file is open
        while(getline(file, line)) {            // as long as there are new lines....
            cout << line << endl;               // output the line to the console
        }
    }
    else {
        cout << "File not found.\n";
    }
    file.close();                               // dont forget to close the file!!!!!
}

void readFile(vector<string>& vec, string path = "vector.txt") {
    vec.clear();                                // makes sure vector is empty
    string line;
    ifstream file(path);
    if(file.is_open()) {
        while(getline(file, line)) {
            vec.push_back(line);
        }
    }
}

int main() {
    cout << "Lets do some file operations!\n";


    // create a file
    // name it something
    // ofstream file("save.txt");               // output file stream
    // file.open("save.txt");                   // this can be combined 
    // add some text
    // file << "Here is some text\n";
    // file << "Here is another line of text.\n";
    // close the file
    // file.close();
    // run the program
    // see if it exists.

    writeFile("Here is some text\nHere is another line of text\n");

    // string line;                                // create a varable to hold each line of text
    // ifstream readFile("save.txt");              // open save.txt file
    // if(readFile.is_open()){                     // if the file could be opened...
        // while(getline(readFile, line)) {        // as long as there are lines
            // cout << line << endl;               // display the line.
       // }
    // }

    readFile();

    // create vector
    vector<string> names = {"Harry", "Hernione", "Ron"};
    // "load" the names from the file (with readFile())
    readFile(names, "names.txt");
    // displaying the names in the vector
    for(int i = 0; i < names.size(); i++){
        cout << names[i] << endl;
    }


    // add more names to the vector
    // "save" the vector to the file
    writeFile(names, "names.txt");                  // creates a new file with names
    




    return 0;
}