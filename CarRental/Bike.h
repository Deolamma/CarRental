#pragma once
#include <iostream>
#include "Automobile.h"
//concrete implementation of the Automobile class
class Bike : public Automobile
{
public:
	void GetVehicle() override;
};
