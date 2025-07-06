// 2.2.cpp
// Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the function above.
#include <iostream>
using namespace std;

void convert()
{
    float inches, feet;
    cout << "Enter feet" << endl;
    cin >> feet;
    inches = feet * 12;
    cout << "The inches is : " << inches << endl;
}

void convert(float &feet)
{
    float inches;
    inches = feet * 12;
    feet = inches;
}

void convert(float feet, float inches)
{
    inches = feet * 12 + inches;
    cout << "The measurement in inches is : " << inches << endl;
}

int main()
{
    float feet;
    convert();
    cout << "Enter feet" << endl;
    cin >> feet;
    convert(feet);
    cout << "The inches is : " << feet << endl;
    convert(12, 3);
    return 0;
}