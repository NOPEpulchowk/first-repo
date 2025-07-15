// 3.4.cpp
// Write a program with classes to represent a circle, rectangle, and triangle. Each class should have data members to represent the actual objects and member functions to read and display objects, find perimeter and area of the objects, and other useful functions. Use the classes to create objects in your program.
#include <iostream>
#include <cmath>
using namespace std;
class circle
{
public:
    int radius;

    float Perimeter(int r)
    {
        return 2 * 3.14 * r;
    }
    float Area(int r)
    {
        return 3.14 * r * r;
    }
};
class rectangle
{
public:
    int length, breadth;

    float Perimeter(int l, int b)
    {
        return 2 * (l + b);
    }
    float Area(int l, int b)
    {
        return l * b;
    }
};
class triangle
{
public:
    int a, b, c; // sides of triangle

    float Perimeter(int a, int b, int c)
    {
        return a + b + c;
    }
    float Area(int a, int b, int c)
    {wwwww
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};
int main()
{
    class circle c;
    class rectangle r;
    class triangle t;

    cout << "Enter radius of circle : ";
    cin >> c.radius;
    cout << "Enter length and breadth of rectangle : ";
    cin >> r.length >> r.breadth;
    cout << "Enter sides of a triangle : ";
    cin >> t.a >> t.b >> t.c;

    cout << "Perimeter of circle is : " << c.Perimeter(c.radius) << endl;
    cout << "Area of circle is : " << c.Area(c.radius) << endl;
    cout << "Perimeter of rectangle is : " << r.Perimeter(r.length, r.breadth) << endl;
    cout << "Area of rectangle is : " << r.Area(r.length, r.breadth) << endl;
    cout << "Perimeter of triangle is : " << t.Perimeter(t.a, t.b, t.c) << endl;
    cout << "Area of triangle is : " << t.Area(t.a, t.b, t.c) << endl;
}