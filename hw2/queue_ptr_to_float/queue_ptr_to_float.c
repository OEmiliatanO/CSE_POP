#include "../src/queue_ptr_to_float.h"
#include "../src/list_ptr_to_float.h"
typedef float* ptr_to_float;
#include "../src/mm.h"

queue_ptr_to_float * new_queue_ptr_to_float()
{
	queue_ptr_to_float * q = (queue_ptr_to_float *)mymalloc(sizeof(queue_ptr_to_float));
	q->size = 0;
	q->List = new_list_ptr_to_float();
	return q;
}

void queue_ptr_to_float_push(queue_ptr_to_float * q, ptr_to_float val)
{
	if (!q) return;
	list_ptr_to_float_push_front(q->List, val);
	++q->size;
}

void queue_ptr_to_float_pop(queue_ptr_to_float * q)
{
	if (!q) return;
	if (q->size == 0) return;
	list_ptr_to_float_pop_back(q->List);
	--q->size;
}

ptr_to_float queue_ptr_to_float_top(queue_ptr_to_float * q)
{
	if (!q) return 0;
	if (q->size == 0) return 0;
	return (q->List->tail->prev)->val;
}
