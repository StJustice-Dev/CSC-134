/*
CSC 134
M2HW3
Youngblood
3/1/26
Goal: Create a pizza part program where:
    - Each visitor will get three slices of pizza.
    - User has the ability to order pizza and specify 
      how many people will be visiting.
*/

#include <iostream>
#include <iomanip> // For 2 decimal places
#include <string>
using namespace std;

int main(){

    // Declare variables
    string userOrderName;
    double attendees;
    int pizzaAmount;
    int pizzaSlice;
    int pizzaTotalSlice;
    int pizzaRemain;
    
    // Get name for oder. 
    cout << "What is the name for this order? " << endl;
    getline(cin, userOrderName);
    // Get party attendees amount. 
    cout << "How many people will be attending the party? " << endl;
    cin >> attendees;
    // Get amount of pizzas.
    cout << "How many pizzas will be ordered for the party? " << endl;
    cin >> pizzaAmount;
    // Get amount of slices per pizza.
    cout << "How many slices of pizza should each pizza have? " << endl;
    cin >> pizzaSlice;
    

    // Display info and calculate remainder of pizza left over

}