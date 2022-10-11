#ifndef __LIST_H__
#define __LIST_H__
#include <stddef.h>

typedef struct node
{
	short* val;
	struct node* prev, *nex;
}node;

typedef struct list
{
	size_t size;
	node* head, *tail;
}list;

list* new_list();
void _insert(node*, int);
void _remove(node*);
void linsert(list*, size_t, int);
void lremove(list*, size_t);
void lpush_front(list*, int);
void lpush_back(list*, int);
void lpop_front(list*);
void lpop_back(list*);

#endif
