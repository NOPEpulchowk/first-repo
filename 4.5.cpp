// 4.5.cpp
// Write a program that illustrates the following relationship and comment on them.
// i) const_object.non_const_mem_function
// ii) const_object.const_mem_function
// iii) non_const_object.non_const_mem_function
// iv) non_const_object.const_mem_function
#include <iostream>
using namespace std;
class Data
{
private:
    int num;

public:
    Data(int num)
    { // Constructor
        this->num = num;
    }

    // Non-const member function
    void set_num(int n)
    {
        num = n;
    }

    // Const member function
    void display() const
    {
        cout << "Num = " << num << endl;
    }
};

int main()
{

    // i. const_object and non_const_mem_function
    const Data d1(10);
    // d1.set_num(100); //Error cannot call non-const function on const object

    // ii. const_object and const_mem_function
    d1.display(); // Allowed const object calling const member function

    // iii. non_const_object and non_const_mem_function
    Data d2(20);
    d2.set_num(200); // Allowed non-const object calling non-const member function

    // iv. non_const_object and const_mem_function
    d2.display(); // Allowed non-const object calling const member function

    return 0;
}