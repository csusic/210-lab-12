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
    /*if (fin.good()) {
        cout << "File read successfully.";
        fin.close();
    }
    else 
        cout << "File not found.\n";*/
    
    //three records in the file (int, string, int)
    while (fin >> tempNumber) {  // reads int tempNumber
        fin.ignore();  //needed between an int and string
        getline(fin, tempFlavor);  //reads string tempFlavor
        fin >> tempScoops; //reads int tempScoops
        cout << tempNumber << ": " << tempFlavor << endl;
        cout << "Number of scoops: " << tempScoops << endl << endl;
    }

    
    return 0;
}