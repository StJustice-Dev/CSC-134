/*
CSC-134
M1LAB1 - Apple Sales
St. Justice Youngblood
1/24/26
*/

#include <iostream>
using namespace std;

int main() {
    // This program will simulate an apple orchard
    // Owner's name
    string name = "St. Justice Youngblood";

    // Number of apples owned
    int apples = 100;

    // Price per apple
    double pricePerApple = 0.25;

    // Calculate the total price of apples
    double totalPrice = apples * pricePerApple;

    // Greeting statement
    cout << "Welcome to " << name;
    cout << "'s apple orchard." << endl;
    cout << "We have " << apples;
    cout << " apples in stock" << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each. " << endl;

    // Display price for all apples
    cout << "If you wanted to buy all the apples, it will cost you: $" << totalPrice << endl;

}


