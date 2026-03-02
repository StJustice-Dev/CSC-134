/*
CSC-134
M3LAB2
Youngblood
3/1/26
Goal: Create a program that converts number grade to a letter grade.
*/

#include <iostream>
using namespace std;

int main(){

    // Declare Variables
    int userGrade;

    // Get User's grade
    cout << "Number Grade to Letter Grade Converter." << endl;
    cout << "Enter your current grade: ";
    cin >> userGrade;

    // Calculate the User's grade conversion with an if/else if statement
    if (userGrade >= 0 && userGrade <= 100) {
        if (userGrade >= 90) {
            cout << "Your letter grade is an A." << endl;
        } else if (userGrade >= 80) {
            cout << "Your letter grade is a B." << endl;                        
        } else if (userGrade >= 70) { 
            cout << "Your letter grade is a C." << endl;        
        } else if (userGrade >= 60) {
            cout << "Your letter grade is a D." << endl;        
        } else {
            cout << "Your letter grade is a F." << endl;        
        } 


    } 
        else
    {
        // Displays an error message for incorrect input. 
        cout << "The number you've entered was not valid, only use numbers ";
        cout << "within the range of 0-100.";
    }
    
    return 0;

}


 