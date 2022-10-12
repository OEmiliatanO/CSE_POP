#include "../src/queue_ptr_to_short.h"
#include "../src/list_ptr_to_short.h"
typedef short* ptr_to_short;
#include "../src/mm.h"

queue_ptr_to_short * new_queue_ptr_to_short()
{
	queue_ptr_to_short * q = (queue_ptr_to_short *)mymalloc(sizeof(queue_ptr_to_short));
	q->size = 0;
	q->List = new_list_ptr_to_short();
	return q;
}

void queue_ptr_to_short_push(queue_ptr_to_short * q, ptr_to_short val)
{
	if (!q) return;
	list_ptr_to_short_push_front(q->List, val);
	++q->size;
}

void queue_ptr_to_short_pop(queue_ptr_to_short * q)
{
	if (!q) return;
	if (q->size == 0) return;
	list_ptr_to_short_pop_back(q->List);
	--q->size;
}

ptr_to_short queue_ptr_to_short_top(queue_ptr_to_short * q)
{
	if (!q) return 0;
	if (q->size == 0) return 0;
	return (q->List->tail->prev)->val;
}
