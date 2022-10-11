#ifndef __QUEUE_H__
#define __QUEUE_H__
#include "list_short.h"
#include <stddef.h>

typedef struct queue
{
	size_t size;
	list_short* List;
}queue;

queue* new_queue();
void qpush(queue*, int);
int qtop(queue*);
void qpop(queue*);

#endif
