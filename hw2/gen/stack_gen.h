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
int stack_##__TYPE__##_top(stack_##__TYPE__ *);
