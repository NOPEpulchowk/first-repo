// class
#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cin >> num;
    if (num < 0)
    {
        cout << "Enter positive numbers";
    }
    else if (num == 0)
    {
        cout << "It is 0";
    }
    else if (num == 1)
    {
        cout << "Neither prime nor composite";
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        cout << "It is prime";
    }
    else
    {
        cout << "Composite";
    }
}