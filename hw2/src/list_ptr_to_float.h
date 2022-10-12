#ifndef __LIST_ptr_to_float_H__
#define __LIST_ptr_to_float_H__
typedef float* ptr_to_float;
#include <stddef.h>
typedef struct node_ptr_to_float
{
	ptr_to_float val;
	struct node_ptr_to_float * prev, *nex;
}node_ptr_to_float;

typedef struct list_ptr_to_float
{
	size_t size;
	node_ptr_to_float * head, *tail;
}list_ptr_to_float;

list_ptr_to_float * new_list_ptr_to_float();
void list_ptr_to_float_insert(list_ptr_to_float *, size_t, ptr_to_float);
void list_ptr_to_float_remove(list_ptr_to_float *, size_t);
void list_ptr_to_float_push_front(list_ptr_to_float *, ptr_to_float);
void list_ptr_to_float_push_back(list_ptr_to_float *, ptr_to_float);
void list_ptr_to_float_pop_front(list_ptr_to_float *);
void list_ptr_to_float_pop_back(list_ptr_to_float *);
#endif
