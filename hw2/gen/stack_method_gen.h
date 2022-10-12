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
