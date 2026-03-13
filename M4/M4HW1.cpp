/*
CSC-134
M4HW1
Youngblood
3/13/26
Goal: Create a multiplication table.
*/

#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include <string>
using namespace std;

void fivesTable();
void timesTable();
void timesTableUpdated();

int main(){
    // Create statment for user to choose function
    int userNumber;
    cout << "1. Fives Times Table \n";
    cout << "2. (User Number) x 1-12 Times Table.\n";
    cout << "3. (User Number) x 1-12 Times Table. w/ Input validation.\n";
    cout << "Which program would you like to use? Enter the corresponding number: ";
    cin >> userNumber;

    if (userNumber == 1){
        fivesTable();
    } else if (userNumber == 2){
        timesTable();
    } else if (userNumber == 3){
        timesTableUpdated();
    }
    
    return 0;
}

void fivesTable(){
    // Print the 5 times table (1-12x).
    int numberOut;
    int numberIn = 5;
    int counter = 1;

    while (counter <= 12){
        numberOut = numberIn * counter;
        cout << numberIn << " times " << counter << " is " << numberOut << ".\n";
        counter++;
    }
    cout << "The program has ended. Have a blessed day.\n\n";
}

void timesTable(){
    
    // Ask user to input a number to make a times table (1-12x).
    // Declare Variables
    int numberOut;
    int numberIn;
    int counter = 1;

    cout << "Enter a number from 1 to 12: ";
    cin >> numberIn;

    while (counter <= 12){
        numberOut = numberIn * counter;
        cout << numberIn << " times " << counter << " is " << numberOut << ".\n";
        counter++;
    }
    cout << "The program has ended. Have a blessed day.\n\n";
}

void timesTableUpdated(){
    // Ask user to input a number to make a times table (1-12x).
    
    // Declare Variables
    int numberOut;
    int numberIn;
    int counter = 1;

    cout << "Enter a number from 1 to 12: \n";
    cin >> numberIn;

    // Validate user input
    while (numberIn > 12 || numberIn < 1){
        // Prompt user to enter number again.
        cout << "You are only able to enter values 1 to 12.\n";
        cout << "You have entered: " << numberIn << ".\n";
        cout << "Please enter a value 1 to 12: ";
        cin >> numberIn;
    }

    while (counter <= 12){
        numberOut = numberIn * counter;
        cout << numberIn << " times " << counter << " is " << numberOut << ".\n";
        counter++;
    }
    cout << "The program has ended. Have a blessed day.\n\n";
}