#pragma once
#include "Vehicle.h"

class Bus : public Vehicle
{
	int people;
	int max_people;
public:
	Bus(int people, int max_people, double petrol, double max_petrol);
	int getPeopleCount(); // bes voditelya
	int getMaxPeople();
	void arrive();
	bool leave();

	void setPeople(int people);
};

