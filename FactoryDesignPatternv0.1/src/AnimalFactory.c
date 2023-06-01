/*
 * AnimalFactory.c
 *
 *  Created on: Jun 1, 2023
 *      Author: rafay
 */

#include <stdio.h>
#include <stdlib.h>

#include "AnimalFactory.h"
#include "AnimalTypes.h"

/*implementations of different animals (add more animal implementations here)*/
#include "Cat.h"
#include "Dog.h"

static Animal animal;

Animal * getAnimal(AnimalType type)
{
	if(type == CAT)
	{
		animal.eat = cat_eat;
		animal.walk = cat_walk;
		return &animal;
	}
	else if(type == DOG)
	{
		animal.eat = dog_eat;
		animal.walk = dog_walk;
		return &animal;
	}
	else if(type == LION)
	{
		//not implemented
	}

	return NULL;
}//getAnimal
