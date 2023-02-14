#include<iostream>

class Vehicle
{
    public :
    int regno ;
    int tyres ;
    int fuelCapacity ;
} ;

class Car : public Vehicle
{
    public :
    int sitingCapacity ;

    void fun()
    {
        std::cout << regno ;
    }
} ;

int main()
{
    Car c ;
    c.regno = 10;
    c.sitingCapacity = 100;

    Vehicle v ;
    // v.sitingCapacity ;

    return 0 ;
}