#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <stddef.h>
#include "list.h"
#include "mydef.h"
#define define_queue(__TYPE__)\
typedef struct queue_##__TYPE__\
{\
	size_t size;\
	list_##__TYPE__ * List;\
}queue_##__TYPE__;\
\
queue_##__TYPE__ * new_queue_##__TYPE__();\
void queue_##__TYPE__##_push(queue_##__TYPE__ *, __TYPE__);\
__TYPE__ queue_##__TYPE__##_top(queue_##__TYPE__ *);\
void queue_##__TYPE__##_pop(queue_##__TYPE__ *);

define_queue(char)
define_queue(short)
define_queue(int)
define_queue(long)
define_queue(float)
define_queue(double)

define_queue(ptr_to_char)
define_queue(ptr_to_short)
define_queue(ptr_to_int)
define_queue(ptr_to_long)
define_queue(ptr_to_float)
define_queue(ptr_to_double)
#endif
