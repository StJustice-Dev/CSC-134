/*
CSC-134
M5T1
Youngblood
3/29/26
Goal: Basic functions, create on void function, and one value returning function.
*/

#include <iostream>
using namespace std;

int square(int number);
int printResult();

int main(){

    // Declare variables
    int count = 0;
    int result;

    cout << "Welcome to the 1-10 Times Table, enter a number and it will be squared.\n\n";

    while (count <= 10){
        result - square(count);
        printResult(count, result);
        count++;
    }

    }
}

void printResult(int number, int result){
    cout << number << " Squared is: " << result << endl;
}

// Square number
int square(int number) {
    int result;
    result = number * number;
    return result;
}