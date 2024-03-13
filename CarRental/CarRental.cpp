#include "AutomobilesGarageFactory.h"

int main()
{
	std::cout << "Enter the type of vehicle you want to rent: ";

	std::string vehicleType;
	std::cin >> vehicleType;

	//Creating an object using the Factory Method
	auto vehicle = AutomobilesGarageFactory::GetOrderedVehicle(vehicleType);

	if (vehicle)
	{
		vehicle->GetVehicle();
	}
}

/*
	* Describes how to use the Factory Method pattern to create objects
	* But Does not implement the Factory Method pattern
	if (vehicleType == "Bike")
	{
		garage = new Bike();
	}
	else if (vehicleType == "Bus")
	{
		garage = new Bus();
	}
	else
	{
		std::cout << "Invalid vehicle type." << std::endl;
	}*/