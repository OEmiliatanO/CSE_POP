#ifndef __STACK_ptr_to_double_H__
#define __STACK_ptr_to_double_H__
typedef double* ptr_to_double;
#include <stddef.h>
#include "list_ptr_to_double.h"
typedef struct stack_ptr_to_double
{
	size_t size;
	list_ptr_to_double * List;
}stack_ptr_to_double;

stack_ptr_to_double * new_stack_ptr_to_double();
void stack_ptr_to_double_push(stack_ptr_to_double *, ptr_to_double);
void stack_ptr_to_double_pop(stack_ptr_to_double *);
ptr_to_double stack_ptr_to_double_top(stack_ptr_to_double *);
#endif
