/*
CSC-134
M3HW
Youngblood
3/7/26
Goal: Multiple
*/

#include <iostream>
using namespace std;

void questionOne();

int main(){
    
    // Get user to choose question. 
    int userQuestion;
    cout << "Which question would you like to access? (Type 1-3 to access desired question)" << endl;
    cout << "Question 1: Simple Chat Bot (Discussion)" << endl;
    cout << "Question 2: Receipt Calculator (Math)" << endl;
    cout << "Question 3: Choose Your Own Adventure (Game)" << endl;
    cin >> userQuestion;


    return 0;

}

void questionOne(){
    // Question 1 
    // Goal: Create a simple chat bot to have a short discussion.
    string userResponse; 

    // Start off conversation, prompt user.
    cout << "Hello and Welcome, My name is Chat." << endl;
    cout << "The weather is lovely today, don't you agree? Type Yes or No." << endl;
    cin >> userResponse;

    if (userResponse == "Yes"){
        cout << "You agree so too! I'm sure we will get along well." << endl;
    } else if (userResponse == "No"){
        cout << "Ah, I see. Hope it'll be better tommorow for you!" << endl;
    } else {
        cout << "Uhh, I didn't quite get that. But it's fine, have a good day!" << endl; 
    }
}

void questionTwo(){
    // Question 2
    // Goal: Add additional functions to receipt calculator. 

}