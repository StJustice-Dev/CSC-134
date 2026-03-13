/*
CSC-134
M4HW1
Youngblood
3/13/26
Goal: Create a multiplication table.
*/

#include <iostream>
using namespace std;

void fivesTable();

int main(){

    fivesTable();


}

void fivesTable(){
    // Print the 5 times table (1-12).
    int numberOut;
    int numberIn = 5;
    int counter = 1;

    while (counter < 12){
        numberOut = numberIn * counter;
        cout << numberIn << " times " << counter << " is " << numberOut << ".\n";
        counter++;
    }
    

}