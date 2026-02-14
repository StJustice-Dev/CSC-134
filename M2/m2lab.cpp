/*
CSC 134
M2LAB1
Youngblood
2/14/26
Goal: Create a program that calculates volume, cost,
      custromer price, and profit of any crate GCI builds for
      General Crates, Inc. 
*/

#include <iostream>
#include <iomanip> // For 2 decimal places
#include <string>
using namespace std;

int main() {

    // Declare variables 
    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;

    // Declare Constants
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    // Format numbers
    cout << setprecision(2) << fixed << showpoint;

    // Get crate length from user.
    cout << "What is the length of the crate in cubic feet?\n";
    cin >> length;
    cout << endl;
    // Get crate width from user.
    cout << "What is the width of the crate in cubic feet?\n";
    cin >> width;
    cout << endl;
    // Get crate height from user.
    cout << "What is the height of the crate in cubic feet?\n";
    cin >> height;
    cout << endl;

    // Calculate volume, cost, charge, and profit and display.
    volume = length * width * height;
    cost = volume * 0.23;
    charge = volume * 0.5;
    profit = charge - cost;

    cout << "The crate's volume is: " << volume << " cubic feet." << endl;
    cout << endl;
    cout << "The cost of the crate is: $" << cost << endl;
    cout << endl;
    cout << "The customer's charge: $" << charge << endl;
    cout << endl;
    cout << "Profit: $" << profit << endl;
    cout << endl;

    return 0;
    // Calculate crate construction cost.
    
}