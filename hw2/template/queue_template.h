#ifndef __QUEUE_<type>_H__
#define __QUEUE_<type>_H__
#include <stddef.h>
#include "list_<type>.h"
typedef struct queue_<type>
{
	size_t size;
	list_<type> * List;
}queue_<type>;

queue_<type> * new_queue_<type>();
void queue_<type>_push(queue_<type> *, <type>);
<type> queue_<type>_top(queue_<type> *);
void queue_<type>_pop(queue_<type> *);
#endif
