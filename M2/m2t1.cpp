// CSC 134
// M2TW - Product Sales
// St. Justice
// 1/31/26
// A simple checkout machine. 
#include <iostream>
#include <iomanip> // For 2 decimal places
using namespace std;

int main(){

    // Declare Variables
    string firstName, lastName, fullName; // Get user's name.
    string product = "pear"; 
    double cost_each = 0.99;
    double total_cost; 
    int amountPurchased;

    // Greet the user
    cout << "Welcome to the " << product << " orchard!" << endl;
    cout << "We sell " << product << " at " << total_cost << " each." << endl;
    cout << "What's your first name? ";
    cin >> firstName;
    cout << "What's your last name? ";
    cin >> lastName;
    fullName = firstName + " " + lastName;
    cout << "Pleased to meet you, " << fullName << endl;
    
    // Ask how many they'd wish to buy
    cout << "How many " << product << "'s would you like to buy? ";
    cin >> amountPurchased;

    // Calculate total
    total_cost = amountPurchased * cost_each;

    // Format: Set all prices to 2 decimal places 
    cout << setprecision(2) << fixed;
    
    // Give results
    cout << "For " << amountPurchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for buying our amazing " << product << "'s! Have a great day." << endl;

    return 0; 
}