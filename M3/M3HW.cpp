/*
CSC-134
M3HW
Youngblood
3/7/26
Goal: Create a simple chat bot to have a short discussion.
*/

#include <iostream>
using namespace std;

int main(){

    string userResponse; 

    // Start off conversation, prompt user.
    cout << "Hello and Welcome, My name is Chat." << endl;
    cout << "The weather is lovely today, don't you agree? Type Yes or No." << endl;
    cin >> userResponse;

    if (userResponse == "Yes"){
        cout << "You agree so too! I'm sure we will get along well.";
    } else if (userResponse == "No"){
        cout << "Ah, I see. Hope it'll be better tommorow for you!";
    } else {
        cout << "Uhh, I didn't quite get that. But it's fine, have a good day!"; 
    }

    return 0;
}