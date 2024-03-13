#include "AutomobilesGarageFactory.h"

std::unique_ptr<Automobile> AutomobilesGarageFactory::GetOrderedVehicle(const std::string& vehicleType)
{
	Automobile* vehicle = nullptr;

	if (vehicleType == "Bike")
	{
		return std::make_unique<Bike>();
	} 
	else if (vehicleType == "Car")
	{
		return std::make_unique<Car>();
	
	}
	else if (vehicleType == "Bus")
	{
		return std::make_unique<Bus>();
	}
	else
	{
		std::cout << "Invalid vehicle type." << std::endl;
		return nullptr;
	}
}