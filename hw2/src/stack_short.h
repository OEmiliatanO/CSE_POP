#ifndef __STACK_short_H__
#define __STACK_short_H__
#include <stddef.h>
#include "list_short.h"
typedef struct stack_short
{
	size_t size;
	list_short * List;
}stack_short;

stack_short * new_stack_short();
void stack_short_push(stack_short *, short);
void stack_short_pop(stack_short *);
short stack_short_top(stack_short *);
#endif
