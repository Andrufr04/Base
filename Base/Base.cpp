#include <iostream>
#include "Base.h"

using namespace std;

void Base::showStatus() 
{
    cout << "People on base: " << people_on_base << endl;
    cout << "Vehicles on base: " << vehicles_on_base << endl;
    cout << "Petrol on base (l): " << petrol_on_base << endl;
    cout << "Goods on base (t): " << goods_on_base << endl;
}