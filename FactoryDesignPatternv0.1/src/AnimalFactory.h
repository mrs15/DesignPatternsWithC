/*
 * AnimalFactory.h
 *
 *  Created on: Jun 1, 2023
 *      Author: rafay
 */

#ifndef ANIMALFACTORY_H_
#define ANIMALFACTORY_H_

#include "AnimalTypes.h"

/*The interface of an animal that is implemented by different
 *animals in their own way
 */
typedef struct {
	void (*eat)(void);
	void (*walk)(void);
}Animal;

/*Returns an Animal data structure/class that implements the
 *animal interface
 *@param: Enumeration of Animal types
 */
Animal * getAnimal(AnimalType type);



#endif /* ANIMALFACTORY_H_ */
