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
    array<int, SIZE> iceCream = {3, 4};
    //temporary variables
    int tempNumber; //catalog number
    int tempScoops; //number of scoops
    int tempToppings; //number of toppings
    
    //reading from file
    ifstream fin; 
    fin.open("records.txt");
    if (fin.good()) {
        cout << "File read successfully." << endl;
    }
    else 
        cout << "File not found.\n";
    
    //three records in the file (int, string, int)
    while (fin >> tempNumber) {  // reads int tempNumber
        fin >> tempScoops; //reads int tempScoops
        fin >> tempToppings;  //reads string tempFlavor
        //populate array with values from file
        //iceCream.push_back(tempNumber);
        //iceCream.back(tempScoops);
        //iceCream.back(tempToppings);
    }
    
    //for (int i = 0; i < SIZE; i++) {
        //fin >> iceCream[i];
    //}
    
    //for (int i = 0; i < SIZE; i++) {
        //cout << iceCream[i];
    //}
    
    //output array
    cout << "Array: ";
    for (int val : iceCream) cout << val << " "; cout << endl;
    
    //reverse sort
    sort(iceCream.rbegin(), iceCream.rend());
    cout << "Reverse sort: ";
    for (int val : iceCream) cout << val << " "; cout << endl;
    
    //Maximum value
    cout << "Maximum value: ";
    cout << *max_element(iceCream.begin(), iceCream.end()) << endl;
    //Minimum value
    cout << "Minimum value: ";
    cout << *min_element(iceCream.begin(), iceCream.end()) << endl;
    //Sum of values
    cout << "Sum of values: ";
    cout << accumulate(iceCream.begin(), iceCream.end(), 0) << endl;
    
    fin.close();
    
    return 0;
}