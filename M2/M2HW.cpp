/*
CSC 134
M2HW1
Youngblood
2/16/26
Goal: Write a program that simulates banking transactions using the following requirements.
      It should then ask for the following information (all units are dollars):
        Starting account balance
        Amount of deposit
        Amount of withdrawal

*/

#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include <string>
using namespace std;

int main() {
   
    // Format numbers
    cout << setprecision(2) << fixed << showpoint;

    // Declare Variables
    string accountName;
    int accountNumber = rand();
    double accountBalance;
    double accountBalanceFinale;
    double depositAmount;
    double withdrawlAmount;
    
    // Get account name from user
    cout << "What is your account name? ";
    getline(cin, accountName);
    // Get account balance from user
    cout << "What is your account balance? ";
    cin >> accountBalance;
    // Get deposit amount from user.
    cout << "How much cash would you like to deposit? (Enter '0' if none.)\n";
    cin >> depositAmount;
    cout << endl;
    // Get withdraw amount from user.
    cout << "How much cash would you like to withdraw? (Enter '0' if none.)\n";
    cin >> withdrawlAmount;
    cout << endl;

    // Calculate volume, cost, charge, and profit and display.
    accountBalanceFinale = (accountBalance + depositAmount) - withdrawlAmount;


    cout << "Account Name: " << accountName << endl;
    cout << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << endl;
    cout << "Final Account Balance: $" << accountBalanceFinale << endl;
    cout << endl;
    cout << "Thank you for choosing C++ Bank, have a great day." << endl;
    cout << endl;

    return 0;

}

