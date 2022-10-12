#ifndef __QUEUE_ptr_to_short_H__
#define __QUEUE_ptr_to_short_H__
typedef short* ptr_to_short;
#include <stddef.h>
#include "list_ptr_to_short.h"
typedef struct queue_ptr_to_short
{
	size_t size;
	list_ptr_to_short * List;
}queue_ptr_to_short;

queue_ptr_to_short * new_queue_ptr_to_short();
void queue_ptr_to_short_push(queue_ptr_to_short *, ptr_to_short);
ptr_to_short queue_ptr_to_short_top(queue_ptr_to_short *);
void queue_ptr_to_short_pop(queue_ptr_to_short *);
#endif
