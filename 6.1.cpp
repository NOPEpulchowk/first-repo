// 6.1.cpp

// Write a program that can convert the Distance (meter, centimeter) to meters measurement in float and vice versa. Make a class distance with two data members, meter and centimeter. You can add function members as per your requirement.

#include <iostream>

class Distance
{
private:
    int meter;
    int centimeter;

public:
    // Default constructor
    Distance(int m = 0, int cm = 0) : meter(m), centimeter(cm)
    {
        normalize();
    }

    // Normalize centimeters to meters if >= 100
    void normalize()
    {
        if (centimeter >= 100)
        {
            meter += centimeter / 100;
            centimeter = centimeter % 100;
        }
    }

    // Set distance from meters in float
    void setFromFloat(float meters)
    {
        meter = static_cast<int>(meters);
        centimeter = static_cast<int>((meters - meter) * 100 + 0.5f); // rounding
        normalize();
    }

    // Get distance as float meters
    float toFloat() const
    {
        return meter + centimeter / 100.0f;
    }

    // Input distance in meter and centimeter
    void input()
    {
        std::cout << "Enter meters: ";
        std::cin >> meter;
        std::cout << "Enter centimeters: ";
        std::cin >> centimeter;
        normalize();
    }

    // Display distance
    void display() const
    {
        std::cout << meter << " meter(s) and " << centimeter << " centimeter(s)\n";
    }
};

int main()
{
    Distance d1;
    std::cout << "Enter distance (meter and centimeter):\n";
    d1.input();

    std::cout << "Distance in float meters: " << d1.toFloat() << " m\n";

    float meters;
    std::cout << "\nEnter distance in meters (float): ";
    std::cin >> meters;

    Distance d2;
    d2.setFromFloat(meters);

    std::cout << "Distance in meter and centimeter: ";
    d2.display();

    return 0;
}