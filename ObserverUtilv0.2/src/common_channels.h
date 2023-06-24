/*
 * common_channels.h
 *
 *  Created on: Jun 21, 2023
 *      Author: rafay
 */

#ifndef COMMON_CHANNELS_H_
#define COMMON_CHANNELS_H_

#include "util/channel.h"

extern channel temp;
extern channel hum;
extern channel cloud_data;
extern channel display;
extern channel adc;

void init_all_channels(void);


#endif /* COMMON_CHANNELS_H_ */
