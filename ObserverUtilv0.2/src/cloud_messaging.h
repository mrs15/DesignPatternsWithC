/*
 * cloud_messaging.h
 *
 *  Created on: Jun 24, 2023
 *      Author: rafay
 */

#ifndef CLOUD_MESSAGING_H_
#define CLOUD_MESSAGING_H_

typedef struct{
	int connection_status;
	int temp_data;
	int hum_data;
}cloud_data_t;

void init_cloud_messaging(void);



#endif /* CLOUD_MESSAGING_H_ */
