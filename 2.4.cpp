// 2.4.cpp
// Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.
#include <iostream>
using namespace std;
float Update(float &tempr1, float &tempr2)
{
    if (tempr1 > tempr2)
    {
        return tempr1;
    }
    else
    {
        return tempr2;
    }
}
int main()
{
    float tempr1, tempr2, newtempr;
    cout << "Enter temperature1 :";
    cin >> tempr1;
    cout << "Enter temperature2 :";
    cin >> tempr2;
    cout << "Enter new temperature :";
    cin >> newtempr;
    (tempr1, tempr2) = newtempr;
    cout << "New temperatures : " << endl
         << tempr1 << endl
         << tempr2;
}