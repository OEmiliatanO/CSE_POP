#include "../src/queue_float.h"
#include "../src/list_float.h"
#include "../src/mm.h"

queue_float * new_queue_float()
{
	queue_float * q = (queue_float *)mymalloc(sizeof(queue_float));
	q->size = 0;
	q->List = new_list_float();
	return q;
}

void queue_float_push(queue_float * q, float val)
{
	if (!q) return;
	list_float_push_front(q->List, val);
	++q->size;
}

void queue_float_pop(queue_float * q)
{
	if (!q) return;
	if (q->size == 0) return;
	list_float_pop_back(q->List);
	--q->size;
}

float queue_float_top(queue_float * q)
{
	if (!q) return 0;
	if (q->size == 0) return 0;
	return (q->List->tail->prev)->val;
}
