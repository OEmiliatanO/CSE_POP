#ifndef __STACK_double_H__
#define __STACK_double_H__
#include <stddef.h>
#include "list_double.h"
typedef struct stack_double
{
	size_t size;
	list_double * List;
}stack_double;

stack_double * new_stack_double();
void stack_double_push(stack_double *, double);
void stack_double_pop(stack_double *);
double stack_double_top(stack_double *);
#endif
