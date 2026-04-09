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
void numberalSwitch();

int main(){

    numberalSwitch();
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
    int userNumber;
    string romanNumeral;

    cout << "Enter a number (1 - 10): ";
    cin >> userNumber;

    while (userNumber < 1 || userNumber > 10) {
        cout << "Value must be between 1 and 10. Re-enter: ";
        cin >> userNumber;
    }

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

    cout << "The Roman numeral version of " << userNumber << " is " << romanNumeral;
}
