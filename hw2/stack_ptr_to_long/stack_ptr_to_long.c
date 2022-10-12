#include "../src/stack_ptr_to_long.h"
#include "../src/list_ptr_to_long.h"
typedef long* ptr_to_long;
#include "../src/mm.h"

stack_ptr_to_long * new_stack_ptr_to_long()
{
	stack_ptr_to_long * s = (stack_ptr_to_long *)mymalloc(sizeof(stack_ptr_to_long));
	s->size = 0;
	s->List = new_list_ptr_to_long();
	return s;
}

void stack_ptr_to_long_push(stack_ptr_to_long * s, ptr_to_long val)
{
	if (!s) return;
	++s->size;
	list_ptr_to_long_push_back(s->List, val);
}
void stack_ptr_to_long_pop(stack_ptr_to_long * s)
{
	if (!s) return;
	if (s->size == 0) return;
	--s->size;
	list_ptr_to_long_pop_back(s->List);
}

ptr_to_long stack_ptr_to_long_top(stack_ptr_to_long * s)
{
	if (!s) return 0;
	if (s->size == 0) return 0;
	return (s->List->tail->prev)->val;
}
