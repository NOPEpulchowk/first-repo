// 4.6.cpp
// Create a class with a data member to hold a "serial number" for each object created from the class. That is, the first object created will be numbered 1, the second 2, and so on by using the basic concept of static data members. Use static member function if it is useful in the program. Otherwise, make a separate program that demonstrates the use of static member function.
#include <iostream>
using namespace std;
class Serial
{
private:
    static int serial_num;
    int data;

public:
    Serial(int data)
    {
        serial_num++;
        this->data = data;
    }
    ~Serial()
    {
    }
    void display()
    {
        cout << "Serial_Num of " << data << " is " << serial_num << endl;
    }
    static void total()
    {
        cout << "Total data are:  " << serial_num << endl;
    }
};
int Serial::serial_num = 0;
int main()
{
    Serial s1(20);
    s1.display();

    Serial s2(50);
    s2.display();

    Serial s3(40);
    s3.display();

    Serial s4(25);
    s4.display();

    Serial::total();

    return 0;
}