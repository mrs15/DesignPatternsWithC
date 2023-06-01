/*
 ============================================================================
 Name        : 1.c
 Author      : Muhammad Rafay Shams
 Version     :
 Copyright   : Your copyright notice
 Description : Implementation of the Factory Design Pattern in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "AnimalTypes.h"
#include "AnimalFactory.h"

/*this function does not know anything about which animal is being processed*/
static void process_animal(Animal *animal)
{
	if(!animal)
	{
		printf("Animal not implemented\n");
	    return;
	}

	printf("Processing Animal:\n");
	animal->eat();
	animal->walk();

}//process_animal

int main(void)
{

	/*In the application code, we can choose which
	 *animal shall be used in the following manner
	 *
	 *At the application level, we can assume that different
	 *animal implementations are ready for us and we can
	 *simply use them.
	 *
	 *At the lower level, in order to add more support,
	 *we need to do the following steps:
	 *
	 *1. Add the animal type in the AnimalTypes Enumeration list
	 *2. Implement the animal
	 *3. Add the logic to check and build the animal in the factory
	 *
	 **/
	Animal *animal = getAnimal(DOG);

	/*this call or similar calls that need or use the animal
	 *will remain untouched with the factory pattern because
	 *it does not know about which specific animal is being used*/
	process_animal(animal);



	return EXIT_SUCCESS;
}
