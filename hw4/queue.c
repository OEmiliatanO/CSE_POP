#include <stddef.h>
#include "src/queue.h"
#include "src/list.h"
#include "src/mm.h"
#include "src/mydef.h"

#define define_queue_method(__TYPE__)\
queue_##__TYPE__ * new_queue_##__TYPE__()\
{\
	queue_##__TYPE__* q = (queue_##__TYPE__ *)mymalloc(sizeof(queue_##__TYPE__));\
	q->size = 0;\
	q->List = new_list_##__TYPE__();\
	return q;\
}\
\
void queue_##__TYPE__##_push(queue_##__TYPE__ * q, __TYPE__ val)\
{\
	if (!q) return;\
	list_##__TYPE__##_push_front(q->List, val);\
	++q->size;\
}\
\
void queue_##__TYPE__##_pop(queue_##__TYPE__ * q)\
{\
	if (!q) return;\
	if (q->size == 0) return;\
	list_##__TYPE__##_pop_back(q->List);\
	--q->size;\
}\
\
__TYPE__ queue_##__TYPE__##_top(queue_##__TYPE__ * q)\
{\
	if (!q) return 0;\
	if (q->size == 0) return 0;\
	return (q->List->tail->prev)->val;\
}

define_queue_method(char)
define_queue_method(short)
define_queue_method(int)
define_queue_method(long)
define_queue_method(float)
define_queue_method(double)

define_queue_method(ptr_to_char)
define_queue_method(ptr_to_short)
define_queue_method(ptr_to_int)
define_queue_method(ptr_to_long)
define_queue_method(ptr_to_float)
define_queue_method(ptr_to_double)
