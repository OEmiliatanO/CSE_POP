#ifndef __QUEUE_int_H__
#define __QUEUE_int_H__
#include <stddef.h>
#include "list_int.h"
typedef struct queue_int
{
	size_t size;
	list_int * List;
}queue_int;

queue_int * new_queue_int();
void queue_int_push(queue_int *, int);
int queue_int_top(queue_int *);
void queue_int_pop(queue_int *);
#endif
