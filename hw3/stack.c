#include <stddef.h>
#include "src/stack.h"
#include "src/mm.h"
#include "src/list.h"
#include "src/mydef.h"
#define define_stack_method(__TYPE__)\
stack_##__TYPE__ * new_stack_##__TYPE__()\
{\
	stack_##__TYPE__ * s = (stack_##__TYPE__ *)mymalloc(sizeof(stack_##__TYPE__));\
	s->size = 0;\
	s->List = new_list_##__TYPE__();\
	return s;\
}\
\
void stack_##__TYPE__##_push(stack_##__TYPE__ * s, __TYPE__ val)\
{\
	if (!s) return;\
	++s->size;\
	list_##__TYPE__##_push_back(s->List, val);\
}\
void stack_##__TYPE__##_pop(stack_##__TYPE__ * s)\
{\
	if (!s) return;\
	if (s->size == 0) return;\
	--s->size;\
	list_##__TYPE__##_pop_back(s->List);\
}\
\
__TYPE__ stack_##__TYPE__##_top(stack_##__TYPE__ * s)\
{\
	if (!s) return 0;\
	if (s->size == 0) return 0;\
	return (s->List->tail->prev)->val;\
}

define_stack_method(char)
define_stack_method(short)
define_stack_method(int)
define_stack_method(long)
define_stack_method(float)
define_stack_method(double)

define_stack_method(ptr_to_char)
define_stack_method(ptr_to_short)
define_stack_method(ptr_to_int)
define_stack_method(ptr_to_long)
define_stack_method(ptr_to_float)
define_stack_method(ptr_to_double)
