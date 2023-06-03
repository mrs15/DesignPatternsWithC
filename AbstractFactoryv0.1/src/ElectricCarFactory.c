/*
 * ElectricCarFactory.c
 *
 *  Created on: Jun 3, 2023
 *      Author: rafay
 */


#include <stdio.h>

#include "ElectricCarFactory.h"

#include "ElectricToyota.h"
#include "ElectricHonda.h"

static Car car;

Car *GetElectricCar(car_brand_t brand)
{
	if(brand == TOYOTA)
	{
		car.assemble = ev_toyota_assemble;
		return &car;
	}
	else if(brand  == HONDA)
	{
		car.assemble = ev_honda_assemble;
		return &car;
	}

	return NULL;
}
