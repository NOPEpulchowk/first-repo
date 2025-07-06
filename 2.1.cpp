// 2.1.cpp
// Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. Pass the structure to the function
#include <iostream>
using namespace std;

struct dates
{

    int month;
    int day;
    int year;

};

void Print_Dates(dates date[], int n)
{

    int i;

    for (i = 0; i < n; i++)
    {
        cout << "Dates " << i + 1 << ". : " << date[i].month << "/" << date[i].day << "/" << date[i].year << endl;
    }

}


int main()
{

    struct dates date[20];
    int i, num;

    cout << "Enter the number of dates : ";
    cin >> num;

    for (i = 0; i < num; i++)
    {

        cout << i + 1 << ". Enter the year : ";
        cin >> date[i].year;

        cout << "Enter the month : ";
        cin >> date[i].month;

        cout << "Enter the day : ";
        cin >> date[i].day;

        cout << endl;

    }
    
    Print_Dates(date, num);
}