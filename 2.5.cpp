// 2.5.cpp
// Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary. Use inline function to display the net payment to the employee by the company.
#include <iostream>
using namespace std;
inline float netSalary(float salary)
{
    return salary - (salary * 0.10);
}

int main()
{
    float salary;

    cout << "Enter the employee's salary: Rs. ";
    cin >> salary;

    cout << "Net payment after 10% income tax: Rs. " << netSalary(salary) << endl;

    return 0;
}
