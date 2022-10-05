// Author: Colter Cotten
// Filename: main.cpp
// Description: This program prompts the user for their name and the radius of a circle,
//              calculates the area of the circle, then displays the area of the circle.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const double PI = 3.14159;

int main()
{
    // Variable declarations
    double radius;
    double area;
    string name;

    // Sets the numbers in the output to display in fixed notation with two decimal places.
    cout << fixed << showpoint << setprecision(2);

    // Prompts the user for their name and stores it in the name variable.
    cout << "Enter name: ";
    getline(cin, name);
    cout << endl;

    // Prompts the user for the radius of a circle and stores it in the radius variable.
    cout << "Enter radius: ";
    cin >> radius;
    cout << endl;

    // Calculates the area of the circle and stores it in the area variable.
    area = PI * (radius * radius);

    // Displays a message greeting the user and the area of the circle.
    cout << "Hi " << name << ", the area of a circle with a radius of "
         << radius << " is " << area << "." << endl;
    
    return 0;
}
