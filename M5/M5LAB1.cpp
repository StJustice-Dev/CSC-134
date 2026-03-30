/*
CSC 134
M5LAB1 - Hello, World
St. Justice
3/29/26
This program will ask a question and have the user respond to it.
*/

#include <iostream>
using namespace std;

void chooseDoor1();
void chooseDoor2();
void chooseDoor3();
void chooseFlee();

int main() {

  // Declare variables
  int choice; 

  // Greeting message, Get user input. 
  cout << "You come across a monument in your ventures. There appears to be three doors, which one will you enter?" << endl;
  cout << "Type 1, 2, 3 to go through the desired door. Or enter 4 to leave. Your Number:  "; 
  cin >> choice;

  // Checks for users number and grabs the correct method. 
  if (1 == choice) {
    chooseDoor1();
  }
  else if (2 == choice) {
    chooseDoor2();
  } 
  else if (3 == choice) {
    chooseDoor3();
  }
  else if (4 == choice) {
    chooseFlee();
  } else { 
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; 

} 

void chooseDoor1() {
  cout << "You chose Door 1" << endl;
  cout << "You win ... A Toyota Prius!" << endl;
}

void chooseDoor2() {
  cout << "You chose Door 2" << endl;
  cout << "You win ... Nothing..." << endl;
}

void chooseDoor3() {
    cout << "You chose Door 3" << endl;
    cout << "You win ... A bag of apples." << endl;
}

void chooseFlee() {
    cout << "You chose to leave?" << endl;
    cout << "You win ... A safe venture back home." << endl;
}

