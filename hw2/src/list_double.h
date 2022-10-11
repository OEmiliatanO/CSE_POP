#ifndef __LIST_H__
#define __LIST_H__
#include <stddef.h>

typedef struct node_double
{
	double val;
	struct node* prev, *nex;
}node_double;

typedef struct list_double
{
	size_t size;
	node_double* head, *tail;
}list_double;

list_double* new_list_double();
static void _insert(node_double*, int);
static void _remove(node_double*);
void l_d_insert(list_double*, size_t, int);
void l_d_remove(list_double*, size_t);
void l_d_push_front(list_double*, int);
void l_d_push_back(list_double*, int);
void l_d_pop_front(list_double*);
void l_d_pop_back(list_double*);

#endif
