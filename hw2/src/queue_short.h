#ifndef __QUEUE_short_H__
#define __QUEUE_short_H__
#include <stddef.h>
#include "list_short.h"
typedef struct queue_short
{
	size_t size;
	list_short * List;
}queue_short;

queue_short * new_queue_short();
void queue_short_push(queue_short *, short);
short queue_short_top(queue_short *);
void queue_short_pop(queue_short *);
#endif
