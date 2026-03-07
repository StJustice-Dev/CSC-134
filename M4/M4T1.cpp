/*
CSC-134
M4T1
Youngblood
3/7/26
Goal: Instruction.
*/

#include <iostream>
using namespace std;

int main(){
    
    // Creating a while loop to say hello 5 times. 
    int number = 5;
    int i = 0;

    while (i < number) {
        cout << "Hello World!" << endl;
        i++;
    }

    cout << "Goodbye World!" << endl;

    // Create a while loop to display a number squared 1-10.

    const int MIN_NUMBER = 1,  // Starting Number
              MAX_NUMBER = 10; // Maximum Number

    int num = MIN_NUMBER;      // Our Counter Variable
    
    cout << endl;
    cout << "Number Number Squared\n";
    cout << "---------------------------\n";
    
    while (num <= MAX_NUMBER){
        
        cout << num << "\t\t" << (num * num) << endl;
        num++; //Increment the counter. 
    }

    return 0;
}