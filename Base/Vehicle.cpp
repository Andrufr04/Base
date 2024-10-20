#include "Vehicle.h"
#include <iostream>
#include "Base.h"

using namespace std;

Vehicle::Vehicle(double petrol_amount, double tank_volume) : petrol_amount(petrol_amount), tank_volume(tank_volume) 
{
}
double Vehicle::getTankVolume() const 
{
    return tank_volume;
}
double Vehicle::getPetrolAmount() const 
{
    return petrol_amount;
}
void Vehicle::arrive() 
{
    Base::vehicles_on_base++;
    Base::people_on_base++; // voditel
}
bool Vehicle::leave() 
{
    bool rez;
    double required_fuel = tank_volume - petrol_amount;

    if (Base::petrol_on_base < required_fuel || Base::people_on_base < 1) 
    {
        cout << " Unable to leave" << endl;
        rez = false;
    }
    else
    {
        petrol_amount = tank_volume;

        Base::petrol_on_base -= required_fuel;
        Base::vehicles_on_base--;
        Base::people_on_base--; // voditel

        rez = true;
    }
    return rez;
}

