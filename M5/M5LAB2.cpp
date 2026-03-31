/*
CSC 134
M5LAB2
St. Justice
3/30/26
Goal: Fix code,  
*/

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double getLength();
double getWidth();

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength(length);
   
   // Get the rectangle's width.
   width = getWidth(width);
   
   // Get the rectangle's area.
   area = getArea();
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength(double length){

    cout << "Enter rectangle's length: ";
    cin >> length;

    return length *2;
}

double getWidth(double width){

    cout << "Enter rectangle's length: ";
    cin >> width;

    return width *2;
}