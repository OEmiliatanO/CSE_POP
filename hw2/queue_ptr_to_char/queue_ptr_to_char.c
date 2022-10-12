#include "../src/queue_ptr_to_char.h"
#include "../src/list_ptr_to_char.h"
typedef char* ptr_to_char;
#include "../src/mm.h"

queue_ptr_to_char * new_queue_ptr_to_char()
{
	queue_ptr_to_char * q = (queue_ptr_to_char *)mymalloc(sizeof(queue_ptr_to_char));
	q->size = 0;
	q->List = new_list_ptr_to_char();
	return q;
}

void queue_ptr_to_char_push(queue_ptr_to_char * q, ptr_to_char val)
{
	if (!q) return;
	list_ptr_to_char_push_front(q->List, val);
	++q->size;
}

void queue_ptr_to_char_pop(queue_ptr_to_char * q)
{
	if (!q) return;
	if (q->size == 0) return;
	list_ptr_to_char_pop_back(q->List);
	--q->size;
}

ptr_to_char queue_ptr_to_char_top(queue_ptr_to_char * q)
{
	if (!q) return 0;
	if (q->size == 0) return 0;
	return (q->List->tail->prev)->val;
}
