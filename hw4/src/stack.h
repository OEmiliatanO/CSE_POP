#ifndef __STACK_H__
#define __STACK_H__
#include <stddef.h>
#include "list.h"
#include "mydef.h"
#define define_stack(__TYPE__)\
typedef struct stack_##__TYPE__\
{\
	size_t size;\
	list_##__TYPE__ * List;\
}stack_##__TYPE__;\
\
stack_##__TYPE__ * new_stack_##__TYPE__();\
void stack_##__TYPE__##_push(stack_##__TYPE__ *, __TYPE__);\
void stack_##__TYPE__##_pop(stack_##__TYPE__ *);\
__TYPE__ stack_##__TYPE__##_top(stack_##__TYPE__ *);

define_stack(char)
define_stack(short)
define_stack(int)
define_stack(long)
define_stack(float)
define_stack(double)

define_stack(ptr_to_char)
define_stack(ptr_to_short)
define_stack(ptr_to_int)
define_stack(ptr_to_long)
define_stack(ptr_to_float)
define_stack(ptr_to_double)
#endif
