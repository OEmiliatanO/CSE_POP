#include "../src/stack_ptr_to_short.h"
#include "../src/list_ptr_to_short.h"
typedef short* ptr_to_short;
#include "../src/mm.h"

stack_ptr_to_short * new_stack_ptr_to_short()
{
	stack_ptr_to_short * s = (stack_ptr_to_short *)mymalloc(sizeof(stack_ptr_to_short));
	s->size = 0;
	s->List = new_list_ptr_to_short();
	return s;
}

void stack_ptr_to_short_push(stack_ptr_to_short * s, ptr_to_short val)
{
	if (!s) return;
	++s->size;
	list_ptr_to_short_push_back(s->List, val);
}
void stack_ptr_to_short_pop(stack_ptr_to_short * s)
{
	if (!s) return;
	if (s->size == 0) return;
	--s->size;
	list_ptr_to_short_pop_back(s->List);
}

ptr_to_short stack_ptr_to_short_top(stack_ptr_to_short * s)
{
	if (!s) return 0;
	if (s->size == 0) return 0;
	return (s->List->tail->prev)->val;
}
