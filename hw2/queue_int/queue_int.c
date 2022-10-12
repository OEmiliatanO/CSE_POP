#include "../src/queue_int.h"
#include "../src/list_int.h"
#include "../src/mm.h"

queue_int * new_queue_int()
{
	queue_int * q = (queue_int *)mymalloc(sizeof(queue_int));
	q->size = 0;
	q->List = new_list_int();
	return q;
}

void queue_int_push(queue_int * q, int val)
{
	if (!q) return;
	list_int_push_front(q->List, val);
	++q->size;
}

void queue_int_pop(queue_int * q)
{
	if (!q) return;
	if (q->size == 0) return;
	list_int_pop_back(q->List);
	--q->size;
}

int queue_int_top(queue_int * q)
{
	if (!q) return 0;
	if (q->size == 0) return 0;
	return (q->List->tail->prev)->val;
}
