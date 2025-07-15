// 5.4.cpp
// Write a class Date that overloads prefix and postfix operators to increase the Date object by one day, while causing appropriate increments to the month and year (use the appropriate condition for leap year). The prefix and postfix operators in the Date class should behave exactly like the built-in increment operators.

#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    int getDaysInMonth(int m, int y)
    {
        if (m == 2)
        {
            if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
                return 29;
            else
                return 28;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11)
            return 30;
        else
            return 31;
    }

    Date(int d = 1, int m = 1, int y = 2000)
    {
        day = d;
        month = m;
        year = y;
    }

    void input()
    {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void print()
    {
        cout << month << "/" << day << "/" << year << endl;
    }

    Date &operator++()
    {
        day++;
        if (day > getDaysInMonth(month, year))
        {
            day = 1;
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
            }
        }
        return *this;
    }

    Date operator++(int)
    {
        Date temp = *this;
        ++(*this);
        return temp;
    }
};

int main()
{
    Date d;
    d.input();

    cout << "Original date (mm/dd/yyyy): ";
    d.print();

    ++d;
    cout << "After prefix ++d (mm/dd/yyyy): ";
    d.print();

    d++;
    cout << "After postfix d++ (mm/dd/yyyy): ";
    d.print();

    return 0;
}
