#include "../src/queue_short.h"
#include "../src/list_short.h"
#include "../src/mm.h"

queue_short * new_queue_short()
{
	queue_short * q = (queue_short *)mymalloc(sizeof(queue_short));
	q->size = 0;
	q->List = new_list_short();
	return q;
}

void queue_short_push(queue_short * q, short val)
{
	if (!q) return;
	list_short_push_front(q->List, val);
	++q->size;
}

void queue_short_pop(queue_short * q)
{
	if (!q) return;
	if (q->size == 0) return;
	list_short_pop_back(q->List);
	--q->size;
}

short queue_short_top(queue_short * q)
{
	if (!q) return 0;
	if (q->size == 0) return 0;
	return (q->List->tail->prev)->val;
}
