// 5.1.cpp
// Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.

// A. Make a particular member function of one class as a friend function of another class for addition.

// B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.

// C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made friend to the latter.

// Make least possible classes to demonstrate all the above in a single program without conflict.

#include <iostream>
using namespace std;

class Vector2D;

class Point2D
{
private:
    float x, y;

public:
    Point2D(float x = 0, float y = 0)
    {
        this->x = x;
        this->y = y;
    }

    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    Point2D operator+(const Vector2D &vec) const;

    friend class Vector2D;
};

class Vector2D
{
private:
    float x, y;

public:
    Vector2D(float x = 0, float y = 0)
    {
        this->x = x;
        this->y = y;
    }

    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }

    Point2D operator*(const Point2D &point) const
    {
        return Point2D(point.x * x, point.y * y);
    }

    Point2D operator/(const Point2D &point) const
    {
        return Point2D(point.x / x, point.y / y);
    }

    Point2D operator-(const Point2D &point) const
    {
        return Point2D(point.x - x, point.y - y);
    }

    friend class Point2D;
};

Point2D Point2D::operator+(const Vector2D &vec) const
{
    return Point2D(x + vec.x, y + vec.y);
}

int main()
{
    Point2D p1(4, 5);
    Vector2D v1(2, 3);

    cout << "Initial Points: " << endl << "Point2D: ";
    p1.display();
    cout << "Vector2D: ";
    v1.display();

    Point2D addResult = p1 + v1;
    Point2D mulResult = v1 * p1;
    Point2D divResult = v1 / p1;
    Point2D subResult = v1 - p1;

    cout << endl <<"Addition: ";
    addResult.display();
    cout << "Multiplication: ";
    mulResult.display();
    cout << "Division: ";
    divResult.display();
    cout << "Subtraction: ";
    subResult.display();

    return 0;
}