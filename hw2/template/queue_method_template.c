#include "../src/queue_<type>.h"
#include "../src/list_<type>.h"
#include "../src/mm.h"

queue_<type> * new_queue_<type>()
{
	queue_<type> * q = (queue_<type> *)mymalloc(sizeof(queue_<type>));
	q->size = 0;
	q->List = new_list_<type>();
	return q;
}

void queue_<type>_push(queue_<type> * q, <type> val)
{
	if (!q) return;
	list_<type>_push_front(q->List, val);
	++q->size;
}

void queue_<type>_pop(queue_<type> * q)
{
	if (!q) return;
	if (q->size == 0) return;
	list_<type>_pop_back(q->List);
	--q->size;
}

<type> queue_<type>_top(queue_<type> * q)
{
	if (!q) return 0;
	if (q->size == 0) return 0;
	return (q->List->tail->prev)->val;
}
