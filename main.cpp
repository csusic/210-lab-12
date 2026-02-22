// COMSC-210 | Lab 12 | Christine Susic

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //temporary variables
    int tempNumber; //catalog number
    string tempFlavor; //flavor of ice cream
    int tempScoops; //number of scoops
    
    //reading from file
    ifstream fin; 
    fin.open("records.txt");
    if (fin.good()) {
        cout << "File read successfully.";
        fin.close();
    }
    else 
        cout << "File not found.\n";
    
    //three records in the file (int, string, int)
    while (fin >> tempNumber) {  // reads int tempNumber
        fin.ignore();  //needed between a fin>> and a getline(fin)
        getline(fin, tempFlavor);  //reads string tempFlavor
        fin >> tempScoops; //reads int tempScoops
        
    }

    
    return 0;
}