#ifndef __STACK_char_H__
#define __STACK_char_H__
#include <stddef.h>
#include "list_char.h"
typedef struct stack_char
{
	size_t size;
	list_char * List;
}stack_char;

stack_char * new_stack_char();
void stack_char_push(stack_char *, char);
void stack_char_pop(stack_char *);
char stack_char_top(stack_char *);
#endif
