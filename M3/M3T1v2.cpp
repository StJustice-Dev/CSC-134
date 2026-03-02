// CSC 134
// M3T1v2
// Youngblood
// 3/1/26
// Ask the user for the width and length of two rectangles
// Find the area and find which is larger

#include <iostream>
using namespace std;


int main() {

    // Variables
    double len1, wid1, len2, wid2; 
    double area1, area2;

    // Ask user for the length and width
    cout << "What's the length of the first rectangle? ";
    cin >> len1;

    cout << "What's the width of the first rectangle? ";
    cin >> wid1;
    cout << "What's the length of the second rectangle? ";
    cin >> len2;
    cout << "What's the width of the second rectangle? ";
    cin >> wid2;

    // Find the area
    area1 = len1 * wid1;
    area2 = len2 * wid2;
    // Print the area
    cout << "The first rectangle has an area of: " << area1 << endl;
    cout << "The second rectangle has an area of: " << area2 << endl;  

    // Determine which rectangle has the larger area
    if (area1 > area2) {
        cout << "Rectangle one is bigger." << endl;
    }

    else if (area2 > area1) {
        cout << "Rectangle two is bigger." << endl;
    }

    else if (area1 == area2) {
        cout << "Rectangle one and two are the same size." << endl;
    }

    return 0;
}