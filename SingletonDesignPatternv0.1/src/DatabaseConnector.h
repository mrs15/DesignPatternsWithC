/*
 * DatabaseConnector.h
 *
 *  Created on: May 31, 2023
 *      Author: rafay
 */

#ifndef DATABASECONNECTOR_H_
#define DATABASECONNECTOR_H_

typedef struct DatabaseConnection_t DB_Connection;

DB_Connection * DB_GetInstance(void);
void DB_init(DB_Connection *instance);
void DB_add(DB_Connection *DB_instance, int data);
void DB_delete(DB_Connection *DB_instance, int key);
void DB_print(DB_Connection *instance);


#endif /* DATABASECONNECTOR_H_ */
