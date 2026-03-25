/*
CSC-134
M5T1
Youngblood
3/24/26
Goal: Basic functions, create on void function, and one value returning function.
*/

#include <iostream>
#include <iomanip> 
#include <cstdlib>
#include <string>
using namespace std;


void hello_channel();
int getUserNumber();
int double_a_number(int userNumber);

int main(){

    int doubleNumber;
    // Greeting message
    cout << "Hello from the main channel." << endl;
    hello_channel();
    int userNumber = getUserNumber();
    cout << "Your number is: " << userNumber << endl;
    doubleNumber = double_a_number(userNumber);
    
    cout << "You're number doubled is: " << doubleNumber << endl;

}


void hello_channel(){
    // Greeting message.
    cout << "Hello from the hello channel." << endl;
    return;
}

int getUserNumber(){
    // Return user's number
    return 47;
}

int double_a_number(int userNumber){
    // Double the user's number and return.
    int new_num = userNumber * 2;
    return new_num;
    
}

