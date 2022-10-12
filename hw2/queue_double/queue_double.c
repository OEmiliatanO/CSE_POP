#include "../src/queue_double.h"
#include "../src/list_double.h"
#include "../src/mm.h"

queue_double * new_queue_double()
{
	queue_double * q = (queue_double *)mymalloc(sizeof(queue_double));
	q->size = 0;
	q->List = new_list_double();
	return q;
}

void queue_double_push(queue_double * q, double val)
{
	if (!q) return;
	list_double_push_front(q->List, val);
	++q->size;
}

void queue_double_pop(queue_double * q)
{
	if (!q) return;
	if (q->size == 0) return;
	list_double_pop_back(q->List);
	--q->size;
}

double queue_double_top(queue_double * q)
{
	if (!q) return 0;
	if (q->size == 0) return 0;
	return (q->List->tail->prev)->val;
}
