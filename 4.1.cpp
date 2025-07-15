// 4.1.cpp
// Write a program that has a class to represent time. The class should have constructors to initialize data members hour, minute, and second to 0 and to initialize them to values passed as arguments. The class should have a member function to add time objects and return the result as a time object. There should be functions to display time in 12-hour and 24-hour format.
#include <iostream>
using namespace std;
class Time
{
private:
    int hour, min, sec;

public:
    void normalize()
    {
        if (sec >= 60)
        {
            min += sec / 60;
            sec = sec % 60;
        }
        if (min >= 60)
        {
            hour += min / 60;
            min = min % 60;
        }
        if (hour >= 24)
        {
            hour = hour % 24;
        }
    }
    Time(int h = 0, int m = 0, int s = 0, string ampm = "AM")
    {
        if (ampm == "PM" && h < 12)
        {
            h += 12;
        }
        else if (ampm == "AM" && h == 12)
        {
            h = 0;
        }
        hour = h;
        min = m;
        sec = s;
        normalize();
    }
    Time add_time(Time t2)
    {
        Time result;
        result.hour = this->hour + t2.hour;
        result.min = this->min + t2.min;
        result.sec = this->sec + t2.sec;
        result.normalize();
        return result;
    }
    void display12()
    {
        string period;
        int displayHour;
        if (hour == 0)
        {
            displayHour = 12;
            period = "AM";
        }
        else if (hour < 12)
        {
            displayHour = hour;
            period = "AM";
        }
        else if (hour == 12)
        {
            displayHour = 12;
            period = "PM";
        }
        else
        {
            displayHour = hour - 12;
            period = "PM";
        }
        cout << "Time in 12-hour format: " << displayHour << ":" << min << ":" << sec << " " << period << endl;
    }
    void display24()
    {
        cout << "Time in 24-hour format: " << hour << ":" << min << ":" << sec << endl;
    }
};
int main()
{
    int hr, min, sec;
    char ampm_char;
    string ampm;
    cout << "Enter time details here!" << endl;
    cout << "Enter hour : ";
    cin >> hr;
    cout << "Enter minute : ";
    cin >> min;
    cout << "Enter second : ";
    cin >> sec;
    cout << "Enter AM/PM (a/p)? : ";
    cin >> ampm_char;
    if (ampm_char == 'a' || ampm_char == 'A')
    {
        ampm = "AM";
    }
    else if (ampm_char == 'p' || ampm_char == 'P')
    {
        ampm = "PM";
    }
    else
    {
        cout << "Invalid AM/PM input!" << endl;
        return 1;
    }
    Time t1(hr, min, sec, ampm);
    Time t2(5, 50, 60, "AM");
    Time t3 = t1.add_time(t2);
    cout << endl
         << "Time1:" << endl;
    t1.display12();
    t1.display24();
    cout << endl
         << "Time2:" << endl;
    t2.display12();
    t2.display24();
    cout << endl
         << "Added time:" << endl;
    t3.display12();
    t3.display24();
    return 0;
}