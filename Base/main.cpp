#include <iostream>
#include "Base.h"
#include "Bus.h"
#include "Truck.h"
#include "Vehicle.h"

using namespace std;

int Base::people_on_base = 100; // люди
int Base::vehicles_on_base = 50; // транспорт
double Base::petrol_on_base = 10000; // бенз
double Base::goods_on_base = 200; // груз

int main()
{
    Base::showStatus();

    Bus bus(10, 20, 50, 100);
    bus.arrive();

    Base::showStatus();

    bus.setPeople(15);
    cout << "Bus loading people" << endl;

    bus.leave();

    Base::showStatus();





    Truck truck(100, 150, 50, 100);
    truck.arrive();

    Base::showStatus();

    truck.SetLoad(200);
    cout << "Truck loading load" << endl;

    truck.leave();

    Base::showStatus();
























   /* bool a = true;

    cout << "Меню:" << endl;
    cout << "1. Show status" << endl;
    cout << "2. Add bus" << endl;
    cout << "3. Add truck" << endl;
    cout << "4. Remove the bus" << endl;
    cout << "5. Remove the truck" << endl;
    cout << "6. Exit" << endl;

    int choice;
    Vehicle* vehicle;

    while (a == true)
    {
        cin >> choice;

        switch (choice)
        {
        case 1:
            Base::showStatus();
            break;
        case 2:
            int people, max_people;
            double petrol, max_petrol;

            cout << "Input people(whithout driver): ";
            cin >> people;
            cout << "Input max people(whithout driver): ";
            cin >> max_people;
            cout << "Input petrol(l): ";
            cin >> petrol;
            cout << "Input max petrol(l): ";
            cin >> max_petrol;

            vehicle = new Bus(people, max_people, petrol, max_petrol);
            vehicle->arrive();
            break;
        case 3:
            double load, max_load, petrol, max_petrol;
            cout << "Input load(t): ";
            cin >> load;
            cout << "Input max load(t): ";
            cin >> max_load;
            cout << "Input petrol(l):";
            cin >> petrol;
            cout << "Input max petrol(l): ";
            cin >> max_petrol;

            vehicle = new Truck(load, max_load, petrol, max_petrol);
            vehicle->arrive();
            break;
        case 4:
            
        }
    }*/








    return 0;
}