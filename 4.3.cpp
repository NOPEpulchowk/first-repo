// 4.3.cpp
// Write a class that can store Department ID and Department Name with constructors to initialize its members. Write destructor member in the same class and display the message "Object n goes out of the scope". Your program should be made such that it should show the order of constructor and destructor invocation.
#include <iostream>
using namespace std;
class Info
{
private:
    int depart_id;
    string depart_name;

public:
    Info(int depart_id, string depart_name)
    {
        this->depart_id = depart_id;
        this->depart_name = depart_name;
    }
    ~Info()
    {
        cout << "Here! Object " << depart_id << " goes out of the scope." << endl;
    }
    void display()
    {
        cout << "Department ID: " << depart_id << " Department Name: " << depart_name << endl
             << endl;
    }
};
int main()
{
    Info i1(63, "Computer");
    i1.display();

    Info i2(62, "Computer and Electronics");
    i2.display();

    return 0;
}