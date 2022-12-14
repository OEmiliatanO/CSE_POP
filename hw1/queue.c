#include "src/queue.h"
#include "src/list.h"
#include "src/mm.h"

queue* new_queue()
{
	queue* q = (queue *)mymalloc(sizeof(queue));
	q->size = 0;
	q->List = new_list();
	return q;
}

void qpush(queue* q, int val)
{
	if (!q) return;
	lpush_front(q->List, val);
	++q->size;
}

void qpop(queue* q)
{
	if (!q) return;
	if (q->size == 0) return;
	lpop_back(q->List);
	--q->size;
}

int qtop(queue* q)
{
	if (!q) return 0xffffffff;
	if (q->size == 0) return 0xffffffff;
	return (q->List->tail->prev)->val;
}
