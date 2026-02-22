// COMSC-210 | Lab 12 | Christine Susic

#include <iostream>
#include <algorithm>
#include <numeric> 
#include <array>
#include <fstream>
using namespace std;

const int SIZE = 30; //size of array

int main() {
    //array of ice cream
    array<int, SIZE> iceCream;
    //temporary variables
    int tempNumber; //catalog number
    int tempScoops; //number of scoops
    int tempToppings; //number of toppings
    
    //reading from file
    ifstream fin; 
    fin.open("records.txt");
    
    //three records in the file (int, string, int)
    while (fin >> tempNumber) {  // reads int tempNumber
        fin >> tempScoops; //reads int tempScoops
        fin >> tempToppings;  //reads string tempFlavor
        //populate array with values from file
        iceCream.push_back(tempNumber);
        iceCream.push_back(tempScoops);
        iceCream.push_back(tempToppings);
    }
    
    //output array
    for (int val : iceCream) cout << val << " "; cout << endl;

    
    return 0;
}