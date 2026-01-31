// CSC 134
// M2TW - Product Sales
// St. Justice
// 1/31/26
// A simple checkout machine. 
#include <iostream>
using namespace std;

int main(){

    // Declare Variables
    string firstName, lastName, fullName; // Get user's name.
    string product = "pear"; 
    double cost_each = 0.99;
    double total_cost; 

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

    

    return 0; 
}