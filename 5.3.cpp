// 5.3.cpp
// Write a program to compare two objects of a class that contains an integer value as its data member. Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=), greater than or equal to (>=), and less than or equal to(<=) operators using member operator functions.

#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v = 0)
    {
        value = v;
    }

    void input()
    {
        cout << "Enter a number: ";
        cin >> value;
    }

    void print()
    {
        cout << value;
    }

    bool operator==(Number &n2)
    {
        return value == n2.value;
    }

    bool operator<(Number &n2)
    {
        return value < n2.value;
    }

    bool operator>(Number &n2)
    {
        return value > n2.value;
    }

    bool operator!=(Number &n2)
    {
        return value != n2.value;
    }

    bool operator>=(Number &n2)
    {
        return value >= n2.value;
    }

    bool operator<=(Number &n2)
    {
        return value <= n2.value;
    }
};

int main()
{
    Number n1, n2;

    n1.input();
    n2.input();

    cout << "n1 = ";
    n1.print();
    cout << endl;

    cout << "n2 = ";
    n2.print();
    cout << endl;

    cout << "n1 == n2: " << (n1 == n2) << endl;
    cout << "n1 != n2: " << (n1 != n2) << endl;
    cout << "n1 <  n2: " << (n1 < n2) << endl;
    cout << "n1 >  n2: " << (n1 > n2) << endl;
    cout << "n1 <= n2: " << (n1 <= n2) << endl;
    cout << "n1 >= n2: " << (n1 >= n2) << endl;

    return 0;
}
