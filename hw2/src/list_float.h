#ifndef __LIST_H__
#define __LIST_H__
#include <stddef.h>

typedef struct node_float
{
	float val;
	struct node_float* prev, *nex;
}node_float;

typedef struct list_float
{
	size_t size;
	node_float* head, *tail;
}list_float;

list_float* new_list_float();
static void _insert(node_float*, int);
static void _remove(node_float*);
void l_f_insert(list_float*, size_t, int);
void l_f_remove(list_float*, size_t);
void l_f_push_front(list_float*, int);
void l_f_push_back(list_float*, int);
void l_f_pop_front(list_float*);
void l_f_pop_back(list_float*);

#endif
