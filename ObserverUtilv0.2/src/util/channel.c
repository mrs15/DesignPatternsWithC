/*
 * channel.c
 *
 *  Created on: Jun 21, 2023
 *      Author: rafay
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "channel.h"
#include "observer.h"

static void notify_observers(channel *ch)
{
	if(ch == NULL)
	{
		return;
	}

	for(int i=0; i<ch->observer_index; i++)
	{
		ch->observer_list[i](ch->data);
	}

}//notify_observers

void init_channel(channel *ch)
{
	if(ch != NULL)
	{
		ch->data = NULL;
		ch->observer_index = 0;
		memset((notify_t *)ch->observer_list, 0, sizeof(notify_t));
	}
}//init_channel

void subscribe(channel *ch, notify_t notify_cb)
{
	if(ch != NULL && notify_cb != NULL)
	{
		ch->observer_list[ch->observer_index] = notify_cb;
	    (ch->observer_index)++;
	}

}//subscribe

void set_data(channel *ch, void *data)
{

	if(ch != NULL)
	{
		ch->data = data;
		notify_observers(ch);
	}

}//set_data

