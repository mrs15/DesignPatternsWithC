/*
 * DatabaseConnector.c
 *
 *  Created on: May 31, 2023
 *      Author: rafay
 */

#include <stdio.h>
#include <stdlib.h>

#include "DatabaseConnector.h"

#define LOG(message) printf("%s\n", message)

struct DatabaseConnection_t{
	int data;
	int saved_counts;
};

static DB_Connection db_instance;

DB_Connection * DB_GetInstance(void)
{
	return &db_instance;

}//DB_GetInstance

void DB_init(DB_Connection *instance)
{
	instance->data = -1;
	instance->saved_counts = 0;

	LOG("DB initialized");

}//DB_init

void DB_add(DB_Connection *DB_instance, int data)
{
	DB_instance->data = data;
    (DB_instance->saved_counts)++;

    printf("Added %d to DB\n", data);

}//DB_add

void DB_delete(DB_Connection *DB_instance, int key)
{
	if(DB_instance->data == key)
	{
		DB_instance->data = -1;
		(DB_instance->saved_counts)--;
		printf("Deleted %d from DB\n", key);
	}

	else
	{
		printf("key %d not found in DB\n", key);
	}

}//DB_delete

void DB_print(DB_Connection *instance)
{
	LOG("\n***Database Print***");
	printf("Saved Item Count: %d\n", instance->saved_counts);
	printf("Saved Data: %d\n\n", instance->data);


}//DB_print

