/*
CSC-134
M5T1
Youngblood
3/29/26
Goal: Basic functions, create on void function, and one value returning function.
*/

#include <iostream>
using namespace std;

void printResult(int number, int result){
    cout << number << " Squared is: " << result << endl;
}

// Square number
int square(int number) {
    int result;
    result = number * number;
    return result;
}
int main(){

    // Declare variables
    // Count numbers, find result for all. 
    int count = 1;
    int result;

    cout << "Welcome to the 1-10 Squared Table.\n\n";

    while (count <= 10){
        result = square(count);
        printResult(count, result);
        count++;
    }
    return 0;
}


