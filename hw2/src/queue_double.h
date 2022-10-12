#ifndef __QUEUE_double_H__
#define __QUEUE_double_H__
#include <stddef.h>
#include "list_double.h"
typedef struct queue_double
{
	size_t size;
	list_double * List;
}queue_double;

queue_double * new_queue_double();
void queue_double_push(queue_double *, double);
double queue_double_top(queue_double *);
void queue_double_pop(queue_double *);
#endif
