#ifndef __LIST_char_H__
#define __LIST_char_H__
#include <stddef.h>
typedef struct node_char
{
	char val;
	struct node_char * prev, *nex;
}node_char;

typedef struct list_char
{
	size_t size;
	node_char * head, *tail;
}list_char;

list_char * new_list_char();
void list_char_insert(list_char *, size_t, char);
void list_char_remove(list_char *, size_t);
void list_char_push_front(list_char *, char);
void list_char_push_back(list_char *, char);
void list_char_pop_front(list_char *);
void list_char_pop_back(list_char *);
#endif
