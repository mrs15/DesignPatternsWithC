/*
 * SingletonTest.c
 *
 *  Created on: May 31, 2023
 *      Author: rafay
 */

#include <stdio.h>
#include <stdlib.h>

#include "DatabaseConnector.h"
#include "SingletonTest.h"

static DB_Connection *sInstance;

void test_init(void)
{
	sInstance = DB_GetInstance();
}

void add(int a)
{
	DB_add(sInstance, a);

}
void delete(int a)
{
	DB_delete(sInstance, a);
}

int  get_count()
{
	//return(sInstance->saved_counts);
	return 10;
}

