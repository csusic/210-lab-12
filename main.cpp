// COMSC-210 | Lab 12 | Christine Susic

#include <iostream>
#include <algorithm>
#include <numeric>
#include <array>
#include <fstream>
using namespace std;

const int SIZE = 30; //size of array

int main() {
    //array of game scores
    array<int, SIZE> gameScores;
    //temporary variable for reading scores
    int tempNumber;
    
    //reading from file
    ifstream fin; 
    fin.open("records.txt");
    if (fin.good()) {
        cout << "File read successfully." << endl;
    }
    else 
        cout << "File not found.\n";
    
    //numbers in the file (int)
    while (fin >> tempNumber) {  //reads int tempNumber
        cout << tempNumber;
    }
    
    //populate array with values from file
    for (int i = 0; i < SIZE; i++) {
        gameScores[i];
    }
    
    //output array
    cout << "Game Scores Array: ";
    for (int val : gameScores) cout << val << " "; cout << endl;
    
    /*//reverse sort
    sort(gameScores.rbegin(), gameScores.rend());
    cout << "Reverse sort: ";
    for (int val : gameScores) cout << val << " "; cout << endl;
    
    //Maximum value
    cout << "Maximum value: ";
    cout << *max_element(gameScores.begin(), gameScores.end()) << endl;
    //Minimum value
    cout << "Minimum value: ";
    cout << *min_element(gameScores.begin(), gameScores.end()) << endl;
    //Sum of values
    cout << "Sum of values: ";
    cout << accumulate(gameScores.begin(), gameScores.end(), 0) << endl;*/
    
    fin.close();
    
    return 0;
}