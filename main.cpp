// COMSC-210 | Lab 12 | Christine Susic

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //reading from file
    ifstream fin; 
    fin.open("records.text");
    if (fin.good()) {
        cout << "File read successfully."
        fin.close();
    }
    else 
        cout << "File not found.\n";
    

    
    return 0;
}