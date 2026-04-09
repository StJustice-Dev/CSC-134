/*
CSC 134
M5HW1
St. Justice
4/9/26
Goal: Solve a multiple of questions. 
*/

#include <iostream>
#include <iomanip> // For 2 decimal places
#include <string>
using namespace std;


void averageRainfall();
void blockVolume();
void numeralSwitch();
void geometryCalculator();

int main(){

    numeralSwitch();
    averageRainfall();
    blockVolume();



    return 0;
}

void averageRainfall(){ 
    
    // Declare variables
    string monthOne, monthTwo, monthThree;
    double rainfallOne, rainfallTwo, rainfallThree;
    double average;

    // Format Decimal place
    cout << setprecision(2) << fixed << showpoint;

    // Get user to input info and variables. 
    cout << "Enter three different months, then enter the rainfall for each month to get the average." << endl;

    cout << "Enter month: ";
    cin >> monthOne; 
    cout << "Enter rainfall for " << monthOne << ": ";
    cin >> rainfallOne;

    cout << "Enter month: ";
    cin >> monthTwo; 
    cout << "Enter rainfall for " << monthTwo << ": ";
    cin >> rainfallTwo;
    
    cout << "Enter month: ";
    cin >> monthThree; 
    cout << "Enter rainfall for " << monthThree << ": ";
    cin >> rainfallThree;

    // Calculate the average, Display output. 
    average = (rainfallOne + rainfallTwo + rainfallThree) / 3.0;

    cout << "The average rainfall for " << monthOne << ", " << monthTwo << ", and " << monthThree << " is " << average << "." << endl;

    return;
}

void blockVolume(){
    
    // Declare variables
    double width, length, height;
    double volume;

    // Prompt user for measurements
    cout << "What is the width of the block? ";
    cin >> width;
    
    while (width <= 0){
        cout << "Width cannot be less than 0, re-enter value: ";
        cin >> width;
    }

    cout << "What is the length of the block? ";
    cin >> length;

    while (length <= 0){
        cout << "Width cannot be less than 0, re-enter value: ";
        cin >> length;
    }    
    
    cout << "What is the height of the block? "; 
    cin >> height; 
    
    while (height <= 0){
        cout << "Width cannot be less than 0, re-enter value: ";
        cin >> height;
    }    

    // Calculate the volume
    volume = length * width * height;

    cout << "The volume of your block is: " << volume << "." << endl;    
}

void numeralSwitch() {

    // Declare Variables
    int userNumber;
    string romanNumeral;

    // Get user number
    cout << "Enter a number (1 - 10): ";
    cin >> userNumber;

    // Check if valid number
    while (userNumber < 1 || userNumber > 10) {
        cout << "Value must be between 1 and 10. Re-enter: ";
        cin >> userNumber;
    }

    // Convert and display 
    switch (userNumber) {
        case 1: romanNumeral = "I"; break;
        case 2: romanNumeral = "II"; break;
        case 3: romanNumeral = "III"; break;
        case 4: romanNumeral = "IV"; break;
        case 5: romanNumeral = "V"; break;
        case 6: romanNumeral = "VI"; break;
        case 7: romanNumeral = "VII"; break;
        case 8: romanNumeral = "VIII"; break;
        case 9: romanNumeral = "IX"; break;
        case 10: romanNumeral = "X"; break;
        default: romanNumeral = "Invalid";
    }

    cout << "The Roman numeral version of " << userNumber << " is " << romanNumeral << endl; 
}

void geometryCalculator(){

    // Declare Variables
    int userChoice;

    // Get user choice
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): "; 

    cin >> userChoice;

    // Validate input
    while (userChoice < 1 || userChoice > 10){
        cout << "Value must be between 1 and 10. Re-enter: ";
        cin >> userChoice; 
    }

    if (userChoice == 1){
        
        // Declare Var
        double radius;
        double area;

        // Get User Info
        cout << "Enter the radius of the circle." << endl;
        cin >> radius;

        // Calculate and Display
        area = 3.14159 * radius;
        cout << "The area of the circle is: " << endl; 

    } else if (userChoice == 2){
        
        // Declare Var
        double length, width;
        double area;

        // Get User Info
        cout << "Enter the length of the rectangle." << endl;
        cin >> length;
        cout << "Enter the width of the rectangle." << endl;
        cin >> width;

        // Calculate and Display
        area = length * width;
        cout << "The area of the rectangle is: " << endl; 

    } else if (userChoice == 3){

        // Declare Var
        double base, height;
        double area;

        // Get User Info
        cout << "Enter the base of the triangle." << endl;
        cin >> base;
        cout << "Enter the height of the triangle." << endl;
        cin >> height;

        // Calculate and Display
        area = base * height * .5;
        cout << "The area of the triangle is: " << endl; 

    } else if (userChoice == 4){
        cout << "Returning to Main Menu." << endl;         
    }

}

void distanceTraveled(){

    // Declare Variables
    int time;
    int distance;
    int speed;
    int counter;

    cout << "Value can not be a negative number, re-enter: ";
    cin >> speed;

    // Validate input
    while (speed < 1){
        cout << "Value must be above 1: ";
        cin >> speed; 
    }

    cout << "How many hours has it traveled? ";
    cin >> time;

    while (time < 1){
        cout << "Value must be above 1: ";
        cin >> time; 
    }

    distance = speed * time;
    
    cout << "Hour  Distance Traveled" << endl;
    cout << "-----------------------------------" << endl;
    
    while (counter < time){
        cout << time << "     " << distance << 
    }

}
