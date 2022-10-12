#ifndef __STACK_float_H__
#define __STACK_float_H__
#include <stddef.h>
#include "list_float.h"
typedef struct stack_float
{
	size_t size;
	list_float * List;
}stack_float;

stack_float * new_stack_float();
void stack_float_push(stack_float *, float);
void stack_float_pop(stack_float *);
float stack_float_top(stack_float *);
#endif
