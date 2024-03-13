#pragma once
#include <iostream>
#include "Automobile.h"
//concrete implementation of the Automobile class
class Car : public Automobile
{
public:
	void GetVehicle() override;
};

