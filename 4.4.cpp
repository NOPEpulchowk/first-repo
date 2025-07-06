// 4.4.cpp
// Assume that one constructor initializes data member say num_vehicle, hour, and rate. There should be a 10% discount if num_vehicle exceeds 10. Display the total charge. Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).
#include <iostream>
using namespace std;
class Vehicle
{
private:
    int num_vehicle;
    int hour;
    float rate;
    float charge;

public:
    Vehicle(int num_vehicle, int hour, float rate)
    {
        this->num_vehicle = num_vehicle;
        this->hour = hour;
        this->rate = rate;
    }
    Vehicle(Vehicle &v)
    {
        num_vehicle = v.num_vehicle;
        hour = v.hour;
        rate = v.rate;
        cout << "Here! Copy constructor is called." << endl;
    }
    float total_charge()
    {
        if (num_vehicle > 10)
            charge = (num_vehicle * hour * rate) - 0.1 * (num_vehicle * hour * rate);
        else
            charge = (num_vehicle * hour * rate);
        return charge;
    }
    void display()
    {
        cout << "Number_vehicle: " << num_vehicle << " Hour: " << hour << " Rate: " << rate << " Total_charge: " << total_charge() << endl;
    }
};
int main()
{
    int num, hr, rate, charge;
    cout << "Enter Number of Vehicles : ";
    cin >> num;
    cout << "Enter Hour : ";
    cin >> hr;
    cout << "Enter Rate : ";
    cin >> rate;
    Vehicle v1(num, hr, rate);
    Vehicle v2(v1);
    cout << "Vechile Info:" << endl;
    v1.display();
    cout << "Copied Info:" << endl;
    v2.display();
    return 0;
}