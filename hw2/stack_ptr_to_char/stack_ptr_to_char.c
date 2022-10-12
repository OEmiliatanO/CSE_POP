#include "../src/stack_ptr_to_char.h"
#include "../src/list_ptr_to_char.h"
typedef char* ptr_to_char;
#include "../src/mm.h"

stack_ptr_to_char * new_stack_ptr_to_char()
{
	stack_ptr_to_char * s = (stack_ptr_to_char *)mymalloc(sizeof(stack_ptr_to_char));
	s->size = 0;
	s->List = new_list_ptr_to_char();
	return s;
}

void stack_ptr_to_char_push(stack_ptr_to_char * s, ptr_to_char val)
{
	if (!s) return;
	++s->size;
	list_ptr_to_char_push_back(s->List, val);
}
void stack_ptr_to_char_pop(stack_ptr_to_char * s)
{
	if (!s) return;
	if (s->size == 0) return;
	--s->size;
	list_ptr_to_char_pop_back(s->List);
}

ptr_to_char stack_ptr_to_char_top(stack_ptr_to_char * s)
{
	if (!s) return 0;
	if (s->size == 0) return 0;
	return (s->List->tail->prev)->val;
}
