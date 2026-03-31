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
double getArea();
double displayData();


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
   area = getArea(length, width);
   
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

    return length;
}

double getWidth(double width){

    cout << "Enter rectangle's length: ";
    cin >> width;

    return width;
}

double getArea(double length, double width){

    double area = length * width; 
    
    return area;
    
}

double displayData(double length, double width, double area){

    cout << "The length of the rectangle is: " << length << "." << endl;
    cout << "The width of the rectangle is: " << width << "." << endl;
    cout << "The area of the rectangle is: " << area << "." << endl;

    return;
}