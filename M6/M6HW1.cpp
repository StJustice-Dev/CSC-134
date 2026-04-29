/*
CSC 134
M6HW1 - Loops and Arrays
St. Justice Youngblood
4/28
Goal: Choose Your Own Path. 
*/

#include <iostream>
using namespace std;

// Global inventory
bool hasKey = false;

// Function declarations
void main_menu();
void front_door();
void back_yard();
void kitchen();
void basement();
void go_home();

int main() {
    cout << "M6HW1 - Choose Your Own Adventure\n";
    main_menu();
    cout << "Thanks for playing!\n";
    return 0;
}

void main_menu() {
    cout << "\nMain Menu\n";
    cout << "You're in front of a spooky old house...\n";
    cout << "Legend says a treasure is hidden inside.\n";
    cout << "Do you:\n";
    cout << "1. Try the front door\n";
    cout << "2. Sneak around back\n";
    cout << "3. Go home\n";
    cout << "4. Quit\n";
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) front_door();
    else if (choice == 2) back_yard();
    else if (choice == 3) go_home();
    else if (choice == 4) return;
    else {
        cout << "Invalid choice.\n";
        main_menu();
    }
}

// Front Door (Will Be locked, Requires key from basement)
void front_door() {
    cout << "\nYou approach the front door.\n";

    if (hasKey) {
        cout << "You use the key and unlock the door!\n";
        cout << "Inside, you find a chest full of treasure.\n";
        cout << "You win!\n";
        return;
    } else {
        cout << "The door is locked.\n";
        cout << "Maybe there's a key somewhere.\n";
        cout << "1. Go around back\n";
        cout << "2. Go home\n";
        cout << "Choose: ";

        int choice;
        cin >> choice;

        if (choice == 1) back_yard();
        else go_home();
    }
}

// Backyard
void back_yard() {
    cout << "\nYou sneak into the backyard.\n";
    cout << "You see a broken door leading into a kitchen.\n";
    cout << "There's also a note on the ground.\n";
    cout << "Do you:\n";
    cout << "1. Read the note\n";
    cout << "2. Enter the kitchen\n";
    cout << "3. Go home\n";
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        cout << "\nThe note says:\n";
        cout << "'The key lies beneath the house...'\n";
        back_yard();
    } else if (choice == 2) {
        kitchen();
    } else {
        go_home();
    }
}

// Kitchen 
void kitchen() {
    cout << "\nYou enter the dusty kitchen.\n";
    cout << "There is a trapdoor leading down.\n";
    cout << "Do you:\n";
    cout << "1. Open trapdoor\n";
    cout << "2. Go back outside\n";
    cout << "Choose: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        basement();
    } else {
        back_yard();
    }
}

// Basement (Has key)
void basement() {
    cout << "\nYou climb into the dark basement...\n";

    if (!hasKey) {
        cout << "You find a rusty key on a table!\n";
        cout << "You picked up the key.\n";
        hasKey = true;
    } else {
        cout << "Nothing else here.\n";
    }

    cout << "1. Go back to kitchen\n";
    cout << "Choose: ";

    int choice;
    cin >> choice;

    kitchen();
}

// Go Home
void go_home() {
    cout << "\nYou decide it's not worth the risk.\n";
    cout << "You go home safely... but empty-handed.\n";
}