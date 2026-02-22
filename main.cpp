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
    std::array<int, SIZE> gameScores;
    
    //reading from file
    ifstream fin; 
    fin.open("records.txt");
    if (fin.good()) {
        cout << "File read successfully." << endl;
    }
    else 
        cout << "File not found.\n";
    
    //populate array with values from file
    for (int i = 0; i < SIZE; i++) {
        fin >> gameScores[i];
    }
    
    //output array
    cout << "Game Scores Array: ";
    for (int val : gameScores) cout << val << " "; 
    cout << endl;
    
    //Ascending sort (sort)
    sort(gameScores.begin(), gameScores.end());
    cout << "Sort: ";
    for (int val : gameScores) cout << val << " "; cout << endl;
    //Descending sort (reverse sort)
    sort(gameScores.rbegin(), gameScores.rend());
    cout << "Reverse Sort: ";
    for (int val : gameScores) cout << val << " "; cout << endl;
    //Maximum value
    cout << "Maximum value: ";
    cout << *max_element(gameScores.begin(), gameScores.end()) << endl;
    //Minimum value
    cout << "Minimum value: ";
    cout << *min_element(gameScores.begin(), gameScores.end()) << endl;
    //Sum of values
    cout << "Sum of values: ";
    cout << accumulate(gameScores.begin(), gameScores.end(), 0) << endl;
    //Array of zeros
    cout << "Array of zeros: ";
    fill(gameScores.begin(), gameScores.end(), 0);
    for (int val : gameScores) cout << val << " "; cout << endl;
    
    fin.close();
    
    return 0;
}