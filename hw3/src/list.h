#ifndef __LIST_H__
#define __LIST_H__
#include <stddef.h>
#include "mydef.h"
#define define_list(__TYPE__)\
typedef struct node_##__TYPE__\
{\
	__TYPE__ val;\
	struct node_##__TYPE__ * prev, *nex;\
}node_##__TYPE__;\
\
typedef struct list_##__TYPE__\
{\
	size_t size;\
	node_##__TYPE__ * head, *tail;\
}list_##__TYPE__;\
\
list_##__TYPE__ * new_list_##__TYPE__();\
void list_##__TYPE__##_insert(list_##__TYPE__ *, size_t, __TYPE__);\
void list_##__TYPE__##_remove(list_##__TYPE__ *, size_t);\
void list_##__TYPE__##_push_front(list_##__TYPE__ *, __TYPE__);\
void list_##__TYPE__##_push_back(list_##__TYPE__ *, __TYPE__);\
void list_##__TYPE__##_pop_front(list_##__TYPE__ *);\
void list_##__TYPE__##_pop_back(list_##__TYPE__ *);

define_list(char)
define_list(short)
define_list(int)
define_list(long)
define_list(float)
define_list(double)

define_list(ptr_to_char)
define_list(ptr_to_short)
define_list(ptr_to_int)
define_list(ptr_to_long)
define_list(ptr_to_float)
define_list(ptr_to_double)
#endif
