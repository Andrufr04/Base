#pragma once
class Vehicle 
{
protected:
    double petrol_amount; // Текущее количество топлива
    double tank_volume;   // Объем бака

public:
    Vehicle(double petrol_amount, double tank_volume);
    double getTankVolume() const;
    double getPetrolAmount() const;
    virtual void arrive();
    virtual bool leave();
};
