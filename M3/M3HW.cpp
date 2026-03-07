/*
CSC-134
M3HW
Youngblood
3/7/26
Goal: Silver
*/

#include <iostream>
#include <iomanip> 
using namespace std;

void questionOne();
void questionTwo();
void questionThree();


int main(){
    
    // Get user to choose question. 
    int userQuestion;
    cout << "Which question would you like to access? (Type 1-3 to access desired question)" << endl;
    cout << "Question 1: Simple Chat Bot (Discussion)" << endl;
    cout << "Question 2: Receipt Calculator (Math)" << endl;
    cout << "Question 3: Music Taste Quiz (Music)" << endl;
    cin >> userQuestion;

    if (userQuestion == 1){
        questionOne();
    } else if (userQuestion == 2){
        questionTwo();
    } else if (userQuestion == 3){
        questionThree();
    }

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
    
    // Making Receipt printer for restaurant. 
    // Declare all variables
    string mealName = "Taco Platter";
    const double DINEINTIP = 0.15;      // 15% Dine in Tip
    double mealPrice = 7.99;            // $7.99 Price
    double taxRate = 0.08;              // Tax Rate, 8% == 8/100 Per cent. 
    double dineInFee = 0.00;  
    double tipAmount;
    double taxAmount;                   // $ of actual tax charged
    double subTotal;                    // Price before tax/tips
    double totalPrice;                  // Subtotal + Meal Tax + Tip
    int    num_Meals;                   // How many the user purchases
    int    userDineIn;                  // Determines if the user is dining in or on the go.
    // Get user input
    cout << "Welcome to the CSC 134 Taco Joint." << endl;
    cout << "Menu Special for Today: " << mealName << endl;
    cout << endl;
    cout << "Cost for a singular platter is $" << mealPrice << ". How many would you like to purchase?" << endl;
    cin >> num_Meals; 

    // Verify Dine In and To Go orders. 
    cout << "Is your order for here or to go? (Type 1 for Dine in orders, Type 2 for To Go Orders.)" << endl;
    cin >> userDineIn;

    // Gather Tip
    cout << endl << "How much would you like to tip? (Minimum 0) " << endl;
    cin >> tipAmount; 
    // Calculate Subtotal
    subTotal = mealPrice * num_Meals; 
    taxAmount = subTotal * taxRate; // This is ADDED to the billsssssssss
    // Add Tax/Tips
    totalPrice = subTotal + tipAmount + taxAmount;
    
    if (userDineIn == 1){
        dineInFee = (totalPrice * DINEINTIP);
        totalPrice += dineInFee;
    }
    
    // Present the output
    cout << setprecision(2) << fixed; // Set outputs to 2 decimal places
    cout << endl << "YOUR ORDER: " << endl << "==============" << endl;
    cout << num_Meals << " x " << mealName << "\t$" << mealPrice << endl;
    cout << "Subtotal: \t\t$" << subTotal << endl;
    cout << "Dine In Fee: \t\t$" << dineInFee << endl;
    cout << "Tip: \t\t\t$" << tipAmount << endl;
    cout << "Tax: \t\t\t$" << taxAmount << endl;
    cout << "==============" << endl;
    cout << "Total: \t\t\t$" << totalPrice << endl;  
    cout << endl << "THANK YOU, COME AGAIN." << endl;

}

void questionThree(){
    
    // Get user to specify music taste
    int userChoiceGenre;
    int userChoiceTempo; 

    cout << "Welcome to the Music Taste Quiz." << endl;
    cout << "You will be given some options to choose from, ";
    cout << "and from there you will be recommended a piece of music." << endl;

    cout << "What music genre are you most interested in? "; 
    cout << "Classical (1), Jazz (2), Rock (3). Enter the corresponding number: ";
    cin >> userChoiceGenre; 

    if (userChoiceGenre == 1){
        cout << "You choose: Classical." << endl;
        cout << "Do you like your music Uptempo (1) or Slow (2)?" << endl;
        cin >> userChoiceTempo;

        if (userChoiceTempo == 1){
            cout << "You choose: Uptempo." << endl;
            cout << "Your recommended piece of music is: " << endl;
            cout << "Danzón No. 2 by Arturo Márquez." << endl;
        } else if (userChoiceTempo == 2) {
            cout << "You choose: Slow." << endl;
            cout << "Your recommended piece of music is: " << endl;
            cout << "Chopin: Ballade No. 1 in G Minor, Op. 23" << endl;
        }

    } else if (userChoiceGenre == 2){
        cout << "You choose: Jazz." << endl;
        cout << "Do you like your music Uptempo (1) or Slow (2)?" << endl;
        cin >> userChoiceTempo;

        if (userChoiceTempo == 1){
            cout << "You choose: Uptempo." << endl;
            cout << "Your recommended piece of music is: " << endl;
            cout << "Easy To Love by Nippon Soul." << endl;
        } else if (userChoiceTempo == 2) {
            cout << "You choose: Slow." << endl;
            cout << "Your recommended piece of music is: " << endl;
            cout << "Misty by Ella Fitzgerald." << endl;
        }

    } else if (userChoiceGenre == 3){
        cout << "You choose: Rock." << endl;
        cout << "Do you like your music Uptempo (1) or Slow (2)?" << endl;
        cin >> userChoiceTempo;

        if (userChoiceTempo == 1){
            cout << "You choose: Uptempo." << endl;
            cout << "Your recommended piece of music is: " << endl;
            cout << "Somewhere I Belong by Linkin Park" << endl;
        } else if (userChoiceTempo == 2) {
            cout << "You choose: Slow." << endl;
            cout << "Your recommended piece of music is: " << endl;
            cout << "For the Love of God by Steve Vai" << endl;
        }
    }

    cout << "Thank you for taking the Music Taste Quiz." << endl;
    cout << "Have a great day." << endl;   
}
