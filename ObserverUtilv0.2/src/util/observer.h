/*
 * observer.h
 *
 *  Created on: Jun 21, 2023
 *      Author: rafay
 */

#ifndef UTIL_OBSERVER_H_
#define UTIL_OBSERVER_H_

/*interface for the observer notification.
 *to be implemented by each observer*/
typedef void (*notify_t)(void *data);

#endif /* UTIL_OBSERVER_H_ */
