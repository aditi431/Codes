#include <iostream>
using namespace std;
class Vehicle
{
    int topSpeed;
    float mileage;
    string fuel;
};
class TwoWheeler : public Vehicle
{
public:
};

class Fourwheeler : public Vehicle
{
public:
};
class scooty : public TwoWheeler
{
public:
};
class Bike : TwoWheeler
{
public:
};

int main()
{
    
}