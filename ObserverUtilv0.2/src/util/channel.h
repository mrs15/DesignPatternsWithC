/*
 * channel.h
 *
 *  Created on: Jun 21, 2023
 *      Author: rafay
 */

#ifndef UTIL_CHANNEL_H_
#define UTIL_CHANNEL_H_

#include "observer.h"

#define MAX_OBSERVERS (10)

typedef struct{
	notify_t observer_list[MAX_OBSERVERS];
	int observer_index;
	void *data;
}channel;

/*initializes all the channel to default values*/
void init_channel(channel *ch);

/*adds the observer to the observer list of the given channel/stream*/
void subscribe(channel *ch, notify_t notify_cb);

/*sets the data of given channel/stream and notifies all the users*/
void set_data(channel *ch, void *data);

#endif /* UTIL_CHANNEL_H_ */
