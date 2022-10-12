#ifndef __STACK_long_H__
#define __STACK_long_H__
#include <stddef.h>
#include "list_long.h"
typedef struct stack_long
{
	size_t size;
	list_long * List;
}stack_long;

stack_long * new_stack_long();
void stack_long_push(stack_long *, long);
void stack_long_pop(stack_long *);
long stack_long_top(stack_long *);
#endif
