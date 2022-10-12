#ifndef __STACK_ptr_to_char_H__
#define __STACK_ptr_to_char_H__
typedef char* ptr_to_char;
#include <stddef.h>
#include "list_ptr_to_char.h"
typedef struct stack_ptr_to_char
{
	size_t size;
	list_ptr_to_char * List;
}stack_ptr_to_char;

stack_ptr_to_char * new_stack_ptr_to_char();
void stack_ptr_to_char_push(stack_ptr_to_char *, ptr_to_char);
void stack_ptr_to_char_pop(stack_ptr_to_char *);
ptr_to_char stack_ptr_to_char_top(stack_ptr_to_char *);
#endif
