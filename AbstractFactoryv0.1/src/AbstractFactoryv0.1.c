/*
 ============================================================================
 Name        : 1.c
 Author      : Muhammad Rafay Shams
 Version     :
 Copyright   : Your copyright notice
 Description : Implementing the Abstract Factory Pattern in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "CarFactoryProducer.h"
#include "PetrolCarFactory.h"
#include "ElectricCarFactory.h"
#include "CarFactoryInterface.h"
#include "CarBrands.h"
#include "CarEngineTypes.h"

int main(void) {

	CarFactory *factory = getCarFactory(ELECTRIC);
	Car *car = factory->getCar(TOYOTA);

	car->assemble();



	return EXIT_SUCCESS;
}
