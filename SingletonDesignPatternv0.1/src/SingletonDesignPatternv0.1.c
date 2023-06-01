/*
 ============================================================================
 Name        : 1.c
 Author      : Muhammad Rafay Shams
 Version     :
 Copyright   : Your copyright notice
 Description : Singleton Design Pattern Implementation in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "DatabaseConnector.h"
#include "SingletonTest.h"

int main(void) {

	DB_Connection *db_instance = DB_GetInstance();
	DB_Connection *db_instance2 = DB_GetInstance();
	DB_Connection *db_instance3 = DB_GetInstance();

	DB_init(db_instance);

	if(db_instance == db_instance2 && db_instance == db_instance3)
		printf("SINGLETON ACHIEVED\n");

	DB_add(db_instance, 1);
	DB_print(db_instance);



	test_init();

	add(2);
	add(3);

	DB_print(db_instance2);

	delete(3);
	DB_add(db_instance3, 67);
	add(39);
	add(474);

	DB_print(db_instance2);


	return EXIT_SUCCESS;
}
