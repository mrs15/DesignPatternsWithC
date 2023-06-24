/*
 * common_channels.c
 *
 *  Created on: Jun 21, 2023
 *      Author: rafay
 */

#include "common_channels.h"
#include "util/channel.h"


channel temp;
channel hum;
channel cloud_data;
channel display;
channel adc;

void init_all_channels(void)
{
	init_channel(&temp);
	init_channel(&hum);
	init_channel(&cloud_data);
	init_channel(&display);
	init_channel(&adc);
}

