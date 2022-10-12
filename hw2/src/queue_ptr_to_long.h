#ifndef __QUEUE_ptr_to_long_H__
#define __QUEUE_ptr_to_long_H__
typedef long* ptr_to_long;
#include <stddef.h>
#include "list_ptr_to_long.h"
typedef struct queue_ptr_to_long
{
	size_t size;
	list_ptr_to_long * List;
}queue_ptr_to_long;

queue_ptr_to_long * new_queue_ptr_to_long();
void queue_ptr_to_long_push(queue_ptr_to_long *, ptr_to_long);
ptr_to_long queue_ptr_to_long_top(queue_ptr_to_long *);
void queue_ptr_to_long_pop(queue_ptr_to_long *);
#endif
