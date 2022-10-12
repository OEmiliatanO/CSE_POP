#ifndef __QUEUE_long_H__
#define __QUEUE_long_H__
#include <stddef.h>
#include "list_long.h"
typedef struct queue_long
{
	size_t size;
	list_long * List;
}queue_long;

queue_long * new_queue_long();
void queue_long_push(queue_long *, long);
long queue_long_top(queue_long *);
void queue_long_pop(queue_long *);
#endif
