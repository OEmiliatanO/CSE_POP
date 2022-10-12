#ifndef __QUEUE_ptr_to_double_H__
#define __QUEUE_ptr_to_double_H__
typedef double* ptr_to_double;
#include <stddef.h>
#include "list_ptr_to_double.h"
typedef struct queue_ptr_to_double
{
	size_t size;
	list_ptr_to_double * List;
}queue_ptr_to_double;

queue_ptr_to_double * new_queue_ptr_to_double();
void queue_ptr_to_double_push(queue_ptr_to_double *, ptr_to_double);
ptr_to_double queue_ptr_to_double_top(queue_ptr_to_double *);
void queue_ptr_to_double_pop(queue_ptr_to_double *);
#endif
