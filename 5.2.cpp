// 5.2.cpp
// Write a class to store x, y, and z coordinates of a point in three-dimensional space. Overload addition and subtraction operators for addition and subtraction of two coordinate objects. Implement the operator functions as non-member functions (friend operator functions).

#include <iostream>
using namespace std;

class Point3D
{
private:
    float x, y, z;

public:
    Point3D(float a = 0, float b = 0, float c = 0)
    {
        x = a;
        y = b;
        z = c;
    }

    friend Point3D operator+(Point3D p1, Point3D p2);
    friend Point3D operator-(Point3D p1, Point3D p2);

    void display()
    {
        cout << "(" << x << ", " << y << ", " << z << ")";
    }
};

Point3D operator+(Point3D p1, Point3D p2)
{
    return Point3D(p1.x + p2.x, p1.y + p2.y, p1.z + p2.z);
}

Point3D operator-(Point3D p1, Point3D p2)
{
    return Point3D(p1.x - p2.x, p1.y - p2.y, p1.z - p2.z);
}

int main()
{

    Point3D a(1, 2, 3);
    Point3D b(4, 5, 6);

    Point3D sum = a + b;
    Point3D diff = a - b;

    cout << "a = ";
    a.display();
    cout << endl << "b = ";
    b.display();
    cout << endl << "a + b = ";
    sum.display();
    cout << endl << "a - b = ";
    diff.display();
    cout << endl;

    return 0;
}