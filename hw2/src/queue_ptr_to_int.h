#ifndef __QUEUE_ptr_to_int_H__
#define __QUEUE_ptr_to_int_H__
typedef int* ptr_to_int;
#include <stddef.h>
#include "list_ptr_to_int.h"
typedef struct queue_ptr_to_int
{
	size_t size;
	list_ptr_to_int * List;
}queue_ptr_to_int;

queue_ptr_to_int * new_queue_ptr_to_int();
void queue_ptr_to_int_push(queue_ptr_to_int *, ptr_to_int);
ptr_to_int queue_ptr_to_int_top(queue_ptr_to_int *);
void queue_ptr_to_int_pop(queue_ptr_to_int *);
#endif
