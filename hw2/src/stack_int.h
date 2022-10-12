#ifndef __STACK_int_H__
#define __STACK_int_H__
#include <stddef.h>
#include "list_int.h"
typedef struct stack_int
{
	size_t size;
	list_int * List;
}stack_int;

stack_int * new_stack_int();
void stack_int_push(stack_int *, int);
void stack_int_pop(stack_int *);
int stack_int_top(stack_int *);
#endif
