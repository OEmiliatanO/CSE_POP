#include "../src/queue_ptr_to_long.h"
#include "../src/list_ptr_to_long.h"
typedef long* ptr_to_long;
#include "../src/mm.h"

queue_ptr_to_long * new_queue_ptr_to_long()
{
	queue_ptr_to_long * q = (queue_ptr_to_long *)mymalloc(sizeof(queue_ptr_to_long));
	q->size = 0;
	q->List = new_list_ptr_to_long();
	return q;
}

void queue_ptr_to_long_push(queue_ptr_to_long * q, ptr_to_long val)
{
	if (!q) return;
	list_ptr_to_long_push_front(q->List, val);
	++q->size;
}

void queue_ptr_to_long_pop(queue_ptr_to_long * q)
{
	if (!q) return;
	if (q->size == 0) return;
	list_ptr_to_long_pop_back(q->List);
	--q->size;
}

ptr_to_long queue_ptr_to_long_top(queue_ptr_to_long * q)
{
	if (!q) return 0;
	if (q->size == 0) return 0;
	return (q->List->tail->prev)->val;
}
