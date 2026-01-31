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
    double taxRate = 0.80;              // Tax Rate, 8% == 8/100 Per cent.    
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


    // Do the calculation
    subTotal = mealPrice * num_Meals; 
    
    // Present the output
    cout << endl << "YOUR ORDER: " << endl << "==============" << endl;
    cout << num_Meals << " x " << mealName << "\t$" << mealPrice << endl;
    cout << "Subtotal: \t\t$" << subTotal << endl;

    cout << endl << "How much would you like to tip? ";
    cin >> tipAmount; 

    return 0;
}
