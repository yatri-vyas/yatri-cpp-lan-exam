#include <iostream>

using namespace std;

class Vehicle
{
public:
    virtual void startengine() = 0;
    virtual void drive() = 0;
};

class Car : public Vehicle
{
public:
    void startengine()
    {
        cout << " Car's Engine Start ." << endl;
    }

    void drive()
    {
        cout << " We are Driving Car ." << endl;
    }
};

class Bike : public Vehicle
{
public:
    void startengine()
    {
        cout << " Bike's Engine Start ." << endl;
    }

    void drive()
    {
        cout << " We are Riding Bike ." << endl;
    }
};

int main()
{
    Vehicle *ptr;
    Car car;
    Bike bike;

    ptr = &car;
    cout<<"Car class called ."<<endl;
    car.startengine();
    car.drive();

    ptr = &bike;
    cout<<"Bike class called ."<<endl;
    bike.startengine();
    bike.drive();

    return 0;
}