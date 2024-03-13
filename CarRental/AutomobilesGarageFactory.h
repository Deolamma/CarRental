#pragma once
#include <iostream>
#include <string>
#include "Automobile.h"
#include "Bike.h"
#include "Bus.h"
#include "Car.h"

//Factory Class
class AutomobilesGarageFactory
{
public:
	//Factory method
	static std::unique_ptr<Automobile> GetOrderedVehicle(const std::string&);
};

