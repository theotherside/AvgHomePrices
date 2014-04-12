/* 
 * File:   main.cpp
 * Author: lukemonson
 *
 * Program to help real estate agent
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
    // Initialize Variables...
    int PRICES = 20;
    double housePrice[PRICES];
    int houseNum;
    int a;
    double total = 0;
    double average;
    houseNum = 0;
    // Prompt for house price...
    cout << "Enter first house price, or type Q to quit: ";
    // Store entered data as an array...
    cin >> housePrice[houseNum];
    while (houseNum < PRICES && housePrice[houseNum] != 'Q') {
        total += housePrice[houseNum];
        ++houseNum;
        if (houseNum < PRICES) {
            // Prompt for the next price...
            cout << "Enter next house price, or Q to quit: ";
            
            cin >> housePrice[houseNum];
        }
    }
    // output
    cout << "The entered house prices are: ";
    for (a = 0; a < houseNum; a++)

    // Sort function...
    sort(housePrice, housePrice + houseNum);
    
    // Print in order
    cout << "\nThe entered house prices in ascending order are: ";
    
    for (a = 0; a != houseNum; ++a)
        // Print data in ascending order...
        cout << housePrice[a] << "  ";
    
    // average
   
    average = total / houseNum;
    
    // Print the average...
    cout << endl << "The average of all house prices is: " << average << endl;
    return 0;
}