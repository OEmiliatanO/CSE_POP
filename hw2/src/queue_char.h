#ifndef __QUEUE_char_H__
#define __QUEUE_char_H__
#include <stddef.h>
#include "list_char.h"
typedef struct queue_char
{
	size_t size;
	list_char * List;
}queue_char;

queue_char * new_queue_char();
void queue_char_push(queue_char *, char);
char queue_char_top(queue_char *);
void queue_char_pop(queue_char *);
#endif
