#ifndef __LIST_float_H__
#define __LIST_float_H__
#include <stddef.h>
typedef struct node_float
{
	float val;
	struct node_float * prev, *nex;
}node_float;

typedef struct list_float
{
	size_t size;
	node_float * head, *tail;
}list_float;

list_float * new_list_float();
void list_float_insert(list_float *, size_t, float);
void list_float_remove(list_float *, size_t);
void list_float_push_front(list_float *, float);
void list_float_push_back(list_float *, float);
void list_float_pop_front(list_float *);
void list_float_pop_back(list_float *);
#endif
