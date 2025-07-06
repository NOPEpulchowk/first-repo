// //2.6.cpp
// //Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are

// Chief executive officer Rs. 35000/m

// Information officer Rs. 25000/m

// System analyst Rs. 24000/m

// Programmer Rs. 18000/m

// Make a function that takes two arguments; one salary and the other increment. Use proper default argument.
#include <iostream>
using namespace std;

float newSalary(float salary, float increment = 12.0)
{
    return salary + (salary * increment / 100);
}

int main()
{

    float ceo2009 = 35000;
    float infoOfficer2009 = 25000;
    float sysAnalyst2009 = 24000;
    float programmer2009 = 18000;

    cout << "Salaries in 2010 after increment:" << endl;
    cout << "Chief Executive Officer: Rs. " << newSalary(ceo2009, 9) << "/m" << endl;
    cout << "Information Officer: Rs. " << newSalary(infoOfficer2009, 10) << "/m" << endl;
    cout << "System Analyst: Rs. " << newSalary(sysAnalyst2009, 12) << "/m" << endl;
    cout << "Programmer: Rs. " << newSalary(programmer2009, 12) << "/m" << endl;

    return 0;
}
