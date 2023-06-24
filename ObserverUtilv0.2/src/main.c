/*
 ============================================================================
 Name        : 2.c
 Author      : Muhammad Rafay Shams
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "util/channel.h"

#include "common_channels.h"
#include "cloud_messaging.h"

static cloud_data_t app_cloud_data;
static int app_temp;

static void send_to_cloud(void)
{
	set_data(&cloud_data, &app_cloud_data);
}

static void update_temp(void)
{
	set_data(&temp, &app_temp);

}

static void app_temp_update(void *data)
{
	printf("[+]APP Temp: %d\n", *(int *)data);
}

int main(void)
{
	app_temp = 0;
	memset(&app_cloud_data, 0, sizeof(cloud_data_t));

	init_all_channels();

	subscribe(&temp, &app_temp_update);
	init_cloud_messaging();

	app_cloud_data.connection_status = 100;
	app_cloud_data.hum_data = 90;
	app_cloud_data.temp_data = 75;

	send_to_cloud();
	update_temp();

	app_temp = 67;
	app_cloud_data.temp_data = app_temp;
	send_to_cloud();

	return EXIT_SUCCESS;
}
