/*
 * ElectricCarFactory.h
 *
 *  Created on: Jun 3, 2023
 *      Author: rafay
 */

#ifndef ELECTRICCARFACTORY_H_
#define ELECTRICCARFACTORY_H_

#include "CarFactoryInterface.h"
#include "CarBrands.h"

Car *GetElectricCar(car_brand_t brand);



#endif /* ELECTRICCARFACTORY_H_ */
