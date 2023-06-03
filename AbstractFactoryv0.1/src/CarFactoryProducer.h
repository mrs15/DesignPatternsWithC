/*
 * CarFactory.h
 *
 *  Created on: Jun 3, 2023
 *      Author: rafay
 */

#ifndef CARFACTORYPRODUCER_H_
#define CARFACTORYPRODUCER_H_

#include "CarBrands.h"
#include "CarEngineTypes.h"
#include "CarFactoryInterface.h"


typedef struct{
	Car *(*getCar)(car_brand_t brand);
}CarFactory;

CarFactory *getCarFactory(engine_type type);




#endif /* CARFACTORYPRODUCER_H_ */
