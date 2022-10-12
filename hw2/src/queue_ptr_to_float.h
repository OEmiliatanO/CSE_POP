#ifndef __QUEUE_ptr_to_float_H__
#define __QUEUE_ptr_to_float_H__
typedef float* ptr_to_float;
#include <stddef.h>
#include "list_ptr_to_float.h"
typedef struct queue_ptr_to_float
{
	size_t size;
	list_ptr_to_float * List;
}queue_ptr_to_float;

queue_ptr_to_float * new_queue_ptr_to_float();
void queue_ptr_to_float_push(queue_ptr_to_float *, ptr_to_float);
ptr_to_float queue_ptr_to_float_top(queue_ptr_to_float *);
void queue_ptr_to_float_pop(queue_ptr_to_float *);
#endif
