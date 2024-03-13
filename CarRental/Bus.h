#pragma once
#include "Automobile.h"
#include <iostream>
//concrete implementation of the Automobile class
class Bus : public Automobile
{
public:
	void GetVehicle() override;
};

