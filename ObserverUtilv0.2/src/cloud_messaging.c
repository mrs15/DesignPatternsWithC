/*
 * cloud_messaging.c
 *
 *  Created on: Jun 24, 2023
 *      Author: rafay
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "util/channel.h"
#include "cloud_messaging.h"
#include "common_channels.h"

static cloud_data_t _cloud_data;
static int _temp;

static void cloud_update_cb(void *data)
{

	_cloud_data = *(cloud_data_t *)data;

	printf("[+]Cloud Sent: %3d\t%3d\t%3d\n", _cloud_data.connection_status,
			                                 _cloud_data.temp_data,
											 _cloud_data.hum_data);

}

static void temp_update_cb(void *data)
{
	_temp = *(int *)data;

	printf("[+]Cloud Temp Sent: %d\n", _temp);

}

void init_cloud_messaging(void)
{
	subscribe(&cloud_data, &cloud_update_cb);
	subscribe(&temp, &temp_update_cb);
}
