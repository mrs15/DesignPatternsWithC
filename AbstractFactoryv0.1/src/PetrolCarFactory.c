/*
 * PetrolCarFactory.c
 *
 *  Created on: Jun 3, 2023
 *      Author: rafay
 */

#include <stdio.h>

#include "PetrolCarFactory.h"

#include "PetrolHonda.h"
#include "PetrolFord.h"

static Car car;

Car *GetPetrolCar(car_brand_t brand)
{
	if(brand == HONDA)
	{
		car.assemble = &gas_honda_assemble;
		return &car;
	}
	else if(brand == FORD)
	{
		car.assemble = &gas_ford_assemble;
		return &car;
	}

	return NULL;
}
