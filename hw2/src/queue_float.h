#ifndef __QUEUE_float_H__
#define __QUEUE_float_H__
#include <stddef.h>
#include "list_float.h"
typedef struct queue_float
{
	size_t size;
	list_float * List;
}queue_float;

queue_float * new_queue_float();
void queue_float_push(queue_float *, float);
float queue_float_top(queue_float *);
void queue_float_pop(queue_float *);
#endif
