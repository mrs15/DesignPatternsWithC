#include <stdio.h>

#include "CarFactoryProducer.h"
#include "CarEngineTypes.h"

#include "PetrolCarFactory.h"
#include "ElectricCarFactory.h"

/*Create and return a car factory based on the Car Engine Type*/
static CarFactory factory;

CarFactory *getCarFactory(engine_type type)
{
	if(type == PETROL)
	{
		//return a petrol factory
		factory.getCar = &GetPetrolCar;
		return &factory;
	}
	else if(type == ELECTRIC)
	{
		//return a electric factory
		factory.getCar = &GetElectricCar;
		return &factory;
	}

	return NULL;
}
