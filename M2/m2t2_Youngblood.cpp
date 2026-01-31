/*
CSC 134
M2T2 - Recepit calculator
Youngblood
1/31/26
Goal: Create a receipt that handles sales tax
Assumption: Sales tax is 8% (Varies via County)
*/

#include <iostream>
using namespace std;

int main () {
    // Making Receipt printer for restaurant. 
    // Declare all variables
    string mealName = "Taco Platter";
    double mealPrice = 7.99;            // $7.99 Price
    double taxRate = 0.08;              // Tax Rate, 8% == 8/100 Per cent.    
    double tipAmount;
    double taxAmount;                   // $ of actual tax charged
    double subTotal;                    // Price before tax/tips
    double totalPrice;                  // Subtotal + Meal Tax + Tip
    int    num_Meals;                   // How many the user purchases

    // Get user input
    cout << "Welcome to the CSC 134 Taco Joint." << endl;
    cout << "Menu Special for Today: " << mealName << endl;
    cout << endl;
    cout << "Cost for a singular platter is $" << mealPrice << ". How many would you like to purchase? ";
    cin >> num_Meals; 

    // Gather Tip
    cout << endl << "How much would you like to tip? (Minimum 0) ";
    cin >> tipAmount; 

    // Calculate Subtotal
    subTotal = mealPrice * num_Meals; 
    taxAmount = subTotal * taxRate; // This is ADDED to the bill
    // Add Tax/Tips
    totalPrice = subTotal + tipAmount + taxAmount;
    

    // Present the output
    cout << endl << "YOUR ORDER: " << endl << "==============" << endl;
    cout << num_Meals << " x " << mealName << "\t$" << mealPrice << endl;
    cout << "Subtotal: \t\t$" << subTotal << endl;
    cout << "Tip: \t\t\t$" << tipAmount << endl;
    cout << "Tax: \t\t\t$" << taxAmount << endl;
    cout << "==============" << endl;
    cout << "Total: \t\t\t$" << totalPrice << endl;  


    return 0;
}
