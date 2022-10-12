#include "../src/queue_ptr_to_double.h"
#include "../src/list_ptr_to_double.h"
typedef double* ptr_to_double;
#include "../src/mm.h"

queue_ptr_to_double * new_queue_ptr_to_double()
{
	queue_ptr_to_double * q = (queue_ptr_to_double *)mymalloc(sizeof(queue_ptr_to_double));
	q->size = 0;
	q->List = new_list_ptr_to_double();
	return q;
}

void queue_ptr_to_double_push(queue_ptr_to_double * q, ptr_to_double val)
{
	if (!q) return;
	list_ptr_to_double_push_front(q->List, val);
	++q->size;
}

void queue_ptr_to_double_pop(queue_ptr_to_double * q)
{
	if (!q) return;
	if (q->size == 0) return;
	list_ptr_to_double_pop_back(q->List);
	--q->size;
}

ptr_to_double queue_ptr_to_double_top(queue_ptr_to_double * q)
{
	if (!q) return 0;
	if (q->size == 0) return 0;
	return (q->List->tail->prev)->val;
}
